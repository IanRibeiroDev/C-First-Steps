#include <stdio.h>
#include <stdbool.h>
#include "HelloWorld.h"

int main() {
    printf("This is a test.\n");
    printf("Will it work?\n");
    printf("%s", helloWorld());

    char name[] = "Ian";
    char age = 23;
    char size = 'M';
    float weight = 70.80;
    bool married = false;

    printf("My name is %s and I'm %d years old. My clothing size is %c and I weight %.2fKg.\n", name, age, size, weight);
    printf("\"I am currently married.\" The following statement is unfortunately %d", married);

    return 0;
}