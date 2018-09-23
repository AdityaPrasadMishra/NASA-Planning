import React, {Component} from 'react'
import {PropTypes} from 'prop-types' 
//import moment from 'moment'
//import 'moment/locale/zh-cn';
import Scheduler, {SchedulerData, ViewTypes, DATE_FORMAT, DemoData} from '../src/index';
import Nav from './Nav';
import Tips from './Tips';
import withDragDropContext from './withDnDContext';
import './styles/styles.scss';
import 'normalize.css/normalize.css';
import OptionModalAlert from './components/OptionModalAlert';
import OptionModalConfirm from './components/OptionModalConfirm';
import OptionModalEnterTaskDetails from './components/OptionModalEnterTaskDetails';

class Basic extends Component{
    constructor(props){
        super(props);
        let today = new Date();
        //refered from https://stackoverflow.com/questions/1531093/how-do-i-get-the-current-date-in-javascript
        let dd = today.getDate();
        let mm = today.getMonth()+1; //January is 0!
        let yyyy = today.getFullYear();
        if(dd<10) {
            dd = '0'+dd
        } 
        
        if(mm<10) {
            mm = '0'+mm
        }         
        //let schedulerData = new SchedulerData(new moment("2017-12-18").format(DATE_FORMAT), ViewTypes.Week);
        let schedulerData = new SchedulerData(yyyy + '-' + mm + '-' + dd, ViewTypes.Day, false, false,{
            checkConflict: true,
        },
        { getDateLabelFunc: this.DateLabel});
        schedulerData.localeMoment.locale('en');
        this.state = {   
            // Stiore in the local DB.
            sessionstoredobject:{
                resources:undefined,
                events:undefined,
                tasks:schedulerData.tasks
            },         
            viewModel: schedulerData,
            confirm: '',
            alert:'',
            newform:'Create a New Entry',
            confirmfunc : undefined,
            shouldupdate: false,
            // Created a local new event object to track the currently created task while confirm is being selected.
            newAndMoveEventProp :{
                        slotId:undefined,
                        slotName:undefined, 
                        start:undefined,
                        end:undefined,
                        type:undefined,
                        item:undefined,
                        event:undefined
                    },
            updateEventProp :{
                        event:undefined, 
                        newStart:undefined,
                        newEnd:undefined
                    }
        }


    }

    render(){
        let schedulerData1 = this.state.viewModel;

        if(this.state.sessionstoredobject === undefined ||  this.state.sessionstoredobject.resources === undefined)
        {
            schedulerData1.setResources(DemoData.resources);
            schedulerData1.setEvents(DemoData.events);
            schedulerData1.setTasks(DemoData.tasks);
        }
        else
        {
        schedulerData1.setResources(this.state.sessionstoredobject.resources);
        schedulerData1.setEvents(this.state.sessionstoredobject.events);
        schedulerData1.setTasks(this.state.sessionstoredobject.tasks);
        }

        return (
            <div className="container">
                <div>
                    <h3 style={{textAlign: 'center'}}>NASA Proactive Scheduler</h3>
                    <Scheduler schedulerData={this.state.viewModel}
                               prevClick={this.prevClick}
                               nextClick={this.nextClick}
                               onSelectDate={this.onSelectDate}
                               onViewChange={this.onViewChange}
                               eventItemClick={this.eventClicked}
                               updateEventStart={this.updateEventStart}
                               updateEventEnd={this.updateEventEnd}
                               moveEvent={this. moveEventForObject}
                               newEvent={this.newEvent}
                               conflictOccurred={this.conflictOccurred}
                               eventItemTemplateResolver={this.eventItemTemplateResolver}
                    />
                </div>
                <div className="wrapper">
                <button className="button"  >Validate</button>
                <button className="button" >Suggest</button>
                                
                </div>
                <OptionModalAlert insText={this.state.alert} handleClearAlertConfirmtext={this.handleClearAlertConfirmtext}/>
                <OptionModalConfirm insText={this.state.confirm} handleClearAlertConfirmtextOkay={this.handleClearAlertConfirmtextOkay} handleClearAlertConfirmtextCancel={this.handleClearAlertConfirmtextCancel}/>
                <OptionModalEnterTaskDetails
                insText={this.state.newform}
                handleTaskEnterClick ={this.handleTaskEnterClick}
                handleTaskCancelClick={this.handleTaskCancelClick}></OptionModalEnterTaskDetails>
                </div>
        )
    }


