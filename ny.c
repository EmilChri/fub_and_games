#include <stdio.h>
#include <string.h>

int main(void)
{
    char test[10];
    printf("noget");
    scanf(" %s",test);
    char operator = test[0];
    char* operand = "_";
    strcpy(operand, test + 1);
    printf("%c %s",operator,operand);
}