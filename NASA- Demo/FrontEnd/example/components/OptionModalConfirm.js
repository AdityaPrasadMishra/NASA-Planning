import React from 'react';
import Modal from 'react-modal';

const OptionModalConfirm = (props) => (
<Modal isOpen={!!props.insText} 
contentLabel={props.label}
onRequestClose={props.handleClearAlertConfirmtextCancel}
closeTimeoutMS={200}
className="modal_x card text-dark"
//Remove the warning which used to come with Appelement for react Modal
appElement={document.getElementById('app')}
>
<h3 className="modal__title">
Confirm
</h3>
{props.insText && <p className="modal__body card-body">{props.insText}</p>}
<button className="button" onClick={props.handleClearAlertConfirmtextOkay}>Yes</button>
<button className="button" onClick={props.handleClearAlertConfirmtextCancel}>No</button>
</Modal>
    

);
export default OptionModalConfirm