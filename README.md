# ESP32-data-to-local-webpage
Just a small example on how you pass strings to a local webpage  hosted on ESP32

Based on official Webserver library from Arduino core for Esp
https://github.com/espressif/arduino-esp32/tree/master/libraries/WebServer

You can put the webpage string in flash to save RAM space with: `String PROGMEM webpage = "my html here"+myVariable+"more html here";` even if it has some variable stirngs that are changing. Or keep it as a `String webpage = "....";` variable that will remain in RAM. To create the stirng I suggest to compress the HTML using this tool.
https://www.textfixer.com/html/compress-html-compression.php
