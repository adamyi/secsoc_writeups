#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[100];
    char canary = '%';
    char flag[] = "<REDACTED>";
    input[20] = canary;
    
    printf("I will copy what you say. Enter a string! -> ");
    scanf("%s", input);
    if (canary != input[20]) {
        printf("ERROR! Your string is too long!\n");
        return EXIT_FAILURE;
    }
    strcpy(&input[21], flag);

    printf("You entered: %s\n", input);
    
    (void) flag;
    return EXIT_SUCCESS;
}
