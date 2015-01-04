#include "application.h"
#include "Wtv020sd16p/Wtv020sd16p.h"

#define WTV020_RESET_PIN D2  // The pin number of the reset pin.
#define WTV020_CLOCK_PIN D3  // The pin number of the clock pin.
#define WTV020_DATA_PIN D4  // The pin number of the data pin.
#define WTV020_BUSY_PIN D5  // The pin number of the busy pin.

Wtv020sd16p wtv020sd16p(WTV020_RESET_PIN, WTV020_CLOCK_PIN, WTV020_DATA_PIN, WTV020_BUSY_PIN);

void setup() {
  
    wtv020sd16p.reset(); 
    delay(1000);
    wtv020sd16p.asyncPlayVoice(0); // play asynchronous (e.g. in the background) 0000.ad4 on SD card    
}

void loop() {
	wtv020sd16p.playVoice(1); // synchronously (e.g. in the foreground) play 0001.ad4 on SD card    
	delay(2000); // wait 2 seconds
}