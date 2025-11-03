#include <stdio.h>

char *get_temperature_status(int temp) {
    if (temp < 70) {
        return "too cold";
    } else if (temp > 90) {
        return "too hot";
    } else {
        return "just right";
    }
}


int main() {

    int temperature = 50;
    char *res = get_temperature_status(temperature);
    printf("%s\n", res);

    return 0;
}