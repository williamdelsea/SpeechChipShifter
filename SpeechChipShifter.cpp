#include "Arduino.h"
#include "SpeechChipSihfter.h"

SpeechChipSihfter::SpeechChipSihfter(int ALD, int data, int clock, int latch)
{
  pinMode(ALD, OUTPUT);
  pinMode(data, OUTPUT);
  pinMode(clock, OUTPUT);
  pinMode(latch, OUTPUT);
  digitalWrite(ALD, HIGH);
  DDRD = B11111111;
  _ALD = ALD;
  _data = data;
  _clock = clock;
  _latch = latch;
}

int SpeechChipSihfter::AddressLoad(int delayTime){
  digitalWrite(_ALD, LOW);
  delay(10);
  digitalWrite(_ALD, HIGH);
  delay(delayTime);
}

void SpeechChipSihfter::OR(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00111010);
  digitalWrite(_latch, HIGH);
  AddressLoad(330);
}

void SpeechChipSihfter::HH2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00111001);
  digitalWrite(_latch, HIGH);
  AddressLoad(180);
}

void SpeechChipSihfter::HH1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00011011);
  digitalWrite(_latch, HIGH);
  AddressLoad(130);
}

void SpeechChipSihfter::EH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00000111);
  digitalWrite(_latch, HIGH);
  AddressLoad(70);
}

void SpeechChipSihfter::EL(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00111111);
  digitalWrite(_latch, HIGH);
  AddressLoad(190);
}

void SpeechChipSihfter::LL(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00101101);
  digitalWrite(_latch, HIGH);
  AddressLoad(110);
}

void SpeechChipSihfter::OW(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00110101);
  digitalWrite(_latch, HIGH);
  AddressLoad(240);
}

void SpeechChipSihfter::PA5(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00000100);
  digitalWrite(_latch, HIGH);
  AddressLoad(200);
}

void SpeechChipSihfter::BB1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00011100);
  digitalWrite(_latch, HIGH);
  AddressLoad(80); 
}

void SpeechChipSihfter::AX(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00001111);
  digitalWrite(_latch, HIGH);
  AddressLoad(70);
}

void SpeechChipSihfter::IY(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00010011);
  digitalWrite(_latch, HIGH);
  AddressLoad(250);
}

void SpeechChipSihfter::NN2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00111000);
  digitalWrite(_latch, HIGH);
  AddressLoad(190);
}

void SpeechChipSihfter::ER1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00110011);
  digitalWrite(_latch, HIGH);
  AddressLoad(160);
}

void SpeechChipSihfter::AE(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00011010);
  digitalWrite(_latch, HIGH);
  AddressLoad(120);
}

void SpeechChipSihfter::AA(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00011000);
  digitalWrite(_latch, HIGH);
  AddressLoad(100);
}

void SpeechChipSihfter::AY(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00000110);
  digitalWrite(_latch, HIGH);
  AddressLoad(260);
}

void SpeechChipSihfter::KK1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00101010);
  digitalWrite(_latch, HIGH);
  AddressLoad(160);
}

void SpeechChipSihfter::AO(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00010111);
  digitalWrite(_latch, HIGH);
  AddressLoad(100);
}

void SpeechChipSihfter::S(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00110111);
  digitalWrite(_latch, HIGH);
  AddressLoad(90);
}

void SpeechChipSihfter::EY(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00010100);
  digitalWrite(_latch, HIGH);
  AddressLoad(280);
}

void SpeechChipSihfter::PA4(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00000011);
  digitalWrite(_latch, HIGH);
  AddressLoad(100);
}

void SpeechChipSihfter::PA3(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00000010);
  digitalWrite(_latch, HIGH);
  AddressLoad(50);
}

void SpeechChipSihfter::PA2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST,B00000001);
  digitalWrite(_latch, HIGH);
  AddressLoad(30);
}

void SpeechChipSihfter::PA1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, 00000000);
  digitalWrite(_latch, HIGH);
  AddressLoad(10);
}

void SpeechChipSihfter::PP(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00001001);
  digitalWrite(_latch, HIGH);
  AddressLoad(210);
}

void SpeechChipSihfter::D1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00010101);
  digitalWrite(_latch, HIGH);
  AddressLoad(70);
}

void SpeechChipSihfter::D2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00100001);
  digitalWrite(_latch, HIGH);
  AddressLoad(160);
}

void SpeechChipSihfter::TT2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00001101);
  digitalWrite(_latch, HIGH);
  AddressLoad(140);
}

void SpeechChipSihfter::UW1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00010110);
  digitalWrite(_latch, HIGH);
  AddressLoad(100);
}

