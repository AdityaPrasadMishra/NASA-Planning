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
        });
        schedulerData.localeMoment.locale('en');
        schedulerData.setResources(DemoData.resources);
        schedulerData.setEvents(DemoData.events);
        this.state = {
            viewModel: schedulerData,
            confirm: '',
            alert:'',
            confirmfunc : undefined,
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
                    },
        }
    }

    render(){
        const {viewModel} = this.state;
        return (
            <div>
                <div>
                    <h3 style={{textAlign: 'center'}}>NASA Proactive Scheduler</h3>
                    <Scheduler schedulerData={this.state.viewModel}
                               prevClick={this.prevClick}
                               nextClick={this.nextClick}
                               onSelectDate={this.onSelectDate}
                               onViewChange={this.onViewChange}
                               eventItemClick={this.eventClicked}
                               viewEventClick={this.ops1}
                               viewEventText="Ops 1"
                               viewEvent2Text="Ops 2"
                               viewEvent2Click={this.ops2}
                               updateEventStart={this.updateEventStart}
                               updateEventEnd={this.updateEventEnd}
                               moveEvent={this.moveEvent}
                               newEvent={this.newEvent}
                               conflictOccurred={this.conflictOccurred}
                    />
                </div>
                <OptionModalAlert insText={this.state.alert} handleClearAlertConfirmtext={this.handleClearAlertConfirmtext}/>
                <OptionModalConfirm insText={this.state.confirm} handleClearAlertConfirmtextOkay={this.handleClearAlertConfirmtextOkay} handleClearAlertConfirmtextCancel={this.handleClearAlertConfirmtextCancel}/>

                </div>
        )
    }

    prevClick = (schedulerData)=> {
        schedulerData.prev();
        schedulerData.setEvents(DemoData.events);
        this.setState({
            viewModel: schedulerData
        })
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

    eventClicked = (schedulerData, event) => {
        this.setState({
            alert:`You just clicked an event: {id: ${event.id}, title: ${event.title}}`
        })
    };

    ops1 = (schedulerData, event) => {
        this.setState({
            alert:`You just executed ops1 to event: {id: ${event.id}, title: ${event.title}}`
        })
    };

    ops2 = (schedulerData, event) => {
        this.setState({
            alert:`You just executed ops2 to event: {id: ${event.id}, title: ${event.title}}`
        })
    };

    newEvent = (schedulerData, slotId, slotName, start, end, type, item) => {
        this.setState({
            confirm:`Do you want to create a new event? {slotId: ${slotId}, slotName: ${slotName}, start: ${start}, end: ${end}, type: ${type}, item: ${item}}`,
            confirmfunc:this.newEventAfterConfirm,
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
        //Reassociating with the old object proerties.

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
            console.log(newEvent)
            schedulerData.addEvent(newEvent);
            this.setState({
                viewModel: schedulerData
            })
            console.log(this.state.viewModel);
           // this.render();
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
            viewModel: schedulerData
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
            viewModel: schedulerData
        });
    }

    moveEvent = (schedulerData, event, slotId, slotName, start, end) => {
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
            viewModel: schedulerData
        })
    }

    conflictOccurred = (schedulerData, action, event) => {
        this.setState({
            alert:`Conflict occurred. {action: ${action}, event: ${event}`
        })
    }
    
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
        console.log("not okay")
        this.setState({
            confirm: '',
            alert:'',
        });
    }
}

export default withDragDropContext(Basic)

