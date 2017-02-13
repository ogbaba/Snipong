#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

typedef struct {
  byte num;
  int x;
  int y;
  int width;
  int height;
} player;

typedef struct {
  int x;
  int y;
  int vx;
  int vy;
} bullet;

typedef struct {
  int x;
  int y;
  int width;
  int height;
} wall;

void setup() {
  gb.begin();
  gb.titleScreen(F("Snipong"));
}

void loop() {
  if(gb.update()){
    
  }
}
