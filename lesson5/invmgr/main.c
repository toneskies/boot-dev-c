#include <stdio.h>

typedef enum {
    PER_UNIT,
    PER_WEIGHT,
    PER_CASE
} PricingType;

typedef union {
    float unit_price;
    float weight_kg;
    int case_qty;
} PricingData;

typedef struct {
    int id;
    char name[50];
    PricingType type;
    PricingData pricing;
} Item;

float calculate_item_value(const Item *item, float base_price) {
    switch (item->type) {
        case PER_UNIT:
            return item->pricing.unit_price * base_price;;
        case PER_WEIGHT:
            return item->pricing.weight_kg * base_price;
        case PER_CASE:
            return item->pricing.case_qty * base_price;
        default:
            printf("Error: Unknown Pricing Type for item %s\n", item->name);
    }
}

Item create_item(int id, const char* name, PricingType type, float value) {
    Item new_item;

    new_item.id = id;
    strncpy(new_item.name, name, 49);
    new_item.type = type;

    // TODO: mutually exclusive union based on type
    // TODO: return fully initialized struct

    return new_item;
}


int main() {

    const float BULK_POWDER_PRICE_PER_KG = 8.50f;
    const float SINGLE_GADGET_PRICE = 49.99f;
    const float BULK_WIDGET_CASE_PRICE = 200.00f;

    Item inventory[3];

    


    return 0;
}