#include <stdio.h>

int main() {
    int num1, num2, oper, ch;
    
    printf("\nEnter num1 and num2: ");
    scanf("%d %d", &num1, &num2);
    
    printf("\n1: add");
    printf("\n2: Subtraction");
    printf("\n3: Multiplication");
    printf("\n4: Division");

    printf("\nEnter the choice: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1: 
            oper = num1 + num2;
            printf("\nAddition is %d\n", oper);
            break;
        case 2: 
            oper = num1 - num2;
            printf("\nSubtraction is %d\n", oper);
            break;
        case 3: 
            oper = num1 * num2;
            printf("\nMultiplication is %d\n", oper);
            break;
        case 4: 
            if (num2 != 0) {
                oper = num1 / num2;
                printf("\nDivision is %d\n", oper);
            } else {
                printf("\nDivision by zero error!\n");
            }
            break;
        default:
            printf("Enter a valid choice\n");
            break;
    }
    return 0;
}
