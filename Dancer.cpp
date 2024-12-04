#include "Dancer.h"

//Dancing methods
void Dancer::BebecitaBebelin(){

}
void Dancer::MePortoBonito(){
  this->buzzer->setTempo(92);
  this->buzzer->note(E2,Corchea);
  this->buzzer->note(E2,Corchea);
  this->buzzer->note(E2,Corchea);
  this->buzzer->note(E2,Corchea);
  this->buzzer->note(E2,Corchea);
  this->buzzer->note(A_2,CorcheaPlusSemi);
  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(A_2,Corchea);
  this->buzzer->note(A_2,Corchea);
  this->buzzer->note(A_2,Corchea);
  this->buzzer->note(A_2,Semicorchea);
  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(A_2,Corchea);
  this->buzzer->note(A_2,Corchea);
  this->buzzer->note(Gs2,Corchea);
  this->buzzer->note(B2,Semicorchea);
  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(Sil,Corchea);
  this->buzzer->note(Sil,Corchea);
  this->buzzer->note(Cs2,Corchea);
  this->buzzer->note(Cs2,Semicorchea);
  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(Cs2,Corchea);
  this->buzzer->note(Cs2,Corchea);
  this->buzzer->note(Fs2,CorcheaPlusSemi);
  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(Fs2,Corchea);
  this->buzzer->note(Fs2,Corchea);
  this->buzzer->note(Fs2,Corchea);
  this->buzzer->note(Fs2,Semicorchea);
  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(E2,Corchea);
  this->buzzer->note(Ds2,Corchea);
  this->buzzer->note(E2,Corchea);
  this->buzzer->note(Cs2,Semicorchea);
  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(Sil,Corchea);
  this->buzzer->note(Cs2,Negra);
  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(Cs2,Semicorchea);
  this->buzzer->note(Cs2,Semicorchea);
  this->buzzer->note(Cs2,Semicorchea);
  this->buzzer->note(Ds2,Semicorchea);
  this->buzzer->note(Ds2,Semicorchea);
  this->buzzer->note(Ds2,Semicorchea);
  this->buzzer->note(E2,CorcheaPlusSemi);
  this->buzzer->note(E2,Semicorchea);
  this->buzzer->note(E2,Semicorchea);
  this->buzzer->note(Fs2,Semicorchea);
  this->buzzer->note(E2,Semicorchea);
  this->buzzer->note(Ds2,Corchea);
  this->buzzer->note(Cs2,Negra);
  this->buzzer->note(E2,Semicorchea);
  this->buzzer->note(Ds2,Semicorchea);
  this->buzzer->note(E2,Corchea);
  this->buzzer->note(Gs,Semicorchea);
  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(Gs,Corchea);
  this->buzzer->note(Fs2,Semicorchea);
  this->buzzer->note(E2,Semicorchea);
  this->buzzer->note(Ds2,Corchea);
  this->buzzer->note(Cs2,Semicorchea);
  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(Cs2,Semicorchea);
  this->buzzer->note(Cs2,Semicorchea);
  this->buzzer->note(Cs2,Semicorchea);
  this->buzzer->note(Gs,Semicorchea);
  this->buzzer->note(A,Corchea);
  this->buzzer->note(A,Semicorchea);
  this->buzzer->note(A,Semicorchea);
  this->buzzer->note(A,Corchea);
  this->buzzer->note(Fs2,Semicorchea);
  this->buzzer->note(E2,Semicorchea);
  this->buzzer->note(Ds2,Corchea);
  this->buzzer->note(Cs2,Semicorchea);
  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(Cs2,Semicorchea);
  this->buzzer->note(Cs2,Semicorchea);
  this->buzzer->note(Cs2,Semicorchea);
  this->buzzer->note(Fs,Semicorchea);
  this->buzzer->note(Gs,Corchea);
  this->buzzer->note(Gs,Semicorchea);
  this->buzzer->note(Gs,Semicorchea);
  this->buzzer->note(Gs,Corchea);
  this->buzzer->note(Fs2,Semicorchea);
  this->buzzer->note(E2,Semicorchea);
  this->buzzer->note(Ds2,Corchea);
  this->buzzer->note(Cs2,Negra);
}
void Dancer::AguaPapa(){

}

//Empty method
Dancer::Dancer(){

}

void Dancer::attach(Legs& legs, Arms& arms, Buzzer& buzzer){
    this->legs = &legs;
    this->arms = &arms;
    this->buzzer = &buzzer;
}
