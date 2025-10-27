#include <stdio.h>
#include "exercise.h"

int main() {
    printf("Entering main.\n");
    char *str1 = "Hey";
    char *str2 = " Man.";

    concat_strings(str1, str2);

    return 0;
}