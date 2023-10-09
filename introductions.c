#include "library.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//This is for testing purposes only. These functions should've absolutely returned Strings instead of printing everything on themselves, but I still don't know how to do that so oh well :)
void introducingMyself() {
    char name[] = "Ian";
    char age = 23;
    float height = 1.71;
    float weight = 70.80;
    bool married = false;

    printf("My name is %s and I'm %d years old. I'm %.2fm tall and weight %.2fKg.\n", name, age, height, weight);
    printf("Am I married? Well, the answer in binary is %d.\n", married);
}

void whatAboutYou() {
    char name[15];
    unsigned short age;
    float height;
    float weight;
    bool married;

    printf("What's your name?");
    fgets(name, 15, stdin);
    name[strlen(name) - 1] = '\0';

    printf("Your age?");
    scanf("%hu", &age);
    printf("Height?");
    scanf("%f", &height);
    printf("Weight?");
    scanf("%f", &weight);
    printf("Lastly, answer \"1\" for yes, or \"0\" for no, are you married?");
    scanf("%d", &married);

    printf("\nSo you're %s, %hu years old. Cool!\n", name, age);
    printf("You're %.2fm tall and weight %.2fKg. Looking good!\n", height, weight);

    if (married) {
        printf("You're also married!? Wow, you're doing great! :D");
    } else {
        printf("You're not married yet? Well, I'm sure you'll find that special someone in no time! ;)");
    }
}