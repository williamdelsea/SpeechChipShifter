#include "Arduino.h"
#include "SpeechChipShifter.h"

SpeechChip::SpeechChip(int ALD, int data, int clock, int latch)
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

int SpeechChip::AddressLoad(int delayTime){
  digitalWrite(_ALD, LOW);
  delay(10);
  digitalWrite(_ALD, HIGH);
  delay(delayTime);
}

void SpeechChip::OR(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00111010);
  digitalWrite(_latch, HIGH);
  AddressLoad(330);
}

void SpeechChip::HH2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00111001);
  digitalWrite(_latch, HIGH);
  AddressLoad(180);
}

void SpeechChip::HH1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00011011);
  digitalWrite(_latch, HIGH);
  AddressLoad(130);
}

void SpeechChip::EH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00000111);
  digitalWrite(_latch, HIGH);
  AddressLoad(70);
}

void SpeechChip::EL(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00111111);
  digitalWrite(_latch, HIGH);
  AddressLoad(190);
}

void SpeechChip::LL(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00101101);
  digitalWrite(_latch, HIGH);
  AddressLoad(110);
}

void SpeechChip::OW(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00110101);
  digitalWrite(_latch, HIGH);
  AddressLoad(240);
}

void SpeechChip::PA5(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00000100);
  digitalWrite(_latch, HIGH);
  AddressLoad(200);
}

void SpeechChip::BB1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00011100);
  digitalWrite(_latch, HIGH);
  AddressLoad(80); 
}

void SpeechChip::AX(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00001111);
  digitalWrite(_latch, HIGH);
  AddressLoad(70);
}

void SpeechChip::IY(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00010011);
  digitalWrite(_latch, HIGH);
  AddressLoad(250);
}

void SpeechChip::NN2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00111000);
  digitalWrite(_latch, HIGH);
  AddressLoad(190);
}

void SpeechChip::ER1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00110011);
  digitalWrite(_latch, HIGH);
  AddressLoad(160);
}

void SpeechChip::AE(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00011010);
  digitalWrite(_latch, HIGH);
  AddressLoad(120);
}

void SpeechChip::AA(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00011000);
  digitalWrite(_latch, HIGH);
  AddressLoad(100);
}

void SpeechChip::AY(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00000110);
  digitalWrite(_latch, HIGH);
  AddressLoad(260);
}

void SpeechChip::KK1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00101010);
  digitalWrite(_latch, HIGH);
  AddressLoad(160);
}

void SpeechChip::AO(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00010111);
  digitalWrite(_latch, HIGH);
  AddressLoad(100);
}

void SpeechChip::S(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00110111);
  digitalWrite(_latch, HIGH);
  AddressLoad(90);
}

void SpeechChip::EY(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00010100);
  digitalWrite(_latch, HIGH);
  AddressLoad(280);
}

void SpeechChip::PA4(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00000011);
  digitalWrite(_latch, HIGH);
  AddressLoad(100);
}

void SpeechChip::PA3(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00000010);
  digitalWrite(_latch, HIGH);
  AddressLoad(50);
}

void SpeechChip::PA2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST,B00000001);
  digitalWrite(_latch, HIGH);
  AddressLoad(30);
}

void SpeechChip::PA1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, 00000000);
  digitalWrite(_latch, HIGH);
  AddressLoad(10);
}

void SpeechChip::PP(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00001001);
  digitalWrite(_latch, HIGH);
  AddressLoad(210);
}

void SpeechChip::D1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00010101);
  digitalWrite(_latch, HIGH);
  AddressLoad(70);
}

void SpeechChip::D2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00100001);
  digitalWrite(_latch, HIGH);
  AddressLoad(160);
}

void SpeechChip::TT2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00001101);
  digitalWrite(_latch, HIGH);
  AddressLoad(140);
}

void SpeechChip::UW1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00010110);
  digitalWrite(_latch, HIGH);
  AddressLoad(100);
}

void SpeechChip::MM(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00010000);
  digitalWrite(_latch, HIGH);
  AddressLoad(180);
}

