#include <stdio.h>

int main() {

    struct Coordinate {
        int x;
        int y;
        int z;
    };

    struct Coordinate coords;
    coords.x = 10, coords.y = 35, coords.z = 2;
    printf("(%d, %d, %d)\n", coords.x, coords.y, coords.z);

    struct City {
        char *name;
        int lat;
        int lon;
    };

    struct City c = {
        .name = "San Francisco",
        .lat = 37,
        .lon = -122
    };

    printf("%s, %d, %d\n", c.name, c.lat, c.lon);




    return 0;
}