#include <stdio.h>

int add(int x, int y) {
return (float)(x + y);
}

int main() {
    int a = 5;
    int b = 10;

    float res = add(a, b);
    printf("Result of %d + %d is %f.\n", a, b, res);

    return 0;
}