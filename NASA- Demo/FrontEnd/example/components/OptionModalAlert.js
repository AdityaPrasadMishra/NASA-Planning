import React from 'react';
import Modal from 'react-modal';

const OptionModalAlert = (props) => (
<Modal isOpen={!!props.insText} 
    contentLabel={props.insText}
    onRequestClose={props.handleClearAlertConfirmtext}
    closeTimeoutMS={200}
    className="modal_x card text-dark"
    appElement={document.getElementById('app')}
    >
    {props.insText && <div className="modal__body card-body" dangerouslySetInnerHTML={{__html: props.insText}}/>}
    <button className="btn btn-info" onClick={props.handleClearAlertConfirmtext}>Okay</button>
</Modal>
    

);
export default OptionModalAlert