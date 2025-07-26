#define s1 2
#define s2 3
#define s3 18
#define s4 19
#define s5 16
#define s6 17
#define s7 20

#define cnv_1 4
#define cnv_2 6
#define cnv_3 10

#define green 28
#define red 26
#define orange 30

#define rodless 5
#define tn_1 7
#define sucktion 8
#define cyl_1 9
#define cyl_2 46
#define gripper 22
#define tn_2 24

#define c1s1 21
#define c1s2 23
#define c2s1 25
#define c2s2 27



int b = 1;
void setup() {

  pinMode(s1, INPUT_PULLUP);
  pinMode(s2, INPUT_PULLUP);
  pinMode(s3, INPUT_PULLUP);
  pinMode(s4, INPUT_PULLUP);
  pinMode(s5, INPUT_PULLUP);
  pinMode(s6, INPUT_PULLUP);
  pinMode(s7, INPUT_PULLUP);

  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(orange, OUTPUT);

  pinMode(cnv_1, OUTPUT);
  pinMode(cnv_2, OUTPUT);
  pinMode(cnv_3, OUTPUT);

  pinMode(rodless, OUTPUT);
  pinMode(tn_1, OUTPUT);
  pinMode(sucktion, OUTPUT);
  pinMode(cyl_1, OUTPUT);
  pinMode(cyl_2, OUTPUT);
  pinMode(gripper, OUTPUT);
  pinMode(tn_2, OUTPUT);

  pinMode(c1s1, INPUT_PULLUP);
  pinMode(c1s2, INPUT_PULLUP);
  pinMode(c2s1, INPUT_PULLUP);
  pinMode(c2s2, INPUT_PULLUP);
}

void loop() {
  if (b == 1) {
    digitalWrite(cnv_1, LOW);
    digitalWrite(cnv_2, LOW);
    digitalWrite(cnv_3, LOW);

    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(orange, HIGH);

    digitalWrite(rodless, HIGH);
    digitalWrite(tn_1, HIGH);
    digitalWrite(sucktion, HIGH);
    digitalWrite(cyl_1, HIGH);
    digitalWrite(cyl_2, HIGH);
    digitalWrite(gripper, HIGH);
    digitalWrite(tn_2, HIGH);
    b = 2;
  }
  if (b == 2) {
    if (digitalRead(s1) == 0) {
      b = 3;
    }
  }
  if (b == 3) {
    delay(2000);
    digitalWrite(cnv_1, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    b = 4;
  }
  if ((b == 4) && (digitalRead(s2) == 1)) {
    b = 5;
  }
  if (b == 5) {
    digitalWrite(cnv_1, LOW);
    digitalWrite(orange, LOW);
    delay(5000);
    digitalWrite(orange, HIGH);
    digitalWrite(cnv_1, HIGH);
    b = 6;
  }
  if ((b == 6) && (digitalRead(s3) == 0)) {
    b = 7;
  }
  if (b == 7) {
    delay(200);
    digitalWrite(cnv_1, LOW);
    delay(2000);
    digitalWrite(rodless, LOW);
    delay(2000);
    digitalWrite(tn_1, LOW);
    delay(2000);
    digitalWrite(sucktion, LOW);
    delay(2000);
    digitalWrite(tn_1, HIGH);
    delay(2000);
    digitalWrite(rodless, HIGH);
    delay(2000);
    digitalWrite(tn_1, LOW);
    delay(2000);
    digitalWrite(sucktion, HIGH);
    delay(2000);
    digitalWrite(tn_1, HIGH);
    delay(2000);
    b = 8;
  }

  if ((b == 8) && (digitalRead(s4) == 0)) {
    b = 9;
  }
  if (b == 9) {
    digitalWrite(cnv_2, HIGH);
    b = 10;
  }
  if ((b == 10) && (digitalRead(s5) == 0)) {
    b = 11;
  }
  if (b == 11) {
    delay(300);
    digitalWrite(cnv_2, LOW);
    delay(2000);
    b = 12;
  }
  if (b == 12) {
    if ((digitalRead(c1s1) == 0) && (digitalRead(c2s1) == 0)) {
      b = 13;
    }
  }
  if (b == 13) {
    digitalWrite(cyl_2, LOW);
    delay(2000);
    b = 14;
  }
  if ((b == 14) && digitalRead(c2s2) == 0) {
    b = 15;
  }
  if (b == 15) {
    digitalWrite(gripper, LOW);
    delay(2000);
    digitalWrite(cyl_2, HIGH);
    delay(2000);
    b = 16;
  }
  if ((b == 16) && digitalRead(c2s1) == 0) {
    b = 17;
  }
  if (b == 17) {
    digitalWrite(cyl_1, LOW);
    delay(2000);
    b = 18;
  }
  if ((b == 18) && digitalRead(c1s2) == 0) {
    b = 19;
  }
  if (b == 19) {
    digitalWrite(cyl_2, LOW);
    delay(2000);
    b = 20;
  }
  if ((b == 20) && digitalRead(c2s2) == 0) {
    b = 21;
  }
  if (b == 21) {
    digitalWrite(gripper, HIGH);
    delay(2000);
    digitalWrite(cyl_2, HIGH);
    delay(2000);
    b = 22;
  }
  if ((b == 22) && digitalRead(c2s1) == 0) {
    b = 23;
  }
  if (b == 23) {
    digitalWrite(orange, LOW);
    delay(5000);
    digitalWrite(orange, HIGH);
    digitalWrite(cyl_2, LOW);
    delay(2000);
    b = 24;
  }
  if ((b == 24) && digitalRead(c2s2) == 0) {
    b = 25;
  }
  if (b == 25) {
    digitalWrite(gripper, LOW);
    delay(2000);
    digitalWrite(cyl_2, HIGH);
    delay(2000);
    b = 26;
  }
  if ((b == 26) && digitalRead(c2s1) == 0) {
    b = 27;
  }
  if (b == 27) {
    digitalWrite(cyl_1, HIGH);
    delay(2000);
    b = 28;
  }
  if ((b == 28) && digitalRead(c1s1) == 0) {
    b = 29;
  }
  if (b == 29) {
    digitalWrite(cyl_2, LOW);
    delay(2000);
    b = 30;
  }
  if ((b == 30) && digitalRead(c2s2) == 0) {
    b = 31;
  }
  if (b == 31) {
    digitalWrite(gripper, HIGH);
    delay(2000);
    digitalWrite(cyl_2, HIGH);
    delay(2000);
    b = 32;
  }
  if ((b == 32) && digitalRead(c2s1) == 0) {
    b = 33;
  }
  if (b == 33) {
    digitalWrite(cnv_2, HIGH);
    b = 34;
  }
  if ((b == 34) && digitalRead(s6) == 0) {
    b = 35;
  }
  if (b == 35) {
    delay(200);
    digitalWrite(cnv_2, LOW);
    delay(2000);
    digitalWrite(cnv_3, HIGH);
    delay(2000);
    digitalWrite(tn_2, LOW);
    b = 36;
  }
  if ((b == 36) && digitalRead(s7) == 1) {
    b = 1;
  }
}
