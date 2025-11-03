#include <stdio.h>
#include <string.h>

int main() {

    char first[50] = "Hello";
    char* second = " World.";
    strcat(first, second);
    printf("%s\n", first);

    char str_res[50] = *second;
    printf("%s\n", str_res);

    return 0;
}