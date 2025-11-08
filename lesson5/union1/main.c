#include <stdio.h>

// define union
union Data {
    int i;
    float f;
    char str[20];   // 20 bytes
};


int main() {
    printf("Union Practice\n");
    printf("--------------\n");
    union Data data;

    data.i = 10;
    printf("data.i: %d\n", data.i);

    data.f = 3.14f;
    printf("data.f: %f\n", data.f);

    // the value of i is garbage because 'f' took over the memory
    // you cannot acces "i" anymore...

    printf("Size of Data: %zu\n", sizeof(data));


    return 0;
}