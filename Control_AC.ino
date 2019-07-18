#define IRledPin 12
#define NumIRsignals 200


// Codigo de Encendido de los aires acondicionados
int IRsignal_ON[] = {
// ON, OFF (en 10's de microsegundos)
  440, 414,
  64, 148,
  62, 44,
  62, 148,
  64, 148,
  62, 44,
  62, 44,
  62, 148,
  64, 42,
  64, 42,
  62, 150,
  62, 44,
  62, 42,
  64, 148,
  62, 148,
  64, 42,
  64, 148,
  62, 44,
  64, 42,
  62, 44,
  62, 148,
  64, 148,
  62, 148,
  64, 148,
  62, 150,
  62, 148,
  64, 148,
  62, 148,
  64, 42,
  64, 42,
  64, 42,
  62, 44,
  62, 44,
  62, 44,
  62, 148,
  64, 42,
  62, 44,
  62, 150,
  62, 42,
  64, 42,
  64, 42,
  64, 148,
  62, 42,
  64, 148,
  64, 148,
  62, 44,
  62, 150,
  62, 148,
  62, 148,
  64, 498,
  436, 416,
  62, 148,
  64, 42,
  64, 148,
  62, 150,
  62, 42,
  64, 42,
  62, 150,
  62, 44,
  62, 42,
  64, 148,
  64, 42,
  64, 42,
  62, 150,
  62, 148,
  62, 44,
  62, 150,
  62, 44,
  62, 44,
  62, 42,
  64, 148,
  62, 148,
  64, 148,
  62, 148,
  64, 148,
  62, 150,
  62, 150,
  62, 148,
  62, 44,
  62, 44,
  62, 42,
  64, 42,
  64, 42,
  64, 42,
  62, 150,
  62, 44,
  62, 44,
  62, 148,
  62, 44,
  62, 44,
  62, 44,
  62, 148,
  64, 42,
  64, 148,
  62, 148,
  64, 42,
  64, 148,
  62, 150,
  62, 148,
  64, 0};
      
// Codigo de apagado de los aires acondicionados
int IRsignal_OFF[] = {
// ON, OFF (en 10's de microsegundos)
  442, 414,
  62, 148,
  62, 44,
  62, 148,
  62, 148,
  64, 42,
  62, 44,
  62, 148,
  62, 44,
  62, 44,
  62, 148,
  64, 42,
  64, 42,
  62, 148,
  62, 148,
  64, 42,
  62, 150,
  62, 42,
  64, 148,
  62, 148,
  62, 148,
  64, 146,
  64, 42,
  62, 150,
  62, 148,
  62, 150,
  62, 44,
  62, 42,
  64, 42,
  62, 42,
  64, 148,
  62, 42,
  64, 42,
  64, 148,
  62, 148,
  62, 148,
  64, 42,
  62, 44,
  62, 44,
  62, 42,
  64, 42,
  62, 44,
  62, 42,
  64, 42,
  64, 148,
  62, 148,
  62, 148,
  62, 148,
  64, 148,
  62, 494,
  438, 414,
  64, 148,
  62, 42,
  64, 148,
  62, 148,
  62, 42,
  64, 42,
  62, 148,
  64, 42,
  64, 42,
  62, 150,
  62, 42,
  64, 42,
  62, 148,
  64, 146,
  64, 42,
  64, 148,
  62, 42,
  64, 148,
  62, 148,
  62, 148,
  64, 146,
  64, 42,
  62, 148,
  64, 148,
  62, 148,
  64, 42,
  62, 44,
  62, 42,
  64, 42,
  62, 148,
  64, 42,
  62, 44,
  62, 150,
  62, 148,
  62, 148,
  62, 44,
  62, 42,
  64, 42,
  64, 42,
  62, 42,
  64, 42,
  62, 44,
  62, 44,
  62, 148,
  62, 148,
  64, 146,
  64, 148,
  62, 148,
  64, 0};