void SpeechChipSihfter::MM(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00010000);
  digitalWrite(_latch, HIGH);
  AddressLoad(180);
}

void SpeechChipSihfter::YY2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST,B00011001);
  digitalWrite(_latch, HIGH);
  AddressLoad(180);
}

void SpeechChipSihfter::IH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00001100);
  digitalWrite(_latch, HIGH);
  AddressLoad(70);
}

void SpeechChipSihfter::TT1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00010001);
  digitalWrite(_latch, HIGH);
  AddressLoad(100);
}

void SpeechChipSihfter::ZZ(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00101011);
  digitalWrite(_latch, HIGH);
  AddressLoad(210);
}

void SpeechChipSihfter::NG(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00101100);
  digitalWrite(_latch, HIGH);
  AddressLoad(220);
}

void SpeechChipSihfter::GG1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00100100);
  digitalWrite(_latch, HIGH);
  AddressLoad(80);
}

void SpeechChipSihfter::GG2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00111101);
  digitalWrite(_latch, HIGH);
  AddressLoad(40);
}

void SpeechChipSihfter::GG3(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00100010);
  digitalWrite(_latch, HIGH);
  AddressLoad(140);
}

void SpeechChipSihfter::FF(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00101000);
  digitalWrite(_latch, HIGH);
  AddressLoad(150);
}

void SpeechChipSihfter::KK2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00101001);
  digitalWrite(_latch, HIGH);
  AddressLoad(190);
}

void SpeechChipSihfter::KK3(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00001000);
  digitalWrite(_latch, HIGH);
  AddressLoad(120);
}

void SpeechChipSihfter::CH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00110010); 
  digitalWrite(_latch, HIGH);
  AddressLoad(190);
}

void SpeechChipSihfter::TH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00011101);
  digitalWrite(_latch, HIGH);
  AddressLoad(180);
}

void SpeechChipSihfter::ZH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00100110);
  digitalWrite(_latch, HIGH);
  AddressLoad(190);
}

void SpeechChipSihfter::RR1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00001110);
  digitalWrite(_latch, HIGH);
  AddressLoad(170);
}

void SpeechChipSihfter::RR2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00100111);
  digitalWrite(_latch, HIGH);
  AddressLoad(120);
}

void SpeechChipSihfter::OY(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00000101);
  digitalWrite(_latch, HIGH);
  AddressLoad(420);
}

void SpeechChipSihfter::JH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00001010);
  digitalWrite(_latch, HIGH);
  AddressLoad(140);
}

void SpeechChipSihfter::DH1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00010010);
  digitalWrite(_latch, HIGH);
  AddressLoad(290);
}

void SpeechChipSihfter::DH2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00110110);
  digitalWrite(_latch, HIGH);
  AddressLoad(240);
}

void SpeechChipSihfter::UW2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00011111);
  digitalWrite(_latch, HIGH);
  AddressLoad(290);
}

void SpeechChipSihfter::YY1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00110001);
  digitalWrite(_latch, HIGH);
  AddressLoad(130);
}

void SpeechChipSihfter::BB2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00111111);
  digitalWrite(_latch, HIGH);
  AddressLoad(50);
}

void SpeechChipSihfter::UH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00011110);
  digitalWrite(_latch, HIGH);
  AddressLoad(100);
}

void SpeechChipSihfter::AW(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00100000);
  digitalWrite(_latch, HIGH);
  AddressLoad(370);
}

void SpeechChipSihfter::VV(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00100011);
  digitalWrite(_latch, HIGH);
  AddressLoad(190);
}

void SpeechChipSihfter::SH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00100101);
  digitalWrite(_latch, HIGH);
  AddressLoad(160);
}

void SpeechChipSihfter::WW(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00101110);
  digitalWrite(_latch, HIGH);
  AddressLoad(180);
}

void SpeechChipSihfter::XR(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00101111);
  digitalWrite(_latch, HIGH);
  AddressLoad(360);
}

void SpeechChipSihfter::WH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00110000);
  digitalWrite(_latch, HIGH);
  AddressLoad(200);
}

void SpeechChipSihfter::ER2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00110100);
  digitalWrite(_latch, HIGH);
  AddressLoad(300);
}

void SpeechChipSihfter::AR(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00111011);
  digitalWrite(_latch, HIGH);
  AddressLoad(290);
}

void SpeechChipSihfter::YR(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00111100);
  digitalWrite(_latch, HIGH);
  AddressLoad(350);
}

void SpeechChipSihfter::NN1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00001011);
  digitalWrite(_latch, HIGH);
  AddressLoad(140);
}