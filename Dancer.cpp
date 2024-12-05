#include "Dancer.h"
#include "Legs.h"

//Dancing methods
void Dancer::BebecitaBebelin(){

}
void Dancer::MePortoBonito(){
  this->buzzer->setTempo(50);
  // Y en la calle ando suelto pero x ti me quito
  this->buzzer->note(E2,Corchea);
  this->arms->write(ARMLEFT, 90);
  this->arms->write(ARMRIGHT, 90);
  this->buzzer->note(E2,Corchea);
  this->arms->write(ARMLEFT, 180);
  this->arms->write(ARMRIGHT, 180);
  this->buzzer->note(E2,Corchea);
   this->arms->write(ARMLEFT, 90);
  this->arms->write(ARMRIGHT, 90);
  this->buzzer->note(E2,Corchea);
   this->arms->write(ARMLEFT, 180);
  this->arms->write(ARMRIGHT, 180);
  this->buzzer->note(E2,Corchea);
  this->arms->write(ARMLEFT, 90);
  this->arms->write(ARMRIGHT, 90);
  this->buzzer->note(A_2,CorcheaPlusSemi);
   this->arms->write(ARMLEFT, 180);
  this->arms->write(ARMRIGHT, 180);
  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(A_2,Corchea);
   this->arms->write(ARMLEFT, 90);
  this->arms->write(ARMRIGHT, 90);
  this->buzzer->note(A_2,Corchea);
   this->arms->write(ARMLEFT, 180);
  this->arms->write(ARMRIGHT, 180);
  this->buzzer->note(A_2,Corchea);
   this->arms->write(ARMLEFT, 90);
  this->arms->write(ARMRIGHT, 90);
  this->buzzer->note(A_2,Semicorchea);
   this->arms->write(ARMLEFT, 180);
  this->arms->write(ARMRIGHT, 180);
  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(A_2,Corchea);
   this->arms->write(ARMLEFT, 90);
  this->arms->write(ARMRIGHT, 90);
  this->buzzer->note(A_2,Corchea);
   this->arms->write(ARMLEFT, 180);
  this->arms->write(ARMRIGHT, 180);
  this->buzzer->note(Gs2,Corchea);
   this->arms->write(ARMLEFT, 90);
  this->arms->write(ARMRIGHT, 90);
  this->buzzer->note(B2,Semicorchea);
   this->arms->write(ARMLEFT, 180);
  this->arms->write(ARMRIGHT, 180);
  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(Sil,Corchea);
  this->buzzer->note(Sil,Corchea);
  //Si tu me lo pides yo me porto bonito
  this->buzzer->note(Cs2,Corchea);
   this->arms->write(ARMLEFT, 90);
  this->buzzer->note(Cs2,Semicorchea);
   this->arms->write(ARMLEFT, 180);
  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(Cs2,Corchea);
   this->arms->write(ARMRIGHT, 180);
  this->buzzer->note(Cs2,Corchea);
   this->arms->write(ARMRIGHT, 90);
  this->buzzer->note(Fs2,CorcheaPlusSemi);
  this->buzzer->note(Sil,Semicorchea);
   this->arms->write(ARMLEFT, 180);
  this->buzzer->note(Fs2,Corchea);
   this->arms->write(ARMLEFT, 90);
  this->buzzer->note(Fs2,Corchea);
   this->arms->write(ARMRIGHT, 180);
  this->buzzer->note(Fs2,Corchea);
   this->arms->write(ARMRIGHT, 90);
  this->buzzer->note(Fs2,Semicorchea);
   this->arms->write(ARMLEFT, 180);
  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(E2,Corchea);
   this->arms->write(ARMLEFT, 90);
  this->buzzer->note(Ds2,Corchea);
   this->arms->write(ARMRIGHT, 180);
  this->buzzer->note(E2,Corchea);
   this->arms->write(ARMRIGHT, 90);
  this->buzzer->note(Cs2,Semicorchea);
   this->arms->write(ARMLEFT, 180);
  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(Sil,Corchea);
  //Tu no eres bebesita, tu eres bebesota
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
  //Frikitona ma se te nota
  this->buzzer->note(Ds2,Corchea);
  this->buzzer->note(Cs2,Negra);
  this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);
  this->buzzer->note(E2,Semicorchea);
   this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);
  this->buzzer->note(Ds2,Semicorchea);
