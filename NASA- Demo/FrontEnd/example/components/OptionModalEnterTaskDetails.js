import React from 'react';
import Modal from 'react-modal';
import AddTaskDetails from './AddTaskDetails';


const OptionModalEnterTaskDetails = (props) => (
<Modal isOpen={!!props.insText} 
contentLabel={props.insText}
onRequestClose={props.handleTaskCancelClick}
closeTimeoutMS={200}
className="bigmodal"
//Remove the warning which used to come with Appelement for react Modal
appElement={document.getElementById('app')}
>
<h3 className="bigmodal__title">
Enter Task Details
</h3>
<div className="bigmodal__body">
<AddTaskDetails 
handleTaskEnterClick ={props.handleTaskEnterClick}
handleTaskCancelClick={props.handleTaskCancelClick}></AddTaskDetails>
</div>
</Modal>
    

);
export default OptionModalEnterTaskDetails