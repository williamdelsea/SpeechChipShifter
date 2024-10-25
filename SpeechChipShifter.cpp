#include "SpeechChipShifter.h"

SpeechChipShifter::SpeechChipShifter(int ALD, int data, int clock, int latch)
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

int SpeechChipShifter::AddressLoad(int delayTime){
  digitalWrite(_ALD, LOW);
  delay(10);
  digitalWrite(_ALD, HIGH);
  delay(delayTime);
}

void SpeechChipShifter::ShiftAllophone(uint8_t bits) {
  digitalWrite(_latch, LOW);
  shiftOut(_data, _clock, LSBFIRST, bits);
  digitalWrite(_latch, HIGH);
}

void SpeechChipShifter::OR(){
  
  ShiftAllophone(B00111010);
  
  AddressLoad(330);
}

void SpeechChipShifter::HH2(){
  
  ShiftAllophone(B00111001);
  
  AddressLoad(180);
}

void SpeechChipShifter::HH1(){
  
  ShiftAllophone(B00011011);
  
  AddressLoad(130);
}

void SpeechChipShifter::EH(){
  
  ShiftAllophone(B00000111);
  
  AddressLoad(70);
}

void SpeechChipShifter::EL(){
  
  ShiftAllophone(B00111111);
  
  AddressLoad(190);
}

void SpeechChipShifter::LL(){
  
  ShiftAllophone(B00101101);
  
  AddressLoad(110);
}

void SpeechChipShifter::OW(){
  
  ShiftAllophone(B00110101);
  
  AddressLoad(240);
}

void SpeechChipShifter::PA5(){
  
  ShiftAllophone(B00000100);
  
  AddressLoad(200);
}

void SpeechChipShifter::BB1(){
  
  ShiftAllophone(B00011100);
  
  AddressLoad(80); 
}

void SpeechChipShifter::AX(){
  
  ShiftAllophone(B00001111);
  
  AddressLoad(70);
}

void SpeechChipShifter::IY(){
  
  ShiftAllophone(B00010011);
  
  AddressLoad(250);
}

void SpeechChipShifter::NN2(){
  
  ShiftAllophone(B00111000);
  
  AddressLoad(190);
}

void SpeechChipShifter::ER1(){
  
  ShiftAllophone(B00110011);
  
  AddressLoad(160);
}

void SpeechChipShifter::AE(){
  
  ShiftAllophone(B00011010);
  
  AddressLoad(120);
}

void SpeechChipShifter::AA(){
  
  ShiftAllophone(B00011000);
  
  AddressLoad(100);
}

void SpeechChipShifter::AY(){
  
  ShiftAllophone(B00000110);
  
  AddressLoad(260);
}

void SpeechChipShifter::KK1(){
  
  ShiftAllophone(B00101010);
  
  AddressLoad(160);
}

void SpeechChipShifter::AO(){
  
  ShiftAllophone(B00010111);
  
  AddressLoad(100);
}

void SpeechChipShifter::S(){
  
  ShiftAllophone(B00110111);
  
  AddressLoad(90);
}

void SpeechChipShifter::EY(){
  
  ShiftAllophone(B00010100);
  
  AddressLoad(280);
}

void SpeechChipShifter::PA4(){
  
  ShiftAllophone(B00000011);
  
  AddressLoad(100);
}

void SpeechChipShifter::PA3(){
  
  ShiftAllophone(B00000010);
  
  AddressLoad(50);
}

void SpeechChipShifter::PA2(){
  
  shiftOut(_data, _clock, LSBFIRST,B00000001);
  
  AddressLoad(30);
}

void SpeechChipShifter::PA1(){
  
  ShiftAllophone(00000000);
  
  AddressLoad(10);
}

void SpeechChipShifter::PP(){
  
  ShiftAllophone(B00001001);
  
  AddressLoad(210);
}

void SpeechChipShifter::D1(){
  
  ShiftAllophone(B00010101);
  
  AddressLoad(70);
}

void SpeechChipShifter::D2(){
  
  ShiftAllophone(B00100001);
  
  AddressLoad(160);
}

void SpeechChipShifter::TT2(){
  
  ShiftAllophone(B00001101);
  
  AddressLoad(140);
}

void SpeechChipShifter::UW1(){
  
  ShiftAllophone(B00010110);
  
  AddressLoad(100);
}