void SpeechChip::YY2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST,B00011001);
  digitalWrite(_latch, HIGH);
  AddressLoad(180);
}

void SpeechChip::IH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00001100);
  digitalWrite(_latch, HIGH);
  AddressLoad(70);
}

void SpeechChip::TT1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00010001);
  digitalWrite(_latch, HIGH);
  AddressLoad(100);
}

void SpeechChip::ZZ(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00101011);
  digitalWrite(_latch, HIGH);
  AddressLoad(210);
}

void SpeechChip::NG(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00101100);
  digitalWrite(_latch, HIGH);
  AddressLoad(220);
}

void SpeechChip::GG1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00100100);
  digitalWrite(_latch, HIGH);
  AddressLoad(80);
}

void SpeechChip::GG2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00111101);
  digitalWrite(_latch, HIGH);
  AddressLoad(40);
}

void SpeechChip::GG3(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00100010);
  digitalWrite(_latch, HIGH);
  AddressLoad(140);
}

void SpeechChip::FF(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00101000);
  digitalWrite(_latch, HIGH);
  AddressLoad(150);
}

void SpeechChip::KK2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00101001);
  digitalWrite(_latch, HIGH);
  AddressLoad(190);
}

void SpeechChip::KK3(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00001000);
  digitalWrite(_latch, HIGH);
  AddressLoad(120);
}

void SpeechChip::CH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00110010); 
  digitalWrite(_latch, HIGH);
  AddressLoad(190);
}

void SpeechChip::TH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00011101);
  digitalWrite(_latch, HIGH);
  AddressLoad(180);
}

void SpeechChip::ZH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00100110);
  digitalWrite(_latch, HIGH);
  AddressLoad(190);
}

void SpeechChip::RR1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00001110);
  digitalWrite(_latch, HIGH);
  AddressLoad(170);
}

void SpeechChip::RR2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00100111);
  digitalWrite(_latch, HIGH);
  AddressLoad(120);
}

void SpeechChip::OY(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00000101);
  digitalWrite(_latch, HIGH);
  AddressLoad(420);
}

void SpeechChip::JH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00001010);
  digitalWrite(_latch, HIGH);
  AddressLoad(140);
}

void SpeechChip::DH1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00010010);
  digitalWrite(_latch, HIGH);
  AddressLoad(290);
}

void SpeechChip::DH2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00110110);
  digitalWrite(_latch, HIGH);
  AddressLoad(240);
}

void SpeechChip::UW2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00011111);
  digitalWrite(_latch, HIGH);
  AddressLoad(290);
}

void SpeechChip::YY1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00110001);
  digitalWrite(_latch, HIGH);
  AddressLoad(130);
}

void SpeechChip::BB2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00111111);
  digitalWrite(_latch, HIGH);
  AddressLoad(50);
}

void SpeechChip::UH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00011110);
  digitalWrite(_latch, HIGH);
  AddressLoad(100);
}

void SpeechChip::AW(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00100000);
  digitalWrite(_latch, HIGH);
  AddressLoad(370);
}

void SpeechChip::VV(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00100011);
  digitalWrite(_latch, HIGH);
  AddressLoad(190);
}

void SpeechChip::SH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00100101);
  digitalWrite(_latch, HIGH);
  AddressLoad(160);
}

void SpeechChip::WW(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00101110);
  digitalWrite(_latch, HIGH);
  AddressLoad(180);
}

void SpeechChip::XR(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00101111);
  digitalWrite(_latch, HIGH);
  AddressLoad(360);
}

void SpeechChip::WH(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00110000);
  digitalWrite(_latch, HIGH);
  AddressLoad(200);
}

void SpeechChip::ER2(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00110100);
  digitalWrite(_latch, HIGH);
  AddressLoad(300);
}

void SpeechChip::AR(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00111011);
  digitalWrite(_latch, HIGH);
  AddressLoad(290);
}

void SpeechChip::YR(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00111100);
  digitalWrite(_latch, HIGH);
  AddressLoad(350);
}

void SpeechChip::NN1(){
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, B00001011);
  digitalWrite(_latch, HIGH);
  AddressLoad(140);
}