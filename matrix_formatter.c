#include <stdio.h>

int spacer(int);
int matrixDisplay(int*);

int main() {
    int k;
    printf("Enter a number: ");
    scanf("%d", &k);
    int s = spacer(k);
    printf("The space occupancy of the entered number: %d[", s);
    for(int i = 0; i < s; i++) {
        printf(" ");
    }
    printf("]\n");
    return 0;
}

int spacer(int value)
{
    int space=1, x=10, y=100;
    while(1) {
        if((value >= x && value < y) || (value <= -1*(x/10) || value > -1*(y/10) )) {
            break;
        }
        x *= 10;
        y *= 10;
        space += 1;
    }
    return space;
}