#include <stdio.h>

int main() {
    int num, digits, n1, n2, n3, temp;
    
    printf("Please Enter a 3 digit number: ");
    scanf("%d", &temp);
    if(temp>=100 && temp<=999){
    num = temp;
    
    n1 = num % 10;
    num = num / 10;
    n2 = num % 10;
    num = num / 10;
    n3 = num % 10;
    num = num / 10;
    
    digits = (n1 * n1 * n1) + (n2 * n2 * n2) + (n3 * n3 * n3);
    
    if (digits == temp) {
        printf("It is an Armstrong number.\n");
    } else {
        printf("It is not an Armstrong number.\n");
    }
    }
    else{
        printf("Provide the input between 100 to 999");
    }

    return 0;
}

