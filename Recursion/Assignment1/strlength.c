//Given a string, calculate the length of the string.
#include<stdio.h>

int stringLength(char *str) {
    if (*str == '\0') // Base case: if current character is '\0', return 0
        return 0;
    return 1 + stringLength(str + 1); // Recursive case: add 1 and move to next character
}

int main() {
    char str[100];
    printf("Enter the string:");
    scanf("%s",str);
    printf("Length of the string: %d\n", stringLength(str));
    return 0;
}
