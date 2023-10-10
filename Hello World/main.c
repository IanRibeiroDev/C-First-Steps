#include <stdio.h>
#include "library.h"

int main() {
    printf("This is a test.\n");
    printf("Will it work?\n\n");
    printf("%s", helloWorld());
    introducingMyself();
    printf("\nWhat about you?\n");
    whatAboutYou();
    return 0;
}