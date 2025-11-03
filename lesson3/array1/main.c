#include <stdio.h>

typedef struct Coordinate {
    int x;
    int y;
    int z;
} coordinate_t;

int main() {

    coordinate_t points[3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    coordinate_t *ptr = points;
    
    for (int i = 0; i < 3; i++) {
      printf("ptr[%d].x = %d, ptr[%d].y = %d, ptr[%d].z = %d\n", i, (ptr + i)->x, i, (ptr + i)->y, i, (ptr + i)->z);
    }


    return 0;
}