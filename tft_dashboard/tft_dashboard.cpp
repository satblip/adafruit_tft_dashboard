#include <Arduino.h>

#include <Adafruit_GFX_AS.h>
#include <Adafruit_ILI9341_8bit_AS.h>

#define LCD_CS A3 // Chip Select goes to Analog 3
#define LCD_CD A2 // Command/Data goes to Analog 2
#define LCD_WR A1 // LCD Write goes to Analog 1
#define LCD_RD A0 // LCD Read goes to Analog 0
#define LCD_RESET A4 // Can alternately just connect to Arduino's reset pin

#define BLACK   0x0000   // 0xFFFF
#define BLUE    0x001F    // 0xFFE0
#define RED     0xF800    // 0x07FF
#define GREEN   0x07E0  // 0xF81F
#define CYAN    0x07FF   // 0xF800
#define MAGENTA 0xF81F // 0x07E0
#define YELLOW  0xFFE0  // 0x001F
#define WHITE   0xFFFF   // 0x0000

#define TITLE_OFFSET   4

Adafruit_ILI9341_8bit_AS tft(LCD_CS, LCD_CD, LCD_WR, LCD_RD, LCD_RESET);

void drawText(int16_t x, int16_t y, int16_t color, int16_t size, String text) {
  tft.setCursor(x, y);
  tft.setTextColor(color);
  tft.setTextSize(size);
  tft.print(text);
}

void drawSymbols(int16_t w, int16_t h) {
  drawText(w - 50, h, BLUE, 4, "%");
  drawText(w - 55, h + 35, YELLOW, 4, (String)(char)9);
  drawText(w - 35, h + 50, YELLOW, 4, "C");
}

void drawBoard() {
  int           x1, y1, x2, y2,
                w = tft.width(),
                h = tft.height();

  x1 = w / 2;
  y1 = 0;
  x2 = w / 2;
  y2 = h;
  tft.drawLine(x1, y1, x2, y2, WHITE);

  x1 = 0;
  y1 = h / 2;
  x2 = w;
  y2 = h / 2;
  tft.drawLine(x1, y1, x2, y2, WHITE);

  // Bedroom
  drawText(0, 0, WHITE, 2, "Bedroom");
  drawSymbols((w / 2), (h / 8));

  // Office
  drawText((w / 2) + TITLE_OFFSET, 0, WHITE, 2, "Office");
  drawSymbols(w, (h / 8));

  // Sewing Room
  drawText(TITLE_OFFSET, (h / 2) + TITLE_OFFSET, WHITE, 2, "Sewing Room");
  drawSymbols((w / 2), (h / 2) + (h / 8));

  // Workshop
  drawText((w / 2) + TITLE_OFFSET, (h / 2) + TITLE_OFFSET, WHITE, 2, "Workshop");
  drawSymbols(w, (h / 2) + (h / 8));
}

void setup() {
  Serial.begin(9600);
  Serial.println("ILI9341 Test!");

  tft.begin();
  tft.setRotation(3);
  tft.fillScreen(BLACK);
  drawBoard();
}


void loop(void) {

  //testText();
  delay(1000);
}
