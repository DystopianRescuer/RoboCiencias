#include "Dancer.h"

//Dancing methods
void Dancer::BebecitaBebelin(){

}
void Dancer::MePortoBonito(){
  buzzer.setTempo(92);
  buzzer.note(E2,Corchea);
  buzzer.note(E2,Corchea);
  buzzer.note(E2,Corchea);
  buzzer.note(E2,Corchea);
  buzzer.note(E2,Corchea);
  buzzer.note(A_2,CorcheaPlusSemi);
  buzzer.note(Sil,Semicorchea);
  buzzer.note(A_2,Corchea);
  buzzer.note(A_2,Corchea);
  buzzer.note(A_2,Corchea);
  buzzer.note(A_2,Semicorchea);
  buzzer.note(Sil,Semicorchea);
  buzzer.note(A_2,Corchea);
  buzzer.note(A_2,Corchea);
  buzzer.note(Gs2,Corchea);
  buzzer.note(B2,Semicorchea);
  buzzer.note(Sil,Semicorchea);
  buzzer.note(Sil,Corchea);
  buzzer.note(Sil,Corchea);
  buzzer.note(Cs2,Corchea);
  buzzer.note(Cs2,Semicorchea);
  buzzer.note(Sil,Semicorchea);
  buzzer.note(Cs2,Corchea);
  buzzer.note(Cs2,Corchea);
  buzzer.note(Fs2,CorcheaPlusSemi);
  buzzer.note(Sil,Semicorchea);
  buzzer.note(Fs2,Corchea);
  buzzer.note(Fs2,Corchea);
  buzzer.note(Fs2,Corchea);
  buzzer.note(Fs2,Semicorchea);
  buzzer.note(Sil,Semicorchea);
  buzzer.note(E2,Corchea);
  buzzer.note(Ds2,Corchea);
  buzzer.note(E2,Corchea);
  buzzer.note(Cs2,Semicorchea);
  buzzer.note(Sil,Semicorchea);
  buzzer.note(Sil,Corchea);
  buzzer.note(Cs2,Negra);
  buzzer.note(Sil,Semicorchea);
  buzzer.note(Cs2,Semicorchea);
  buzzer.note(Cs2,Semicorchea);
  buzzer.note(Cs2,Semicorchea);
  buzzer.note(Ds2,Semicorchea);
  buzzer.note(Ds2,Semicorchea);
  buzzer.note(Ds2,Semicorchea);
  buzzer.note(E2,CorcheaPlusSemi);
  buzzer.note(E2,Semicorchea);
  buzzer.note(E2,Semicorchea);
  buzzer.note(Fs2,Semicorchea);
  buzzer.note(E2,Semicorchea);
  buzzer.note(Ds2,Corchea);
  buzzer.note(Cs2,Negra);
  buzzer.note(E2,Semicorchea);
  buzzer.note(Ds2,Semicorchea);
  buzzer.note(E2,Corchea);
  buzzer.note(Gs,Semicorchea);
  buzzer.note(Sil,Semicorchea);
  buzzer.note(Gs,Corchea);
  buzzer.note(Fs2,Semicorchea);
  buzzer.note(E2,Semicorchea);
  buzzer.note(Ds2,Corchea);
  buzzer.note(Cs2,Semicorchea);
  buzzer.note(Sil,Semicorchea);
  buzzer.note(Cs2,Semicorchea);
  buzzer.note(Cs2,Semicorchea);
  buzzer.note(Cs2,Semicorchea);
  buzzer.note(Gs,Semicorchea);
  buzzer.note(A,Corchea);
  buzzer.note(A,Semicorchea);
  buzzer.note(A,Semicorchea);
  buzzer.note(A,Corchea);
  buzzer.note(Fs2,Semicorchea);
  buzzer.note(E2,Semicorchea);
  buzzer.note(Ds2,Corchea);
  buzzer.note(Cs2,Semicorchea);
  buzzer.note(Sil,Semicorchea);
  buzzer.note(Cs2,Semicorchea);
  buzzer.note(Cs2,Semicorchea);
  buzzer.note(Cs2,Semicorchea);
  buzzer.note(Fs,Semicorchea);
  buzzer.note(Gs,Corchea);
  buzzer.note(Gs,Semicorchea);
  buzzer.note(Gs,Semicorchea);
  buzzer.note(Gs,Corchea);
  buzzer.note(Fs2,Semicorchea);
  buzzer.note(E2,Semicorchea);
  buzzer.note(Ds2,Corchea);
  buzzer.note(Cs2,Negra);
}
void Dancer::AguaPapa(){

}

//Empty method
Dancer::Dancer(){

}

void Dancer::attach(Legs legs, Arms arms, Buzzer buzzer){
    this->legs = legs;
    this->arms = arms;
    this->buzzer = buzzer;
}

void Dancer::dance(Dance dance){
    switch(dance){
        case MEPORTOBONITO:
           this->MePortoBonito();
           break;
        case AGUAPAPA:
            this->AguaPapa();
            break;
        case BEBECITABEBELIN:
            this->BebecitaBebelin();
            break;
    }
}
