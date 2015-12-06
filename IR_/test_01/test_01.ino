#include <IRremote.h>

const char cRECV_PIN=11; // pin pour data de la cellule
IRrecv monRecepteurIR(cRECV_PIN);
decode_results sMsg; // récupérer les données

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
