// C++ code
//Mani Garg
//GITHUB-manipta
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  
}
  void sa(int t){
 //for controlling frequency of buzzer  
    tone(11,523.25,t);
  Serial.println("SA");
  digitalWrite(13,HIGH);
  }
void nii(int t){
 //for controlling frequency of buzzer  
    tone(11,941.85,t);
  Serial.println("ni_");
  digitalWrite(13,HIGH);
  }
  void re(int t){
 //for controlling frequency of buzzer  
     tone(11,587.33,t);
  Serial.println("RE");
  digitalWrite(13,HIGH);}
 //digitalWrite(11, HIGH);
  void ga(int t){
 //for controlling frequency of buzzer  
     tone(11,659.26,t);
 Serial.println("GA");
 digitalWrite(13,HIGH);}
   void ma(int t)
  {
 //for controlling frequency of buzzer  
     tone(11,698.46,t);
 Serial.println("MA");
 digitalWrite(13,HIGH);}
   void pa(int t)
  {
 //for controlling frequency of buzzer  
     tone(11,783.99,t);
 Serial.println("PA");
 digitalWrite(13,HIGH);}
  void dha(int t)
  {
 //for controlling frequency of buzzer  
     tone(11,880,t);
 Serial.println("DHA");
 digitalWrite(13,HIGH);}
  void ni(int t)
  {
 //for controlling frequency of buzzer  
     tone(11,987.77,t);
 Serial.println("NI");
 digitalWrite(13,HIGH);}
   void saa(int t)
  {
 //for controlling frequency of buzzer  
     tone(11,1046.5,t);
 Serial.println("SA'");
 digitalWrite(13,HIGH);}
void loop()
{	delay(500);
  sa(250);
  delay(301);
  sa(150);
  delay(201);
  re(350);
  delay(350);
  sa(200);
  delay(350);
  ma(350);
  delay(350);
  ga(200);
  delay(1000);
  
  sa(250);
  delay(301);
  sa(150);
  delay(201);
  re(350);
  delay(350);
  sa(200);
  delay(350);
  pa(350);
  delay(350);
  ma(200);
  delay(1000);
  
  sa(250);
  delay(301);
  sa(150);
  delay(201);
  saa(350);
  delay(352);
  dha(200);
  delay(250);
  ma(350);
  delay(350);
  ga(200);
  delay(200);
  re(200);
  delay(1000);
  
    nii(250);
  delay(301);
  nii(150);
  delay(201);
  dha(350);
  delay(350);
  ma(200);
  delay(200);
  pa(350);
  delay(380);
  ma(200);
  delay(1000);
 // exit(0);
}

 