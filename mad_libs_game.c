#include <stdio.h>
#include <string.h>
int main()
{
    char name[50] = "";
    char sister[50] = "";
    char food[50] = "";
    char state[50] = "";
    char place[50] = "";

    printf("Enter your name:\n");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your sister name:\n");
    fgets(sister, sizeof(sister), stdin);
    sister[strlen(sister) - 1] = '\0';

    printf("Enter the food you ate:\n");
    fgets(food, sizeof(food), stdin);
    food[strlen(food) - 1] = '\0';

    printf("Enter the state you went to:\n");
    fgets(state, sizeof(state), stdin);
    state[strlen(state) - 1] = '\0';

    printf("Enter the place you visited:\n");
    fgets(place, sizeof(place), stdin);
    place[strlen(place) - 1] = '\0';

    printf("Under %s starlit sky, %s and %s stood hand in hand,", state, name, sister);
    printf("Waiting for %s majestic light show to begin.", place);
    printf("They savored warm %s, spices blending in the night,", food);
    printf("As ancient golden walls awoke to tell their grand, forgotten tale.");

    return 0;
}