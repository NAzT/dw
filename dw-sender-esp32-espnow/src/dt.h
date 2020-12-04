#include <Arduino.h>
uint8_t macAddressCharBuffer[20];
struct Color
{
    uint8_t r;
    uint8_t g;
    uint8_t b;
};

typedef struct __attribute((__packed__))
{
    Color pixels[1];
} CMMC_PIXELS;
