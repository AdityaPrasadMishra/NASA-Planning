import React from 'react';
import Modal from 'react-modal';

const OptionModalAlert = (props) => (
<Modal isOpen={!!props.insText} 
contentLabel={props.label}
onRequestClose={props.handleClearAlertConfirmtext}
closeTimeoutMS={200}
className="modal"
appElement={document.getElementById('app')}
>
<h3 className="modal__title">
Alert
</h3>
{props.insText && <p className="modal__body">{props.insText}</p>}
<button className="button" onClick={props.handleClearAlertConfirmtext}>Okay</button>
</Modal>
    

);
export default OptionModalAlert