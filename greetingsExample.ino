#include <WebServer.h>

WebServer server(80);

const char* ssid = "put your wifi network here";
const char* password =  "put your wifi password";

String saluto = "how are you?";
             

// HTML & CSS contents which display on web server
String HTML = "<!DOCTYPE html><html><body><h1> "+ greeting +"My First Web Server with ESP32 - Station Mode</h1></body></html>";

void setup() {
 
  Serial.begin(115200);
 
  WiFi.begin(ssid, password);
 
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Connecting to WiFi..");
  }
  Serial.println("Connected to the WiFi network");
  Serial.println(WiFi.localIP());
  
  server.on("/", handle_root);

  server.begin();
 
}
 
void loop() {
  server.handleClient();
}

void handle_root() {
  server.send(200, "text/html", HTML);
}  
