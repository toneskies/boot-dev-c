#include <stdio.h>
#include "exercise.h"

int main() {
    printf("Entering main.\n");
    char str1[100] = "This is a long ass string lol just to test things.";
    char *str2 = "";

    concat_strings(str1, str2);

    printf("str1: %s\n", str1);

    return 0;
}