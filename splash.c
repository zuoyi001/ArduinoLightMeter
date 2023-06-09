#include <avr/pgmspace.h>

const unsigned char splash []PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1C, 0x18, 0x00, 0x80, 0x80,
0xC0, 0xC0, 0xC7, 0xC7, 0xC7, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x18, 0x1C, 0x18, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x00, 0xE0, 0xF8, 0xFC, 0xFE,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
0xFC, 0xF8, 0xE0, 0x00, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0x00, 0x00, 0x80, 0xE0, 0x60, 0x30, 0x30, 0x30, 0x30,
0x10, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0x00, 0x30, 0x30, 0x30,
0xF0, 0xF0, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00,
0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00,
0x00, 0x7F, 0x7F, 0x60, 0x60, 0x60, 0x60, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x0F, 0x3F, 0x70,
0x60, 0x60, 0x66, 0x7E, 0x7E, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x06, 0x06, 0x06, 0x06, 0x7F, 0x7F,
0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x06, 0x07, 0x06, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x06, 0x07, 0x06, 0x00,
0xC0, 0xF8, 0x18, 0xF8, 0xC0, 0x00, 0xC0, 0xF8, 0x18, 0xF8, 0xE0, 0x00, 0xF8, 0xF8, 0x18, 0x18,
0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0x00, 0xF8, 0xF8, 0x18, 0x18,
0x18, 0x18, 0x00, 0x00, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x67, 0xE7,
0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0x67, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x00, 0x03, 0x3F, 0x3C, 0x1F, 0x01, 0x00, 0x3F, 0x3F, 0x00,
0x3F, 0x3F, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00,
0x3F, 0x3F, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 0x3F, 0x3F, 0x03, 0x03, 0x07, 0x3F, 0x38, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x0E, 0x0E, 0x3E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x3E, 0x0E, 0x0E, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

