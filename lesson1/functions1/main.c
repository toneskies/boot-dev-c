#include <stdio.h>

int add(int x, int y) {
return x + y;
}

int main() {
    int a = 5;
    int b = 10;
    int c = 500;

    int res = add(a, b);
    printf("Result of %d + %d is %d.\n", a, b, res);

    return 0;
}