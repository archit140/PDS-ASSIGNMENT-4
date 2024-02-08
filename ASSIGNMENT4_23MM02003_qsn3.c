#include<stdio.h>
int main()
{
    int credit,current;
    float si;
    printf("Enter the credit score");
    scanf("%d",&credit);
    printf("Enter the current balance");
    scanf("%d",&current);
    if(credit<=600){
        printf("interest rate is 15\n");
        si=0.15*current;
        printf("Simple Interest is %f",si);


    }
    if(credit>600 && credit<=750){
        printf("interest rate is 12\n");
        si=0.12*current;
        printf("Simple Interest is %f",si);
    }
    if(credit>750){
        printf("interest rate is 10\n");
        si=0.10*current;
        printf("Simple Interest is %f ",si);
    }
    return 0;




}