#include "Buzzer.h"
#include <Arduino.h>
#include "UnorderedMap.h"

Buzzer::Buzzer(){
	noteFrequencies.put(Notes::C__, 261/4);
	noteFrequencies.put(Notes::Cs__, 277/4);
	noteFrequencies.put(Notes::D__, 293/4);
	noteFrequencies.put(Notes::Ds__, 311/4);
	noteFrequencies.put(Notes::E__, 329/4);
	noteFrequencies.put(Notes::F__, 349/4);
	noteFrequencies.put(Notes::Fs__, 369/4);
	noteFrequencies.put(Notes::G__, 391/4);
	noteFrequencies.put(Notes::Gs__, 415/4);
	noteFrequencies.put(Notes::A__, 440/4);
	noteFrequencies.put(Notes::As__, 466/4);
	noteFrequencies.put(Notes::B__, 493/4);

	noteFrequencies.put(Notes::C_, 261/2);
	noteFrequencies.put(Notes::Cs_, 277/2);
	noteFrequencies.put(Notes::D_, 293/2);
	noteFrequencies.put(Notes::Ds_, 311/2);
	noteFrequencies.put(Notes::E_, 329/2);
	noteFrequencies.put(Notes::F_, 349/2);
	noteFrequencies.put(Notes::Fs_, 369/2);
	noteFrequencies.put(Notes::G_, 391/2);
	noteFrequencies.put(Notes::Gs_, 415/2);
	noteFrequencies.put(Notes::A_, 440/2);
	noteFrequencies.put(Notes::As_, 466/2);
	noteFrequencies.put(Notes::B_, 493/2);

	noteFrequencies.put(Notes::C, 261);
	noteFrequencies.put(Notes::Cs, 277);
	noteFrequencies.put(Notes::D, 293);
	noteFrequencies.put(Notes::Ds, 311);
	noteFrequencies.put(Notes::E, 329);
	noteFrequencies.put(Notes::F, 349);
	noteFrequencies.put(Notes::Fs, 369);
	noteFrequencies.put(Notes::G, 391);
	noteFrequencies.put(Notes::Gs, 415);
	noteFrequencies.put(Notes::A, 440);
	noteFrequencies.put(Notes::As, 466);
	noteFrequencies.put(Notes::B, 493);

	noteFrequencies.put(Notes::C2, 524);
	noteFrequencies.put(Notes::Cs2, 555);
	noteFrequencies.put(Notes::D2, 588);
	noteFrequencies.put(Notes::Ds2, 623);
	noteFrequencies.put(Notes::E2, 660);
	noteFrequencies.put(Notes::F2, 699);
	noteFrequencies.put(Notes::Fs2, 740);
	noteFrequencies.put(Notes::G2, 784);
	noteFrequencies.put(Notes::Gs2, 831);
	noteFrequencies.put(Notes::A_2, 880);
	noteFrequencies.put(Notes::As2, 933);
	noteFrequencies.put(Notes::B2, 988);

	noteFrequencies.put(Notes::C3, 524*2);
	noteFrequencies.put(Notes::Cs3, 555*2);
	noteFrequencies.put(Notes::D3, 588*2);
	noteFrequencies.put(Notes::Ds3, 623*2);
	noteFrequencies.put(Notes::E3, 660*2);
	noteFrequencies.put(Notes::F3, 699*2);
	noteFrequencies.put(Notes::Fs3, 740*2);
	noteFrequencies.put(Notes::G3, 784*2);
	noteFrequencies.put(Notes::Gs3, 831*2);
	noteFrequencies.put(Notes::A_3, 880*2);
	noteFrequencies.put(Notes::As3, 933*2);
	noteFrequencies.put(Notes::B3, 988*2);

	noteFrequencies.put(Notes::C4, 524*4);
	noteFrequencies.put(Notes::Cs4, 555*4);
	noteFrequencies.put(Notes::D4, 588*4);
	noteFrequencies.put(Notes::Ds4, 623*4);
	noteFrequencies.put(Notes::E4, 660*4);
	noteFrequencies.put(Notes::F4, 699*4);
	noteFrequencies.put(Notes::Fs4, 740*4);
	noteFrequencies.put(Notes::G4, 784*4);
	noteFrequencies.put(Notes::Gs4, 831*4);
	noteFrequencies.put(Notes::A_4, 880*4);
	noteFrequencies.put(Notes::As4, 933*4);
	noteFrequencies.put(Notes::B4, 988*4);


	lengthDurations.put(Lengths::Semifusa, 1.0/8);
	lengthDurations.put(Lengths::Fusa, 1.0/4);
	lengthDurations.put(Lengths::Semicorchea, 1.0/2);
	lengthDurations.put(Lengths::Corchea, 1.0);
	lengthDurations.put(Lengths::Negra, 2.0);
	lengthDurations.put(Lengths::Blanca, 4.0);
	lengthDurations.put(Lengths::Redonda, 8.0);
}


int Buzzer::getNoteFrequency(Notes note){
	return Buzzer::noteFrequencies.getValue(note);
}


int Buzzer::getLength(Lengths length) {
	double semi = 60000.0 / (tempo * 4 * 2);
	return static_cast<int>(semi * lengthDurations.getValue(length));
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

void Buzzer::note(Notes note, Lengths length){
	tone(this->buzzerPin, getNoteFrequency(note), getLength(length));
	delay(getLength(length));
	noTone(this->buzzerPin);
	delay(getLength(length));
}
