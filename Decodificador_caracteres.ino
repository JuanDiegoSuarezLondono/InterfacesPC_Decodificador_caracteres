int val;
int i=0;
void setup() {

Serial.begin(9600);
}

void loop() {
 
val=Serial.read();
if(i==0)
{
i=1;
Serial.print("   Ingresado   ");
Serial.print("Decimal   ");
Serial.print("Hexadec.   ");
Serial.print("Octal   ");
Serial.println("Binario");
}
if(val != -1)
{
 i=1;
 Serial.print("       ");
 Serial.print(char(val));
 Serial.print("         ");
 Serial.print(val,DEC);
 Serial.print("        ");
 Serial.print(val,HEX);
 Serial.print("       ");
 Serial.print(val,OCT);
 Serial.print("    ");
 Serial.println(val,BIN);
 
}
  
}
