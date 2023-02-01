#include <stdio.h>

int spacer(int);
int matrixDisplay(int*);

int main() {
    return 0;
}

int spacer(int value)
{
    int space=0, x=1, y=10;
    while(value >= x && value < y) {
        x *= 10;
        y *= 10;
        space++;
    }
    return space;
}