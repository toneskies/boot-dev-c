#include <stdio.h>
#include <string.h>

enum Status {
    PENDING = 10,
    PROCESSING,
    COMPLETE
};

struct Item {
    int id;
    char name[50];
    enum Status current_status;
};

union ProcessData {
    int item_id;
    float percentage;
};


int main() {

    enum Status item_status = PROCESSING;

    printf("--- Enum Example ---\n");
    printf("Item Status is: %d\n", item_status);

    switch(item_status) {
        case PENDING:
            printf("The item is being pending.\n");
            break;
        case PROCESSING: 
            printf("The item is being processed.\n");
            break;
        case COMPLETE:
            printf("The analysis is completed.\n");
            break;
        default:
            printf("Unknown status.\n");
    }

    struct Item my_product;
    my_product.id = 101;
    my_product.current_status = COMPLETE;
    strcpy(my_product.name, "Custom Widget");

    printf("--- Struct Example ---");
    printf("ID: %d\n", my_product.id);
    printf("Name: %s\n", my_product.name);
    printf("Status Code: %d\n", my_product.current_status);

    printf("Size of struct Item: %zu bytes\n", sizeof(struct Item));


    union ProcessData data;

    printf("--- Union Example ---\n");

    data.item_id = 456;
    printf("Current data viewed as ID: %lu\n", sizeof(data));

    printf("----------------------\n");

    data.percentage = 99.9f;
    printf("Current data viewed as a Percentage: %.1f\n", data.percentage);

    return 0;
}