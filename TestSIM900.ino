boolean FLAG = true;

//void setup()
//{
//    Serial.begin(115200);
//    Serial1.begin(115200);
//    TcpInit();
//}


void callPhone(String num){
   Serial1.println("ATE1");
    delay(500);
    Serial1.println("AT+COLP=1");
    delay(500);
    Serial1.println("ATD"+num+";");
    delay(500);
}
void TcpInit(){
  delay(500);
  Serial1.println("AT+CGCLASS=\"B\"");
  delay(500);
    Serial1.println("AT+CGDCONT=1,\"IP\",\"CMNET\"");
  delay(500);
    Serial1.println("AT+CGATT=1");
  delay(500);
    Serial1.println("AT+CIPCSGP=1,\"CMNET\"");
  delay(500);
   Serial1.println("AT+CLPORT=\"TCP\",\"2000\"");
  delay(500);
  Serial1.println("AT+CIPSTART=\"TCP\",\"202.105.21.213\",\"28736\"");
}
void makeTcp(int msg){
  
  delay(1000);
  Serial1.println("AT+CIPSEND");
  delay(500);
  Serial1.print("B:");
  delay(20);
  Serial1.println(msg);
  delay(500);
  Serial1.write(26);
  delay(3000);
 // Serial.println("send status: "+comdata);
}

