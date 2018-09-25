import React from 'react';
import Select from 'react-select';
import Scheduler, {SchedulerData, ViewTypes, DATE_FORMAT, DemoData} from '../../src/index';
export default class AddTaskDetails extends React.Component{
      constructor(props){
        super(props);
        let typeofeventsdemo = DemoData.typeofevents;
        //console.log(typeofeventsdemo);
        const typeofevents = typeofeventsdemo.map(function(row) {         
            return { value : row.id, label : row.name }
         })


         let resourcesdemo = DemoData.resources;
         const resources = resourcesdemo.map(function(row) {          
            return { value : row.id, label : row.name }
          })

          const resourcesSelected = (resourceOption) => {
            return resources.filter((filterOption) =>
              filterOption.value == resourceOption);
          }; 
       
          //Have to repeat code for default scenario To Do change it later
          const defaultval = resourcesSelected(this.props.defaultSelectSlot);

          let resourcesdemo2 = DemoData.resources;
          const resourcesSelected2 = (resourceOption) => {
              return resourcesdemo2.filter((filterOption) =>
                filterOption.id == resourceOption.value);
            };
  
          const typeofResourcesSelected =[];
          
          defaultval.forEach(function(selectedCrew) {
              typeofResourcesSelected.push(resourcesSelected2(selectedCrew)[0]);
            });
        this.state={
            error : undefined,
            selectedCrewOption:defaultval,
            selectedTaskOption:null,
            typeofEventsSelected:null,
            crewSelected:typeofResourcesSelected,
            resources:resources,
            typeofevents:typeofevents,

        }
        }

        handleAddTaskOption=(e)=>{
            e.preventDefault();
            const taskActualName = e.target.elements.taskName.value.trim();
//The Taskobject for each task -> Require to understand the differecnce between event and tasks
            let taskobject = {
                taskName:null,
                taskType:null,
                taskCrew:null,
                id:0,
                events:[]
            }

            taskobject.taskName = taskActualName;
            taskobject.taskType = this.state.typeofEventsSelected;
            taskobject.taskCrew = this.state.crewSelected;
            //console.log("submit form")
            const error = this.props.handleTaskEnterClick(taskobject);
           this.setState(() => ({error}))
           if(!error)
           {
           // e.target.elements.option.value =''
           }
        }

    handleCrewChange = (selectedCrewOption) => {
        //console.log(selectedCrewOption);
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

        //console.log(typeofResourcesSelected);
        this.setState({ 
            selectedCrewOption:selectedCrewOption,
            crewSelected:typeofResourcesSelected,
            onetimework:true
        
        });        
        //console.log(`Option selected:`, selectedCrewOption);
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
        //console.log(typeofEventsSelected);
        //console.log(`Option selected:`, selectedTaskOption);
        }

    render(){
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
                    options={this.state.typeofevents}
                    />
                    <br/>
                    <label>
                    Select CrewMembers:
                    </label>
                    <Select name ="taskCrewMembers"
                    value={this.state.selectedCrewOption}
                    onChange={this.handleCrewChange}
                    options={this.state.resources}
                    isMulti
                    className="basic-multi-select"
                    classNamePrefix="select"
                    />
                    <button type="submit" className="button" >Submit</button>
                    <button type="button" className="button" onClick={this.props.handleTaskCancelClick}>No</button>
            </form>

</div>
        )
    }
}