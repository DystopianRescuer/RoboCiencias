#include "Buzzer.h"

Buzzer::Buzzer(){}

//Note frequencies
const std::unordered_map<Notes, int> Buzzer::noteFrequencies = {
    {Notes::C__, 261/4}, {Notes::Cs__, 277/4}, {Notes::D__, 293/4}, {Notes::Ds__, 311/4}, {Notes::E__, 329/4},
    {Notes::F__, 349/4}, {Notes::Fs__, 369/4}, {Notes::G__, 391/4}, {Notes::Gs__, 415/4}, {Notes::A__, 440/4},
    {Notes::As__, 466/4}, {Notes::B__, 493/4},

    {Notes::C_, 261/2}, {Notes::Cs_, 277/2}, {Notes::D_, 293/2}, {Notes::Ds_, 311/2}, {Notes::E_, 329/2},
    {Notes::F_, 349/2}, {Notes::Fs_, 369/2}, {Notes::G_, 391/2}, {Notes::Gs_, 415/2}, {Notes::A_, 440/2},
    {Notes::As_, 466/2}, {Notes::B_, 493/2},

    {Notes::C, 261}, {Notes::Cs, 277}, {Notes::D, 293}, {Notes::Ds, 311}, {Notes::E, 329},
    {Notes::F, 349}, {Notes::Fs, 369}, {Notes::G, 391}, {Notes::Gs, 415}, {Notes::A, 440},
    {Notes::As, 466}, {Notes::B, 493},

    {Notes::C2, 524}, {Notes::Cs2, 555}, {Notes::D2, 588}, {Notes::Ds2, 623}, {Notes::E2, 660},
    {Notes::F2, 699}, {Notes::Fs2, 740}, {Notes::G2, 784}, {Notes::Gs2, 831}, {Notes::A_2, 880},
    {Notes::As2, 933}, {Notes::B2, 988},

    {Notes::C3, 524*2}, {Notes::Cs3, 555*2}, {Notes::D3, 588*2}, {Notes::Ds3, 623*2}, {Notes::E3, 660*2},
    {Notes::F3, 699*2}, {Notes::Fs3, 740*2}, {Notes::G3, 784*2}, {Notes::Gs3, 831*2}, {Notes::A_3, 880*2},
    {Notes::As3, 933*2}, {Notes::B3, 988*2},

    {Notes::C4, 524*4}, {Notes::Cs4, 555*4}, {Notes::D4, 588*4}, {Notes::Ds4, 623*4}, {Notes::E4, 660*4},
    {Notes::F4, 699*4}, {Notes::Fs4, 740*4}, {Notes::G4, 784*4}, {Notes::Gs4, 831*4}, {Notes::A_4, 880*4},
    {Notes::As4, 933*4}, {Notes::B4, 988*4}
};

int Buzzer::getNoteFrequency(Notes note){
    return noteFrequencies.at(note);
}

//Musical lengths
const std::unordered_map<Lengths, double> Buzzer::lengthDurations = {
    {Lengths::Semifusa, 1.0/8},
    {Lengths::Fusa, 1.0/4},
    {Lengths::Semicorchea, 1.0/2},
    {Lengths::Corchea, 1.0},
    {Lengths::Negra, 2.0},
    {Lengths::Blanca, 4.0},
    {Lengths::Redonda, 8.0}
};

int Buzzer::getLength(Lengths length) {
    double semi = 60000.0 / (tempo * 4 * 2);
    return static_cast<int>(semi * lengthDurations.at(length));
}

void Buzzer::attach(int buzzerPin, int tempo){
    this->buzzerPin = buzzerPin;
    this->setTempo(tempo);
}

void Buzzer::setTempo(int tempo){
   if(tempo < 0) return;
}

int Buzzer::getTempo(){
    return this->tempo;
}

void note(Notes note, Lengths length){

}
