#include <stdio.h>

typedef enum {
    BIG = 123438457823409582,
    BIGGER
} BigNumbers;



int main() {

    printf("Hello world.\n");
    BigNumbers number = BIG;
    printf("%lu\n", number);


    return 0;
}