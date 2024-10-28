#include "SpeechChipShifter.h"

SpeechChipShifter::SpeechChipShifter(int ALD, int data, int clock, int latch)
{
  pinMode(ALD, OUTPUT);
  pinMode(data, OUTPUT);
  pinMode(clock, OUTPUT);
  pinMode(latch, OUTPUT);
  digitalWrite(ALD, HIGH);
  //DDRD = B11111111;
  _ALD = ALD;
  _data = data;
  _clock = clock;
  _latch = latch;
}

void SpeechChipShifter::AddressLoad(unsigned long delayTime){
  digitalWrite(_ALD, LOW);
  delay(10);
  digitalWrite(_ALD, HIGH);
  delay(delayTime);
}

void SpeechChipShifter::LoadAllophone(uint8_t bits) {
  digitalWrite(_latch, LOW);
  ShiftData(_data, _clock, MSBFIRST, bits);
  digitalWrite(_latch, HIGH);
  delay(10);
}

void SpeechChipShifter::ShiftData(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder, uint8_t val)
{
      uint8_t i;

      for (i = 0; i < 8; i++)  {
            if (bitOrder == LSBFIRST)
                  digitalWrite(dataPin, !!(val & (1 << i)));
            else      
                  digitalWrite(dataPin, !!(val & (1 << (7 - i))));
                  
            digitalWrite(clockPin, HIGH);
            digitalWrite(clockPin, LOW);            
      }
}

void SpeechChipShifter::OR(){
  
  LoadAllophone(B00111010);
  
  AddressLoad(330);
}

void SpeechChipShifter::HH2(){
  
  LoadAllophone(B00111001);
  
  AddressLoad(180);
}

void SpeechChipShifter::HH1(){
  
  LoadAllophone(B00011011);
  
  AddressLoad(130);
}

void SpeechChipShifter::EH(){
  
  LoadAllophone(B00000111);
  
  AddressLoad(70);
}

void SpeechChipShifter::EL(){
  
  LoadAllophone(B00111111);
  
  AddressLoad(190);
}

void SpeechChipShifter::LL(){
  
  LoadAllophone(B00101101);
  
  AddressLoad(110);
}

void SpeechChipShifter::OW(){
  
  LoadAllophone(B00110101);
  
  AddressLoad(240);
}

void SpeechChipShifter::PA5(){
  
  LoadAllophone(B00000100);
  
  AddressLoad(200);
}

void SpeechChipShifter::BB1(){
  
  LoadAllophone(B00011100);
  
  AddressLoad(80); 
}

void SpeechChipShifter::AX(){
  
  LoadAllophone(B00001111);
  
  AddressLoad(70);
}

void SpeechChipShifter::IY(){
  
  LoadAllophone(B00010011);
  
  AddressLoad(250);
}

void SpeechChipShifter::NN2(){
  
  LoadAllophone(B00111000);
  
  AddressLoad(190);
}

void SpeechChipShifter::ER1(){
  
  LoadAllophone(B00110011);
  
  AddressLoad(160);
}

void SpeechChipShifter::AE(){
  
  LoadAllophone(B00011010);
  
  AddressLoad(120);
}

void SpeechChipShifter::AA(){
  
  LoadAllophone(B00011000);
  
  AddressLoad(100);
}

void SpeechChipShifter::AY(){
  
  LoadAllophone(B00000110);
  
  AddressLoad(260);
}

void SpeechChipShifter::KK1(){
  
  LoadAllophone(B00101010);
  
  AddressLoad(160);
}

void SpeechChipShifter::AO(){
  
  LoadAllophone(B00010111);
  
  AddressLoad(100);
}

void SpeechChipShifter::S(){
  
  LoadAllophone(B00110111);
  
  AddressLoad(90);
}

void SpeechChipShifter::EY(){
  
  LoadAllophone(B00010100);
  
  AddressLoad(280);
}

void SpeechChipShifter::PA4(){
  
  LoadAllophone(B00000011);
  
  AddressLoad(100);
}

void SpeechChipShifter::PA3(){
  
  LoadAllophone(B00000010);
  
  AddressLoad(50);
}

void SpeechChipShifter::PA2(){
  
  LoadAllophone(B00000001);
  
  AddressLoad(30);
}

void SpeechChipShifter::PA1(){
  
  LoadAllophone(B00000000);
  
  AddressLoad(10);
}

void SpeechChipShifter::PP(){
  
  LoadAllophone(B00001001);
  
  AddressLoad(210);
}

void SpeechChipShifter::D1(){
  
  LoadAllophone(B00010101);
  
  AddressLoad(70);
}

