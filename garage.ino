

void setup(){
  Serial.begin(9600);
  
  //initialize OUTPUT pins 2 - 10 (8 output pins for binary, and 1 for power)
  int i2 = 2;
  for(int i =0; i < 9; i++){
    pinMode(i2, OUTPUT);
    i2++;
  }
  
  //initialize button pin
  pinMode(0, INPUT);
}

void loop(){
  digitalWrite(10, HIGH);
  Serial.println("STARTING POINT");
  int i = 255;
  int combos[256];
  while(i >= 0 ){
    int i3 = i;
    //run a loop to find all 8 chars
    int binary[8];
    
    int rem = i % 2;
    
    binary[0] = rem;
    i3 = i3 / 2;
    
    rem = i3 % 2;
    
    binary[1] = rem;
    i3 = i3 / 2;
    
    rem = i3 % 2;
    
    binary[2] = rem;
    i3 = i3 / 2;
    
    rem = i3 % 2;
    
    binary[3] = rem;
    i3 = i3 / 2;
    
    rem = i3 % 2;
    
    binary[4] = rem;
    i3 = i3 / 2;
    
    rem = i3 % 2;
    
    binary[5] = rem;
    i3 = i3 / 2;
    
    rem = i3 % 2;
    
    binary[6] = rem;
    i3 = i3 / 2;
    
    rem = i3 % 2;
    
    binary[7] = rem;
    i3 = i3 / 2;
    
    int i5 = 0;
    int i6 = 2;
    
       while(i5 < 8){
          if(binary[i5] == 1){
           Serial.print(1);
           digitalWrite(i6, HIGH);
        } else {
          Serial.print(0);
          digitalWrite(i6, LOW);
        }
        i6++;
        i5++;
      }
    
    Serial.println(i);
    
    i--;
    delay(250);
    
  }
  
}

