#include <stdio.h>
#include "../include/gb/gb.h"
#include "../include/gb/drawing.h"

void main()
{
    UBYTE key;
    UBYTE x;
    UBYTE y;
    UBYTE prevx;
    UBYTE prevy;
    UBYTE clr;
    UBYTE radius;

    x = 40;
    y = 40;
    prevx = x;
    prevy = y;
    clr = 1;
    radius = 10;
    color(BLACK, WHITE, SOLID);
    circle(x, y, radius, M_FILL);

    while (1)
    {
        prevx = x;
        prevy = y;

        waitpad(0xFF);
        key = joypad();
        waitpadup();

        delay(100);

        if (key & J_RIGHT)
        {
            x = x + radius * 2;
        }
        if (key & J_LEFT)
        {
            x = x - radius * 2;
        }
        if (key & J_DOWN)
        {
            y = y + radius * 2;
        }
        if (key & J_UP)
        {
            y = y - radius * 2;
        }

        color(WHITE, WHITE, SOLID);
        circle(prevx, prevy, radius, M_FILL);

        color(BLACK, WHITE, SOLID);
        circle(x, y, radius, M_FILL);
    }
}