void SpeechChipShifter::D2(){
  
  LoadAllophone(B00100001);
  
  AddressLoad(160);
}

void SpeechChipShifter::TT2(){
  
  LoadAllophone(B00001101);
  
  AddressLoad(140);
}

void SpeechChipShifter::UW1(){
  
  LoadAllophone(B00010110);
  
  AddressLoad(100);
}

void SpeechChipShifter::MM(){
  
  LoadAllophone(B00010000);
  
  AddressLoad(180);
}

void SpeechChipShifter::YY2(){
  
  LoadAllophone(B00011001);
  
  AddressLoad(180);
}

void SpeechChipShifter::IH(){
  
  LoadAllophone(B00001100);
  
  AddressLoad(70);
}

void SpeechChipShifter::TT1(){
  
  LoadAllophone(B00010001);
  
  AddressLoad(100);
}

void SpeechChipShifter::ZZ(){
  
  LoadAllophone(B00101011);
  
  AddressLoad(210);
}

void SpeechChipShifter::NG(){
  
  LoadAllophone(B00101100);
  
  AddressLoad(220);
}

void SpeechChipShifter::GG1(){
  
  LoadAllophone(B00100100);
  
  AddressLoad(80);
}

void SpeechChipShifter::GG2(){
  
  LoadAllophone(B00111101);
  
  AddressLoad(40);
}

void SpeechChipShifter::GG3(){
  
  LoadAllophone(B00100010);
  
  AddressLoad(140);
}

void SpeechChipShifter::FF(){
  
  LoadAllophone(B00101000);
  
  AddressLoad(150);
}

void SpeechChipShifter::KK2(){
  
  LoadAllophone(B00101001);
  
  AddressLoad(190);
}

void SpeechChipShifter::KK3(){
  
  LoadAllophone(B00001000);
  
  AddressLoad(120);
}

void SpeechChipShifter::CH(){
  
  LoadAllophone(B00110010); 
  
  AddressLoad(190);
}

void SpeechChipShifter::TH(){
  
  LoadAllophone(B00011101);
  
  AddressLoad(180);
}

void SpeechChipShifter::ZH(){
  
  LoadAllophone(B00100110);
  
  AddressLoad(190);
}

void SpeechChipShifter::RR1(){
  
  LoadAllophone(B00001110);
  
  AddressLoad(170);
}

void SpeechChipShifter::RR2(){
  
  LoadAllophone(B00100111);
  
  AddressLoad(120);
}

void SpeechChipShifter::OY(){
  
  LoadAllophone(B00000101);
  
  AddressLoad(420);
}

void SpeechChipShifter::JH(){
  
  LoadAllophone(B00001010);
  
  AddressLoad(140);
}

void SpeechChipShifter::DH1(){
  
  LoadAllophone(B00010010);
  
  AddressLoad(290);
}

void SpeechChipShifter::DH2(){
  
  LoadAllophone(B00110110);
  
  AddressLoad(240);
}

void SpeechChipShifter::UW2(){
  
  LoadAllophone(B00011111);
  
  AddressLoad(290);
}

void SpeechChipShifter::YY1(){
  
  LoadAllophone(B00110001);
  
  AddressLoad(130);
}

void SpeechChipShifter::BB2(){
  
  LoadAllophone(B00111111);
  
  AddressLoad(50);
}

void SpeechChipShifter::UH(){
  
  LoadAllophone(B00011110);
  
  AddressLoad(100);
}

void SpeechChipShifter::AW(){
  
  LoadAllophone(B00100000);
  
  AddressLoad(370);
}

void SpeechChipShifter::VV(){
  
  LoadAllophone(B00100011);
  
  AddressLoad(190);
}

void SpeechChipShifter::SH(){
  
  LoadAllophone(B00100101);
  
  AddressLoad(160);
}

void SpeechChipShifter::WW(){
  
  LoadAllophone(B00101110);
  
  AddressLoad(180);
}

void SpeechChipShifter::XR(){
  
  LoadAllophone(B00101111);
  
  AddressLoad(360);
}

void SpeechChipShifter::WH(){
  
  LoadAllophone(B00110000);
  
  AddressLoad(200);
}

void SpeechChipShifter::ER2(){
  
  LoadAllophone(B00110100);
  
  AddressLoad(300);
}

void SpeechChipShifter::AR(){
  
  LoadAllophone(B00111011);
  
  AddressLoad(290);
}

void SpeechChipShifter::YR(){
  
  LoadAllophone(B00111100);
  
  AddressLoad(350);
}

void SpeechChipShifter::NN1(){
  
  LoadAllophone(B00001011);
  
  AddressLoad(140);
}