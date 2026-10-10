#include <stdio.h>

void add_2_numbers() {
    int firstNumber, secondNumber, sum;
    
    printf("Enter two integers: ");
    // %d performs a read operation for integer values
    scanf("%d %d", &firstNumber, &secondNumber);

    // Calculate sum
    sum = firstNumber + secondNumber;      
    
    printf("%d + %d = %d\n", firstNumber, secondNumber, sum);
    return 0;
}

