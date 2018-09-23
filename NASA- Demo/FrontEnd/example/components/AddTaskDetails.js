import React from 'react';
import Select from 'react-select';
import Scheduler, {SchedulerData, ViewTypes, DATE_FORMAT, DemoData} from '../../src/index';
export default class AddTaskDetails extends React.Component{
      constructor(props){
        super(props);
        this.state={
            error : undefined,
            selectedCrewOption:null,
            selectedTaskOption:null,
            typeofEventsSelected:null,
            crewSelected:null

        }
        }

        handleAddTaskOption=(e)=>{
            e.preventDefault();
            const taskActualName = e.target.elements.taskName.value.trim();
            console.log(this.state.typeofEventsSelected);
            console.log(this.state.crewSelected);

            let taskobject = {
                taskName:null,
                taskType:null,
                taskCrew:null
            }

            taskobject.taskName = taskActualName;
            taskobject.tasktype = this.state.typeofEventsSelected;
            taskobject.crewSelected = this.state.crewSelected;
            console.log("submit form")
            //const error = this.props.handleTaskOption(option);
            const error ="no error";
           this.setState(() => ({error}))
           if(!error)
           {
            e.target.elements.option.value =''
           }
        }

    handleCrewChange = (selectedCrewOption) => {
        //Making sure the objects are in their old format
        let resourcesdemo = DemoData.resources;
        const resourcesSelected = (resourceOption) => {
            return resourcesdemo.filter((filterOption) =>
              filterOption.id == resourceOption.value);
          };

        const typeofResourcesSelected =[];
        
        selectedCrewOption.forEach(function(selectedCrew) {
            typeofResourcesSelected.push(resourcesSelected(selectedCrew)[0]);
          });

        this.setState({ 
            selectedCrewOption:selectedCrewOption,
            crewSelected:typeofResourcesSelected
        
        });        
        console.log(`Option selected:`, selectedCrewOption);
        }

    
    handleTaskChange = (selectedTaskOption) => {
        let typeofeventsdemo = DemoData.typeofevents;
        const eventsSelected = (TaskOption) => {
            return typeofeventsdemo.filter((filterOption) =>
              filterOption.id == TaskOption.value);
          }

        const typeofEventsSelected = eventsSelected(selectedTaskOption)[0];
        this.setState({ 
            
            selectedTaskOption:selectedTaskOption,
            typeofEventsSelected:typeofEventsSelected
        
        });
        console.log(`Option selected:`, selectedTaskOption);
        }

    render(){
        let typeofeventsdemo = DemoData.typeofevents;
        const typeofevents = typeofeventsdemo.map(function(row) {         
            return { value : row.id, label : row.name }
         })


         let resourcesdemo = DemoData.resources;
         const resources = resourcesdemo.map(function(row) {          
            return { value : row.id, label : row.name }
          })

        return(
            <div>
            <form  className="addtask" onSubmit={this.handleAddTaskOption}>
                <label>
                    Name Of The Task:&nbsp;&nbsp;
                    <input className="addtask__input" type="text" name="taskName" />
                </label>
                <br/>
                <br/>
                <label>
                Type Of The Task:
                </label>
                <Select name ="taskOption" 
                    value={this.state.selectedTaskOption}
                    onChange={this.handleTaskChange}
                    options={typeofevents}
                    />
                    <br/>
                    <label>
                    Select CrewMembers:
                    </label>
                    <Select name ="taskCrewMembers"
                    value={this.state.selectedCrewOption}
                    onChange={this.handleCrewChange}
                    options={resources}
                    isMulti
                    className="basic-multi-select"
                    classNamePrefix="select"
                    />
                    <button type="submit" className="button" onClick={this.props.handleTaskEnterClick}>Submit</button>
                    <button type="button" className="button" onClick={this.props.handleTaskCancelClick}>No</button>
            </form>

</div>
        )
    }
}