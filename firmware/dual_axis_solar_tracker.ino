int LDR_left = A0;
int LDR_right = A1;
int LDR_top = A2;
int LDR_bottom = A3;

int threshold = 50;

// Horizontal motor
int motorX1 = 8;
int motorX2 = 9;

// Vertical motor
int motorY1 = 10;
int motorY2 = 11;

void setup()
{
 pinMode(motorX1, OUTPUT);
 pinMode(motorX2, OUTPUT);
 pinMode(motorY1, OUTPUT);
 pinMode(motorY2, OUTPUT);
}

void loop()
{
 int left = analogRead(LDR_left);
 int right = analogRead(LDR_right);
 int top = analogRead(LDR_top);
 int bottom = analogRead(LDR_bottom);

 int diffX = left - right;
 int diffY = top - bottom;

 // Horizontal control
 if(abs(diffX) > threshold)
 {
   if(diffX > 0)
     moveLeft();
   else
     moveRight();
 }
 else
 {
   stopHorizontal();
 }

 // Vertical control
 if(abs(diffY) > threshold)
 {
   if(diffY > 0)
     moveUp();
   else
     moveDown();
 }
 else
 {
   stopVertical();
 }
}

void moveLeft()
{
 digitalWrite(motorX1, HIGH);
 digitalWrite(motorX2, LOW);
}

void moveRight()
{
 digitalWrite(motorX1, LOW);
 digitalWrite(motorX2, HIGH);
}

void moveUp()
{
 digitalWrite(motorY1, HIGH);
 digitalWrite(motorY2, LOW);
}

void moveDown()
{
 digitalWrite(motorY1, LOW);
 digitalWrite(motorY2, HIGH);
}

void stopHorizontal()
{
 digitalWrite(motorX1, LOW);
 digitalWrite(motorX2, LOW);
}

void stopVertical()
{
 digitalWrite(motorY1, LOW);
 digitalWrite(motorY2, LOW);
}
