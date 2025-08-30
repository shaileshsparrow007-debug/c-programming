#include <stdio.h>
#include <stdlib.h>

int main() {
    char octal[20];
    int integer;
    printf("Enter an octal number: ");
    scanf("%s", octal);
    integer = strtol(octal, NULL, 8);
    printf("The integer value of octal number %s is: %d\n", octal, integer);

    return 0;
}