// Codigo de encendido/apagado del Swing
 int IRsignal_Swing[] = {
// ON, OFF (in 10's of microseconds)
  440, 414,
  64, 148,
  62, 44,
  62, 148,
  64, 148,
  62, 44,
  62, 44,
  62, 148,
  64, 42,
  62, 44,
  62, 150,
  62, 42,
  64, 42,
  64, 148,
  62, 148,
  64, 42,
  64, 148,
  62, 44,
  62, 150,
  62, 148,
  64, 42,
  62, 150,
  62, 42,
  64, 148,
  64, 148,
  62, 150,
  62, 42,
  64, 42,
  64, 148,
  62, 44,
  62, 150,
  62, 42,
  64, 42,
  64, 148,
  62, 148,
  64, 148,
  62, 44,
  62, 44,
  62, 42,
  64, 42,
  64, 42,
  64, 42,
  62, 44,
  62, 44,
  62, 148,
  64, 148,
  64, 148,
  62, 148,
  62, 150,
  62, 498,
  436, 416,
  62, 148,
  64, 42,
  64, 148,
  62, 148,
  64, 42,
  64, 42,
  64, 148,
  62, 42,
  64, 44,
  62, 148,
  62, 44,
  62, 44,
  62, 148,
  64, 148,
  62, 44,
  62, 150,
  62, 42,
  64, 148,
  62, 150,
  62, 42,
  64, 148,
  62, 44,
  62, 150,
  62, 148,
  64, 148,
  64, 42,
  62, 44,
  62, 148,
  64, 42,
  64, 148,
  62, 44,
  62, 44,
  62, 148,
  64, 148,
  62, 148,
  64, 42,
  64, 42,
  64, 42,
  62, 44,
  62, 44,
  62, 42,
  64, 42,
  64, 42,
  64, 148,
  62, 148,
  64, 148,
  62, 148,
  64, 148,
  62, 0};


void setup(void) {
  digitalWrite(IRledPin, LOW);   
  Serial.begin(9600); 
  Serial.flush();           
}

void loop() {
   String input = "";
   
     while (Serial.available() > 0)
     {
         input += (char) Serial.read(); 
         delay(5); 
     }
 
     if (input == "on")
     {
         Serial.println("Encendiendo AC");
         Enciende_AC();   //TODO: verificar los tiempos ya que se con dos llamadas 
         Enciende_AC();   //       funciona de forma erratica
         Enciende_AC();
     }
     else if (input == "off")
     {
         Serial.println("Apagando AC");
         Apaga_AC();
         Apaga_AC();
         Apaga_AC();
     }
     else if (input == "sw")
     {
         Serial.println("Swing");
         Swing_AC();
         Swing_AC();
         Swing_AC();
     }
}

//TODO: Hacer el Code refactoring  de las funciones 
void Apaga_AC(){
    for (int i = 0; i < NumIRsignals; i+=2) {         
      pulseIR(IRsignal_OFF[i]*10);              
      delayMicroseconds(IRsignal_OFF[i+1]*10); 
    }
}
void Enciende_AC(){
    
    for (int i = 0; i < NumIRsignals; i+=2) {        
      pulseIR(IRsignal_ON[i]*10);              
      delayMicroseconds(IRsignal_ON[i+1]*10); 
    } 
}

void Swing_AC(){
    
    for (int i = 0; i < NumIRsignals; i+=2) {        
      pulseIR(IRsignal_Swing[i]*10);              
      delayMicroseconds(IRsignal_ON[i+1]*10); 
    } 
}



// This function allows us to PWM the IR LED at about 38khz for the sensor
// Borrowed from Adafruit!

void pulseIR(long microsecs) {
  while (microsecs > 0) {
    // 38 kHz is about 13 microseconds high and 13 microseconds low
   digitalWrite(IRledPin, HIGH);  // this takes about 3 microseconds to happen
   delayMicroseconds(10);         // hang out for 10 microseconds, you can also change this to 9 if its not working
   digitalWrite(IRledPin, LOW);   // this also takes about 3 microseconds
   delayMicroseconds(10);         // hang out for 10 microseconds, you can also change this to 9 if its not working
   // so 26 microseconds altogether
   microsecs -= 26;
  }
}
