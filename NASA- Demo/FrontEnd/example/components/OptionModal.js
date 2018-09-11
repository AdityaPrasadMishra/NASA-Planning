import React from 'react';
import Modal from 'react-modal';


const OptionModal = (props) => (
    <Modal isOpen={!!props.insText} 
    contentLabel={props.label}
    onRequestClose={props.handleClearAlertConfirmtext}
    closeTimeoutMS={200}
    className="modal"
    >
    <h3 className="modal__title">
   Alert
    </h3>
    {props.insText && <p className="modal__body">{props.insText}</p>}
    </Modal>
);
export default OptionModal;