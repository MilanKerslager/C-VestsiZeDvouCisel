// Program vypíše větší ze dvou čísel
// - je využita vnořená podmínka a pomocná proměnná max

#include <stdio.h>

int main()
{
    // vypíšeme největší číslo
    int a = 4, b = 4;
    int max;
    if (a == b) {
        // čísla jsou si rovna
        max = a;
    }
    else {
        if (a > b) {
            // a je větší
            max = a;
        }
        else {
            // b je větší
            max = b;
        }
    }
    printf("nejvetsi je cislo %d", max);
}