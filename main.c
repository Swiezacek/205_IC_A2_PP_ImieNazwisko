#include <stdio.h>

int main() {
    int i = 1;
    float f = 1.5;
    double d = 2.5;
    char c = 'c';
    printf("Wartosci moich zmiennych i = %i, f = %.2f, d = %.2lf, c = %c\n", i, f, d, c);
    scanf("%i %f %lf %c", &i, &f, &d, &c);
    printf("Wartosci moich zmiennych i = %i, f = %.2f, d = %.2lf, c = %c\n", i, f, d, c);
    return 0;
}
