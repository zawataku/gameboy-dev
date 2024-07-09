#include <stdio.h>
#include "../include/gb/gb.h"
#include "../include/gb/drawing.h"

void main()
{
    UBYTE key;
    UBYTE x1;
    UBYTE y1;
    UBYTE x2;
    UBYTE y2;

    x1 = 50;
    y1 = 50;
    color(LTGREY, WHITE, SOLID);
    circle(x1, y1, 20, M_FILL);

    x1 = 0;
    y1 = 20;
    x2 = 159;
    y2 = 20;
    color(DKGREY, WHITE, SOLID);
    line(x1, y1, x2, y2);

    x1 = 80;
    y1 = 80;
    x2 = 140;
    y2 = 100;
    color(BLACK, DKGREY, SOLID);
    box(x1, y1, x2, y2, M_FILL);
}