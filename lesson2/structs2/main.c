#include "coord.h"
#include <stdio.h>

struct Coordinate new_coord(int x, int y, int z) {
    coordinate coord = {.x = x, .y = y, .z = z};
    return coord;
}

struct Coordinate scaled_coordinate(struct Coordinate coord, int factor) {
    coordinate scaled_coord = {
        .x = coord.x * factor,
        .y = coord.y * factor,
        .z = coord.z * factor
    };
    return scaled_coord;
}

int main() {
    coordinate c = new_coord(1, 2, 3);
    coordinate scaled = scaled_coordinate(c, 2);

    printf("original coord: (%d, %d, %d)\n", c.x, c.y, c.z);
    printf("scaled coord: (%d, %d, %d)\n", scaled.x, scaled.y, scaled.z);

    return 0;
}