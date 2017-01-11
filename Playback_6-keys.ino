/*
 * This sketch of firmware is debugged on ARDUINO
 * It supports microcontrollers: ATMEGA8; ATMEGA168; ATMEGA169; ATMEGA328P
 * It designed for multimedia player
 * The quantity of buttons are at 6 pieces
 */



int MCU_PC0_A0 = A0; //
int MCU_PC1_A1 = A1; //
int MCU_PC2_A2 = A2; //
int MCU_PC3_A3 = A3; //
int MCU_PB0_D8 = 8; //
int MCU_PB1_D9 = 9; //

int Button_State = 0; //

const int Button_Play = MCU_PC0_A0; //
const int Button_Pause = MCU_PC1_A1; //
const int Button_Next = MCU_PC2_A2; //
const int Button_Previous = MCU_PC3_A3; //
const int Button_High_Volume = MCU_PB0_D8; //
const int Button_Low_Volume = MCU_PB1_D9; //


void setup() {
  // put your setup code here, to run once:
pinMode(Button_Play, INPUT); //
pinMode(Button_Pause, INPUT); //
pinMode(Button_Next, INPUT); //
pinMode(Button_Previous, INPUT); //
pinMode(Button_High_Volume, INPUT); //
pinMode(Button_Low_Volume, INPUT); //

digitalWrite(Button_Play, LOW); //
digitalWrite(Button_Pause, LOW); //
digitalWrite(Button_Next, LOW); //
digitalWrite(Button_Previous, LOW); //
digitalWrite(Button_High_Volume, LOW); //
digitalWrite(Button_Low_Volume, LOW); //
Serial.begin(9600);
Serial.available();
Serial.flush();
}

void loop() {
  // put your main code here, to run repeatedly:

Button_State = digitalRead(Button_Play); //
if(!Button_State)
Serial.print("Play"); //
do
{
  //
  Button_State = digitalRead(Button_Play); //
  }
while(!Button_State); //

Button_State = digitalRead(Button_Pause); //
if(!Button_State)
Serial.print("Pause"); //
do
{
  //
  Button_State = digitalRead(Button_Pause); //
  }
while(!Button_State); //

Button_State = digitalRead(Button_Next); //
if(!Button_State)
Serial.print("Next"); //
do
{
  //
  Button_State = digitalRead(Button_Next); //
  }
while(!Button_State); //

Button_State = digitalRead(Button_Previous); //
if(!Button_State)
Serial.print("Previous"); //
do
{
  //
  Button_State = digitalRead(Button_Previous); //
  }
while(!Button_State); //

Button_State = digitalRead(Button_High_Volume); //
if(!Button_State)
Serial.print("High Volume"); //
do
{
  //
  Button_State = digitalRead(Button_High_Volume); //
  }
while(!Button_State); //

Button_State = digitalRead(Button_Low_Volume); //
if(!Button_State)
Serial.print("Low_Volume"); //
do
{
  //
  Button_State = digitalRead(Button_Low_Volume); //
  }
  while(!Button_State); //


delay(200);
}
