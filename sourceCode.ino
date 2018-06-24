//MADE BY NABIL RIDHWANSHAH
//PLACE PIN OF RGB TO THE FOLLOWING PINS:
//
//RGB LED
//RED = 6;
//GREEN = 9;
//BLUE = 10;
//
//POTENTIOMETERS:
//RED = A5;
//GREEN = A4;
//BLUE = A3;
//
//INSTAGRAM: @NAB1LLL
//TWITTER: @SKRURAI1
//GITHUB: BUILTBYNABIL

int r = 6;
int g = 9;
int b = 10;

int rPot = A5;
int gPot = A4;
int bPot = A3;

void setup() {
  Serial.begin(9600);
  pinMode(r , OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b , OUTPUT);
}

void loop() {

  // TESTING SERIAL
  Serial.println(analogRead(rPot));
  Serial.println(analogRead(gPot));
  Serial.println(analogRead(bPot));

  // MAPPING
  int rMap = map(analogRead(rPot) , 0 , 1024 , 0 , 255);
  int gMap = map(analogRead(gPot) , 0 , 1024 , 0 , 255);
  int bMap = map(analogRead(bPot) , 0 , 1024 , 0 , 255);

  // CODE
  setColor(rMap , gMap , bMap);

}

void setColor(int rValue, int gValue, int bValue){
  analogWrite(r,rValue);
  analogWrite(g,gValue);
  analogWrite(b,bValue);
}
