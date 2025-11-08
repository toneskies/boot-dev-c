#include <stdio.h>

typedef enum
{
    ENTITY_PLAYER,
    ENTITY_ENEMY,
    ENTITY_ITEM
} EntityType;

typedef struct
{
    int x;
    int y;
} Position;

typedef union
{
    int health;
    int score_value;
} EntityData;

// Tagged Union
typedef struct
{
    int id;
    Position pos;
    EntityType type;
    EntityData data;
} Entity;

void print_entity_info(const Entity *e)
{
    printf("--- Entity ID %d ---\n", e->id);
    printf("Position: (%d, %d)\n", e->pos.x, e->pos.y);

    switch (e->type)
    {
    case ENTITY_PLAYER:
        printf("Type: Player\n");
        break;
    case ENTITY_ENEMY:
        printf("Type: Enemy\n");
        break;
    case ENTITY_ITEM:
        printf("Type: Item\n");
        break;

    default:
        printf("Unknown Type\n");
    }

    printf("---------------------\n");
}

int main()
{
    Entity player = {
        .id = 1,
        .pos = {10, 20},
        .type = ENTITY_PLAYER,
        .data = {.health = 100}};
    print_entity_info(&player);

    Entity sword = {
        .id = 2,
        .pos = {0, 1},
        .type = ENTITY_ITEM,
        .data = {.score_value = 30}};
    print_entity_info(&sword);

    Entity goblin = {
        .id = 3,
        .pos = {12, 20},
        .type = ENTITY_ENEMY,
        .data = {.health = 30}};
    print_entity_info(&goblin);

    return 0;
}