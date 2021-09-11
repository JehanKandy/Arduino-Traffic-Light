//...............JehanKandy........................
//...........www.jehankandy.com....................
//........www.github.com/JehanKandy................

//......Arduino Based Traffic Light System 1.0.....


//create Variables.....
int R_LED = 3; //Red LED
int Y_LED = 4; //Yello LED
int G_LED = 5; //Green LED 

void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

}

void loop() {
  //part 1
  digitalWrite(R_LED,HIGH);
  digitalWrite(Y_LED,LOW);
  digitalWrite(G_LED,LOW);
  delay(30000); //wait 30 seocnds

  //part 2
  digitalWrite(R_LED,HIGH);
  digitalWrite(Y_LED,HIGH);
  digitalWrite(G_LED,LOW);
  delay(2000); //wait 2 seocnds

  //part 3
  digitalWrite(R_LED,LOW);
  digitalWrite(Y_LED,LOW);
  digitalWrite(G_LED,HIGH);
  delay(30000); //wait 30 seocnds

  //part 5;
  digitalWrite(R_LED,LOW);
  digitalWrite(Y_LED,HIGH);
  digitalWrite(G_LED,LOW);
  delay(2000); //wait 2 seocnds

}

//.........coded by : JehanKandy....
//...........Thank You..............
