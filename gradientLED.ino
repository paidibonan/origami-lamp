const int greenLEDpin = 9;
const int redLEDpin = 10;
const int blueLEDpin = 11;

int redValue = 125;
int greenValue = 190;
int blueValue = 255;

boolean redIncr = false;
boolean greenIncr = false;
boolean blueIncr = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(greenLEDpin, OUTPUT);
  pinMode(blueLEDpin, OUTPUT);
  pinMode(redLEDpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (redIncr) {
    if (redValue >= 255) {
    redIncr = false;
    } else {
    redValue = redValue + 5;
    }
  } else {
    if (redValue <= 0) {
    redIncr = true;
    } else {
    redValue = redValue - 5;
    }
  }
  

   if (blueIncr) {
    if (blueValue >= 255) {
    blueIncr = false;
    } else {
    blueValue = blueValue + 5;
    }
  } else {
    if (blueValue <= 0) {
    blueIncr = true;
    } else {
    blueValue = blueValue - 5;
    }
  }
 
   if (greenIncr) {
    if (greenValue >= 255) {
    greenIncr = false;
    } else {
    greenValue = greenValue + 5;
    }
  } else {
    if (greenValue <= 0) {
    greenIncr = true;
    } else {
    greenValue = greenValue - 5;
    }
  }

  analogWrite(redLEDpin, redValue);
  analogWrite(blueLEDpin, blueValue);
  analogWrite(greenLEDpin, greenValue);


  delay(1000);

}
