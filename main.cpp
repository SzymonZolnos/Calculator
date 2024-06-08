#include <iostream>

void enterNumbers(int *number1, int *number2) {
    printf("Enter first number: ");
    scanf("%d", number1);
    printf("Enter second number: ");
    scanf("%d", number2);
}

int main() {
    int a,b;
    enterNumbers(&a,&b);
    return 0;
}