    //LifeCycle Events
    // Lifecycle component and is available in only class based component
    componentDidMount(){
        console.log("inside comp mount");
        try{
      
            const json = JSON.parse(localStorage.getItem('sessionstoredobject'));
            console.log(json)
            this.setState({                
                sessionstoredobject: json
            })
        //     if(options){
        //     this.setState(()=>({options}));
        // }
    }
    catch(e){
        console.log("In catch component did mount")
        console.log(e)
        // Do Nothing at all
    }
    }

    componentDidUpdate(prevProps, prevState){
        // if(prevState.options.length !== this.state.options.length)
        // {
            if(this.state.shouldupdate){
            const json = JSON.stringify(this.state.sessionstoredobject);
            localStorage.setItem('sessionstoredobject', json);
            this.setState({
                shouldupdate :false
            })
            console.log("did update")
        }
       // }
    }

    componentWillUnmount(){
        console.log('component will unmount');
    }
    conflictOccurred = (schedulerData, action, event) => {
        this.setState({
            alert:`Conflict occurred. {action: ${action}, event: ${event}`
        })
    }
    
    eventItemTemplateResolver = (schedulerData, event, bgColor, isStart, isEnd, mustAddCssClass, mustBeHeight, agendaMaxEventWidth) => {
        let borderWidth = isStart ? '4' : '0';
        let borderColor =  'rgba(0,139,236,1)', backgroundColor = '#80C5F6';
        let titleText = schedulerData.behaviors.getEventTextFunc(schedulerData, event);
        if(!!event.type){
            borderColor = event.type == 1 ? 'rgba(0,139,236,1)' : (event.type == 3 ? 'rgba(245,60,43,1)' : '#999');
            backgroundColor = event.type == 1 ? '#80C5F6' : (event.type == 3 ? '#FA9E95' : '#D9D9D9');
        }
        let divStyle = {borderLeft: borderWidth + 'px solid ' + borderColor, backgroundColor: backgroundColor, height: mustBeHeight };
        if(!!agendaMaxEventWidth)
            divStyle = {...divStyle, maxWidth: agendaMaxEventWidth};

        return <div key={event.id} className={mustAddCssClass} style={divStyle}>
            <span style={{marginLeft: '4px', lineHeight: `${mustBeHeight}px` }}>{titleText}</span>
        </div>;
    }
    
    eventClicked = (schedulerData, event) => {
        this.setState({
            alert:`You just clicked an event: {id: ${event.id}, title: ${event.title}}`
        })
    };


    handleClearAlertConfirmtext =() =>{
        this.setState({
            confirm: '',
            alert:''
        })

    }
    handleClearAlertConfirmtextOkay =() =>{
        this.state.confirmfunc();
        this.setState({
            confirm: '',
            alert:'',
            confirmfunc:undefined
        });
    }

    handleClearAlertConfirmtextCancel =(schedulerData, slotId, slotName, start, end, type, item) =>{
        this.setState({
            confirm: '',
            alert:'',
        });
    }




    handleTaskCancelClick =()=>{
        this.setState({
            newform :''
        });

    }

    handleTaskEnterClick =()=>{}
    
    moveEventForObject = (schedulerData, event, slotId, slotName, start, end) => {
        this.setState({
            confirm:`Do you want to move the event? {eventId: ${event.id}, eventTitle: ${event.title}, newSlotId: ${slotId}, newSlotName: ${slotName}, newStart: ${start}, newEnd: ${end}`,
            confirmfunc:this.moveEventAfterConfirm,            
            viewModel: schedulerData,
            // Created new object
            newAndMoveEventProp :{
                slotId:slotId,
                slotName:slotName, 
                start:start,
                end:end,
                event:event
            }

        })       
    }


    moveEventAfterConfirm = ()=> {        
        //Reassociating with the old object proerties.

        let schedulerData = this.state.viewModel;
        let slotId = this.state.newAndMoveEventProp.slotId;
        let slotName = this.state.newAndMoveEventProp.slotName;
        let start = this.state.newAndMoveEventProp.start;
        let end = this.state.newAndMoveEventProp.end;
        let event = this.state.newAndMoveEventProp.event;
        schedulerData.moveEvent(event, slotId, slotName, start, end);
        this.setState({

            shouldupdate:true,
            sessionstoredobject:{
                resources: schedulerData.resources,
                events:schedulerData.events,
                tasks:schedulerData.tasks
            }
        })
    }


    


