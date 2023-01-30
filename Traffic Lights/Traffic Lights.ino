// Arduino Two Way Traffic Light by Average Education

// Traffic light one
int red1 = 10;
int yellow1 = 9;
int green1 = 8;

// Traffic light two
int red2 = 13;
int yellow2 = 12;
int green2 = 11;

int buzz = 2;

void setup () {
// Traffic light one
pinMode (red1, OUTPUT);
pinMode (yellow1, OUTPUT);
pinMode (green1, OUTPUT);

// Traffic light two
pinMode (red2, OUTPUT);
pinMode (yellow2, OUTPUT);
pinMode (green2, OUTPUT);

pinMode (buzz, OUTPUT);
}
void loop () {
 changeLights();
}

void changeLights () {
// turns off both yellow and turns on red1 and green2
digitalWrite(yellow1, LOW);
digitalWrite(red1, HIGH);
digitalWrite(yellow2, LOW);
digitalWrite(red2, LOW);
digitalWrite(green2, HIGH);
digitalWrite(green1, LOW);
delay(7000);

digitalWrite(green2, LOW);
delay(1000);
digitalWrite(green2, HIGH);
delay(1000);
digitalWrite(green2, LOW);
delay(1000);
digitalWrite(green2, HIGH);
delay(1000);
digitalWrite(green2, LOW);
delay(1000);
digitalWrite(green2, HIGH);
delay(1000);
digitalWrite(green2, LOW);
digitalWrite(yellow2, HIGH);
delay(3000);
digitalWrite(yellow2, LOW);
digitalWrite(red1, LOW);
digitalWrite(green2, LOW);
digitalWrite(yellow1, LOW);
digitalWrite(green1, HIGH);
digitalWrite(red2, HIGH);

delay(10000);

digitalWrite(green1, LOW);
delay(1000);
digitalWrite(green1, HIGH);
delay(1000);
digitalWrite(green1, LOW);
delay(1000);
digitalWrite(green1, HIGH);
delay(1000);
digitalWrite(green1, LOW);
delay(1000);
digitalWrite(green1, HIGH);
delay(1000);

digitalWrite(green1, LOW);
digitalWrite(yellow1, HIGH);
delay(3000);
// digitalWrite(green1, HIGH);
// digitalWrite(yellow2, LOW);
// digitalWrite(red1, LOW);
}