//Given a number, calculate the sum of its digits
#include <stdio.h>

int sumOfDigits(int num) {
    if (num == 0) // Base case
        return 0;
    else
        return (num % 10) + sumOfDigits(num / 10); // Extract last digit 
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int sum = sumOfDigits(num);
    
    printf("Sum of digits of %d is %d\n", num, sum);
    
    return 0;
}