    newEvent = (schedulerData, slotId, slotName, start, end, type, item) => {
        this.setState({
            newform:'Create a New Entry.',
            viewModel: schedulerData,
            // Created new object
            newAndMoveEventProp :{
                slotId:slotId,
                slotName:slotName, 
                start:start,
                end:end,
                type:type,
                item:item
            }

        })       
    }

    newEventAfterConfirm = ()=> {        
        //Reassociating with the old object properties. - done
        // Todo -> The for each in each of the methods where changes are donw to evnst to check for other events in the task. 
        // Conflict to be checked for each of the tasks. 
        let schedulerData = this.state.viewModel;
        let slotId = this.state.newAndMoveEventProp.slotId;
        let slotName = this.state.newAndMoveEventProp.slotName;
        let start = this.state.newAndMoveEventProp.start;
        let end = this.state.newAndMoveEventProp.end;
        let type = this.state.newAndMoveEventProp.type;
        let item = this.state.newAndMoveEventProp.item;

        let newFreshId = 0;
            schedulerData.events.forEach((item) => {
                if(item.id >= newFreshId)
                    newFreshId = item.id + 1;
            });

            let newEvent = {
                id: newFreshId,
                title: 'Task ' + newFreshId,
                start: start,
                end: end,
                resourceId: slotId,
                bgColor: 'purple'
            }          
            schedulerData.addEvent(newEvent);
            this.setState({                
                viewModel: schedulerData,
                shouldupdate:true,
                sessionstoredobject:{
                    resources: schedulerData.resources,
                    events:schedulerData.events,
                    tasks:schedulerData.tasks
                }

            })
           // this.render();
    }

    nextClick = (schedulerData)=> {
        schedulerData.next();
        schedulerData.setEvents(DemoData.events);
        this.setState({            
            viewModel: schedulerData            
        })
    }

    onViewChange = (schedulerData, view) => {
        schedulerData.setViewType(view.viewType, view.showAgenda, view.isEventPerspective);
        schedulerData.setEvents(DemoData.events);
        this.setState({            
            viewModel: schedulerData
        })
    }

    onSelectDate = (schedulerData, date) => {
        schedulerData.setDate(date);
        schedulerData.setEvents(DemoData.events);
        this.setState({            
            viewModel: schedulerData
        })
    }

    prevClick = (schedulerData)=> {
        schedulerData.prev();
        schedulerData.setEvents(DemoData.events);
        this.setState({            
            viewModel: schedulerData            
        })
    }

    updateEventStart = (schedulerData, event, newStart) => {
        this.setState({
                        confirm:`Do you want to adjust the start of the event? {eventId: ${event.id}, eventTitle: ${event.title}, newStart: ${newStart}}`,
                        confirmfunc:this.updateEventStartAfterConfirm,                        
                        viewModel: schedulerData,
                        updateEventProp :{
                            event:event, 
                            newStart:newStart
                        }
                        
                    })
    }

    updateEventStartAfterConfirm = () => {
        let schedulerData = this.state.viewModel;
        let event = this.state.updateEventProp.event;
        let newStart = this.state.updateEventProp.newStart;
        schedulerData.updateEventStart(event, newStart);

        this.setState({
            
            viewModel: schedulerData,
            shouldupdate:true,
            sessionstoredobject:{
                resources: schedulerData.resources,
                events:schedulerData.events,
                tasks:schedulerData.tasks
            }
        });
    }
    updateEventEnd = (schedulerData, event, newEnd) => {
        this.setState({
                        confirm:`Do you want to adjust the end of the event? {eventId: ${event.id}, eventTitle: ${event.title}, newEnd: ${newEnd}}`,
                        confirmfunc:this.updateEventEndAfterConfirm,                        
                        viewModel: schedulerData,
                        updateEventProp :{
                            event:event, 
                            newEnd:newEnd
                        }
                        
                    })
    }

    updateEventEndAfterConfirm = () => {
        let schedulerData = this.state.viewModel;
        let event = this.state.updateEventProp.event;
        let newEnd = this.state.updateEventProp.newEnd;
        schedulerData.updateEventEnd(event, newEnd);

        this.setState({            
            viewModel: schedulerData,
            shouldupdate:true,
            sessionstoredobject:{
                resources: schedulerData.resources,
                events:schedulerData.events,
                tasks:schedulerData.tasks
            }
        });
    }


}

export default withDragDropContext(Basic)