this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);

  this->buzzer->note(E2,Corchea);
    this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);
  this->buzzer->note(Gs,Semicorchea);
  this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);

  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(Gs,Corchea);
    this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);
  this->buzzer->note(Fs2,Semicorchea);
this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);

  this->buzzer->note(E2,Semicorchea);
    this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);
  //Le gustan los trios cuando esta en la nota
  this->buzzer->note(Ds2,Corchea);
this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);

  this->buzzer->note(Cs2,Semicorchea);
  this->buzzer->note(Sil,Semicorchea);
    this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);
  this->buzzer->note(Cs2,Semicorchea);
this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);

  this->buzzer->note(Cs2,Semicorchea);
    this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);
  this->buzzer->note(Cs2,Semicorchea);
this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);

  this->buzzer->note(Gs,Semicorchea);
    this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);
  this->buzzer->note(A,Corchea);
this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);

  this->buzzer->note(A,Semicorchea);
    this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);
  this->buzzer->note(A,Semicorchea);
this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);

  this->buzzer->note(A,Corchea);
    this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);
  this->buzzer->note(Fs2,Semicorchea);
this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);

  this->buzzer->note(E2,Semicorchea);
  //Si el novio no sirve de una lo bota
  this->buzzer->note(Ds2,Corchea);
    this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);
  this->buzzer->note(Cs2,Semicorchea);
this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);

  this->buzzer->note(Sil,Semicorchea);
  this->buzzer->note(Cs2,Semicorchea);
this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);

  this->buzzer->note(Cs2,Semicorchea);
    this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);
  this->buzzer->note(Cs2,Semicorchea);
this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);

  this->buzzer->note(Fs,Semicorchea);
    this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);
  this->buzzer->note(Gs,Corchea);
this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);

  this->buzzer->note(Gs,Semicorchea);
    this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);
  this->buzzer->note(Gs,Semicorchea);
this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);

  this->buzzer->note(Gs,Corchea);
    this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);
  this->buzzer->note(Fs2,Semicorchea);
this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);

  this->buzzer->note(E2,Semicorchea);
    this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);
  this->buzzer->note(Ds2,Corchea);
this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);

  this->buzzer->note(Cs2,Negra);
  this->legs->stance();

}
void Dancer::AguaPapa(){
  this->buzzer->setTempo(45);
 this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);

 this->buzzer->note(G3 , Corchea);
  this->buzzer->note(Sil, Semicorchea);
 this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);

 this->buzzer->note(E3 , Corchea);
  this->buzzer->note(Sil, Semicorchea);
  this->buzzer->note(E3 , Corchea);
 this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);

 this->buzzer->note(A_3 , Corchea);
  this->buzzer->note(Sil, Semicorchea);
 this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);

 this->buzzer->note(E3 , Corchea);
  this->buzzer->note(Sil, Semicorchea);
  this->buzzer->note(E3 , Corchea);
 this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);

 this->buzzer->note(B3 , Corchea);
  this->buzzer->note(Sil, Semicorchea);
 this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);

 this->buzzer->note(F3 , Corchea);
  this->buzzer->note(Sil, Semicorchea);
  this->buzzer->note(F3 , Corchea);
 this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);

 this->buzzer->note(C4 , Corchea);
  this->buzzer->note(Sil, Semicorchea);
 this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);
  this->arms->write(ARMLEFT, 180);
  this->arms->write(ARMRIGHT, 180);

 this->buzzer->note(B3 , Corchea);
 this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) - 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) + 45);
  this->arms->write(ARMLEFT, 90);
  this->arms->write(ARMRIGHT, 90);

 this->buzzer->note(Sil, Semicorchea);
 this->legs->write(LEGLEFT, this->legs->read(LEGLEFT) + 45);
  this->legs->write(LEGRIGHT, this->legs->read(LEGRIGHT) - 45);
  this->arms->write(ARMLEFT, 180);
  this->arms->write(ARMRIGHT, 180);

 this->buzzer->note(A_3 , Corchea);
 this->legs->stance();
 this->arms->bringBack();

}

//Empty method
Dancer::Dancer(){

}

void Dancer::attach(Legs& legs, Arms& arms, Buzzer& buzzer){
    this->legs = &legs;
    this->arms = &arms;
    this->buzzer = &buzzer;
}