void SpeechChipShifter::MM(){
  
  ShiftAllophone(B00010000);
  
  AddressLoad(180);
}

void SpeechChipShifter::YY2(){
  
  shiftOut(_data, _clock, LSBFIRST,B00011001);
  
  AddressLoad(180);
}

void SpeechChipShifter::IH(){
  
  ShiftAllophone(B00001100);
  
  AddressLoad(70);
}

void SpeechChipShifter::TT1(){
  
  ShiftAllophone(B00010001);
  
  AddressLoad(100);
}

void SpeechChipShifter::ZZ(){
  
  ShiftAllophone(B00101011);
  
  AddressLoad(210);
}

void SpeechChipShifter::NG(){
  
  ShiftAllophone(B00101100);
  
  AddressLoad(220);
}

void SpeechChipShifter::GG1(){
  
  ShiftAllophone(B00100100);
  
  AddressLoad(80);
}

void SpeechChipShifter::GG2(){
  
  ShiftAllophone(B00111101);
  
  AddressLoad(40);
}

void SpeechChipShifter::GG3(){
  
  ShiftAllophone(B00100010);
  
  AddressLoad(140);
}

void SpeechChipShifter::FF(){
  
  ShiftAllophone(B00101000);
  
  AddressLoad(150);
}

void SpeechChipShifter::KK2(){
  
  ShiftAllophone(B00101001);
  
  AddressLoad(190);
}

void SpeechChipShifter::KK3(){
  
  ShiftAllophone(B00001000);
  
  AddressLoad(120);
}

void SpeechChipShifter::CH(){
  
  ShiftAllophone(B00110010); 
  
  AddressLoad(190);
}

void SpeechChipShifter::TH(){
  
  ShiftAllophone(B00011101);
  
  AddressLoad(180);
}

void SpeechChipShifter::ZH(){
  
  ShiftAllophone(B00100110);
  
  AddressLoad(190);
}

void SpeechChipShifter::RR1(){
  
  ShiftAllophone(B00001110);
  
  AddressLoad(170);
}

void SpeechChipShifter::RR2(){
  
  ShiftAllophone(B00100111);
  
  AddressLoad(120);
}

void SpeechChipShifter::OY(){
  
  ShiftAllophone(B00000101);
  
  AddressLoad(420);
}

void SpeechChipShifter::JH(){
  
  ShiftAllophone(B00001010);
  
  AddressLoad(140);
}

void SpeechChipShifter::DH1(){
  
  ShiftAllophone(B00010010);
  
  AddressLoad(290);
}

void SpeechChipShifter::DH2(){
  
  ShiftAllophone(B00110110);
  
  AddressLoad(240);
}

void SpeechChipShifter::UW2(){
  
  ShiftAllophone(B00011111);
  
  AddressLoad(290);
}

void SpeechChipShifter::YY1(){
  
  ShiftAllophone(B00110001);
  
  AddressLoad(130);
}

void SpeechChipShifter::BB2(){
  
  ShiftAllophone(B00111111);
  
  AddressLoad(50);
}

void SpeechChipShifter::UH(){
  
  ShiftAllophone(B00011110);
  
  AddressLoad(100);
}

void SpeechChipShifter::AW(){
  
  ShiftAllophone(B00100000);
  
  AddressLoad(370);
}

void SpeechChipShifter::VV(){
  
  ShiftAllophone(B00100011);
  
  AddressLoad(190);
}

void SpeechChipShifter::SH(){
  
  ShiftAllophone(B00100101);
  
  AddressLoad(160);
}

void SpeechChipShifter::WW(){
  
  ShiftAllophone(B00101110);
  
  AddressLoad(180);
}

void SpeechChipShifter::XR(){
  
  ShiftAllophone(B00101111);
  
  AddressLoad(360);
}

void SpeechChipShifter::WH(){
  
  ShiftAllophone(B00110000);
  
  AddressLoad(200);
}

void SpeechChipShifter::ER2(){
  
  ShiftAllophone(B00110100);
  
  AddressLoad(300);
}

void SpeechChipShifter::AR(){
  
  ShiftAllophone(B00111011);
  
  AddressLoad(290);
}

void SpeechChipShifter::YR(){
  
  ShiftAllophone(B00111100);
  
  AddressLoad(350);
}

void SpeechChipShifter::NN1(){
  
  ShiftAllophone(B00001011);
  
  AddressLoad(140);
}