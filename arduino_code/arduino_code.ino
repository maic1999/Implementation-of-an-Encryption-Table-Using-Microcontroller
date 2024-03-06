int pinA=2;
int pinB=3;
int pinC=4;
int pinD=5;
int pinOut1=9;
int pinOut2=10;
int pinOut3=11;
int pinOut4=12;


void setup()
{
     pinMode(pinOut1,OUTPUT);
     pinMode(pinOut2,OUTPUT);
     pinMode(pinOut3,OUTPUT);
     pinMode(pinOut4,OUTPUT);
     pinMode(pinA,INPUT);
     pinMode(pinB,INPUT);
     pinMode(pinC,INPUT);
     pinMode(pinD,INPUT);
}


void loop() 
{

     boolean pinAState=digitalRead(pinA);
     boolean pinBState=digitalRead(pinB);
     boolean pinCState=digitalRead(pinC);
     boolean pinDState=digitalRead(pinD);
     boolean pinorOutState;
     boolean pinorOutState1;
     boolean pinorOutState2;
     boolean pinorOutState3;

     pinorOutState=((!pinDState)&(!pinAState))|((!pinCState)& (!pinAState))|((!pinDState)&(pinBState))|((pinDState)&(!pinBState)&(pinAState));
     digitalWrite(pinOut1,pinorOutState);
 

pinorOutState1=((!pinDState)&(!pinCState)&(pinBState))|((!pinDState)&(pinBState)&(!pinAState))|((pinDState)&(!pinCState)&(!pinBState))|((pinDState)&(!pinBState)&(pinAState));
     digitalWrite(pinOut2,pinorOutState1);
     pinorOutState2=((!pinDState)&(pinCState)&(!pinBState))|((pinCState)&(pinAState))|((pinDState)&(!pinCState)&(pinBState));
     digitalWrite(pinOut3,pinorOutState2);
     pinorOutState3=((!pinDState)&(!pinCState))|((!pinCState)&(pinAState))|((!pinDState)&(pinBState)&(!pinAState))|((!pinCState)&(pinBState))|((pinDState)&(pinBState)&(pinAState));
     digitalWrite(pinOut4,pinorOutState3);
}
