# Arduino-RFID-Shied
#How to interface RFID Reader with arduino
#https://www.controleverything.com/content/RFID-Reader?sku=ANI2CU_EM18_RFID
int count = 0;                                          // count = 0
char input[11];                                         // character array of size 12 
                                 
void setup()
{
   Serial.begin(9600);                                  // begin serial port with baud rate 9600bps
}
void loop()
{
   
   if(Serial.available())
   {
      count = 0;
      while(Serial.available() && count < 12)          // Read 12 characters and store them in input array
      {
         input[count] = Serial.read();
         count++;
         delay(5);
      }
      Serial.print(input);                             // Print RFID tag number 
      Serial.print("\n");
      if ( strcmp(input,"0A006FBE33E9") == 0)
      {
        Serial.print("Tag One");
        Serial.print("\n");
      }

            if ( strcmp(input,"0E004560173D") == 0)
      {
        Serial.print("Tag Two");
        Serial.print("\n");
      }

            if ( strcmp(input,"0A00706AF0E1") == 0)
      {
        Serial.print("Tag Three");
        Serial.print("\n");
      }

            if ( strcmp(input,"28018389B696") == 0)
      {
        Serial.print("Tag Four");
        Serial.print("\n");
      }

      
   }
}
