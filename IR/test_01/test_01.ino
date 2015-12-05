#include <IRremote.h>

const char cRECV_PIN=11;
IRrecv monRecepteurIR(cRECV_PIN);
decode_results sMsg;

void setup() {
  Serial.begin(9600);
  monRecepteurIR.enableIRIn();
}

void loop() {
  if (monRecepteurIR.decode(&sMsg))  {
    Serial.println(sMsg.value,HEX);
    delay(500);
    monRecepteurIR.resume();}
}
