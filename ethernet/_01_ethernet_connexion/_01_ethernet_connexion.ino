#include <SPI.h>
#include <Ethernet.h>
byte mac[] = { 0x90, 0xa2, 0xda, 0x00, 0x1a, 0x71 };
IPAddress ipLocal(192,168,1,201);
EthernetServer MonServeurHTTP(80);

void setup() {
  Serial.begin(115200);
  Ethernet.begin(mac, ipLocal);
  MonServeurHTTP.begin();
  delay(1000);
}

void loop() {
  EthernetClient client=MonServeurHTTP.available();
  if (client) {
    Serial.println("----");
    Serial.print("Présence client sur IP serveur ");
    Serial.println(Ethernet.localIP());
   }
}

