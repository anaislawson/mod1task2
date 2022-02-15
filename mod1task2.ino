#include <TFT_eSPI.h> // Graphics and font library for ILI9341 driver chip
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h

uint16_t blue = tft.color565(127, 222, 255);
uint16_t medblue = tft.color565(10, 194, 255);
uint16_t darkblue = tft.color565(0, 61, 82);

void setup() {
  tft.init(); 
  tft.setRotation(1);
  tft.fillScreen(tft.color565(127, 222, 255)); //early blue
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
//  targetTime = millis();
  //early morning
  //sun goes up
  //tft.fillCircle(100, 164, 60, TFT_YELLOW);
  int sunrise = random(200);
  while(sunrise > 300){
    sunrise = random(200);
  }
  int gmx = random(100);
  int gmy = random(100);
  for(int i=1; i<220; i++) {
    delay(100);
    tft.fillCircle(sunrise, 164-i, 60, blue);
    tft.fillCircle(sunrise, 164-i-1, 60, TFT_YELLOW);
    tft.setCursor(gmx, gmy, 2);
    // Set the font colour to be white, set text size multiplier to 1
    tft.setTextColor(TFT_WHITE,TFT_BLACK);  tft.setTextSize(1);
    // We can now plot text on screen using the "print" class
    tft.println("Good Morning Anais!");
  }
  

  //midday
  tft.fillScreen(tft.color565(10, 194, 255));

 
  int sunset = random(200);
  while(sunset > 300){
    sunset = random(200);
  }
  int ax = random(100);
  int ay = random(100);
  for(int i=1; i<220; i++) {
    delay(100);
    tft.fillCircle(sunset, 4+i-1, 60, medblue);
    tft.fillCircle(sunset, 4+i, 60, TFT_YELLOW);
    tft.setCursor(ax, ay, 2);
    // Set the font colour to be white, set text size multiplier to 1
    tft.setTextColor(TFT_WHITE,TFT_BLACK);  tft.setTextSize(1);
    // We can now plot text on screen using the "print" class
    tft.println("Good Afternoon Anais!");
  }

  //sun goes down
  //night
  tft.fillScreen(tft.color565(0, 61, 82));
  

  int moonrise = random(200);
  while(moonrise > 300){
    moonrise = random(200);
  }
  int gnx = random(100);
  int gny = random(100);
  for(int i=1; i<180; i++) {
    delay(100);
    tft.fillCircle(moonrise, 164-i, 60, darkblue);
    tft.fillCircle(moonrise, 164-i-1, 60, TFT_WHITE);
    tft.setCursor(gnx, gny, 2);
    // Set the font colour to be white, set text size multiplier to 1
    tft.setTextColor(TFT_WHITE,TFT_BLACK);  tft.setTextSize(1);
    tft.println("Good Night Anais!");
  }

  tft.fillScreen(tft.color565(218, 191, 255));
  for(int i=1; i<100; i++){
    
    delay(100);
//    tft.setCursor(1+i-1, 94, 2);
//    // Set the font colour to be white, set text size multiplier to 1
//    tft.setTextColor(tft.color565(218, 191, 255));  tft.setTextSize(3);
//    tft.println("8 hours later");
    int zx = random(200);
    int zy = random(200);
    tft.setCursor(zx, zy, 2);
    // Set the font colour to be white, set text size multiplier to 1
    tft.setTextColor(TFT_BLACK);  tft.setTextSize(3);
    tft.println("Z");
    int ix = random(200);
    int iy = random(200);
    tft.setCursor(ix, iy, 2);
    // Set the font colour to be white, set text size multiplier to 1
    tft.setTextColor(TFT_BLUE);  tft.setTextSize(2);
    tft.print(i);
    tft.println(" sheep");
  }
  //moon and say good night Anaïs
  tft.fillScreen(tft.color565(127, 222, 255));
//  tft.drawCircle(80, 64, 60, TFT_YELLOW);
//  tft.fillCircle(80, 64, 60, TFT_YELLOW);
}
