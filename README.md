# Birthday Tune
 Implementing <strong>Birthday Song</strong> With Arduino and Piezo buzzer
 
 ### Click on image below for Demonstration Video.
 
 [![Youtbe video link](https://img.youtube.com/vi/0sK9So8N9TU/0.jpg)](https://www.youtube.com/watch?v=0sK9So8N9TU)
 
# Circuit
![image](https://user-images.githubusercontent.com/72307020/188278788-14fd6cfd-4c0f-4d9b-90b7-6c25b41eaf44.png)


You May Run the Code on the TinkerCad itself.
Here is [my link](https://www.tinkercad.com/things/22eWwzy6MDD) to it.

if you wanna run it on arduino board. I have Provided the .ino file as well.

# Code Logic:
 The Code and the IDEA is originally created by me. So, there maybe some bugs or you may feel improvement in tune.
 
 The idea is that:
 
 piezo has following as function to produce sound:
 ```
 tone(pin, frequency, duration)
 ```
 And in music we have a particular frequency for a particular note
 
 So, I created a function for each some basic notes like sa ,re , Ni' , ga used in birthday tune.
 
 ```
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
 ```
 
and then, we have notes for birthday tune:

![image](https://user-images.githubusercontent.com/72307020/188279813-1e1900e1-cf84-4928-86a7-89b0a6a4632f.png)

implementing above notes with a proper delay in between buzzer sounds gives me this birthday tune.

```
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
```

# 🔗 **Follow Me**
[![portfolio](https://img.shields.io/badge/my_portfolio-red?style=for-the-badge&logo=ko-fi&logoColor=white)](https://bit.ly/manigarg)[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/manigargpta/)
[![twitter](https://img.shields.io/badge/medium-000?style=for-the-badge&logo=medium&logoColor=white)](https://medium.com/@manipta)

