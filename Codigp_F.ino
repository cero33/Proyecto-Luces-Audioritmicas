//este pa
int sensor  = (A0);
int sensor2 = (A1);
int tel1 = (A2);
int tel2 = (A3);


void setup()
{
  Serial.begin (9800) ;
 
  pinMode (sensor, INPUT);
  pinMode (sensor2, INPUT);
 
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (11, OUTPUT);
}

void loop()
{
  tel1 = analogRead(A2);
  analogWrite( 5 , tel1);
  tel2 = analogRead(A3);
  analogWrite( 6 , tel2 );
  int celu = map (tel1, 0 , 1023, 0, 100) ;

  Serial.print("Lado: (");
  Serial.print(celu);
  Serial.println( ")" );
  delay (63);

  if((celu > 5) && (celu < 35)){
  digitalWrite (13, HIGH);
  }else{
    digitalWrite (13,LOW);
  }
  if((celu > 35) && (celu < 65)){
  digitalWrite (12, HIGH);
  }else{
    digitalWrite (12,LOW);
  }
  if((celu > 65) && (celu < 100)){
  digitalWrite (11, HIGH);
  }else{
    digitalWrite (11,LOW);
  }

  if(sensor == 1 ){
  digitalWrite (13, HIGH);
  }else{
    digitalWrite (13, LOW);
  }
 
  if(sensor2 == 1 ){
  digitalWrite (11, HIGH);
  }else{
    digitalWrite (11, LOW);
  }
}
