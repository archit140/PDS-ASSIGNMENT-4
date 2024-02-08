#include<stdio.h>
int main()
{
    int age;
    float ticket=40;
    printf("Enter the age");
    scanf("%d",&age);
    if(age<5){
        printf("Charge to enter theme park fees is: 0");
    }
    if(age>=5 && age<=12){
        printf("Charge to enter theme park fees is: 20");

    }
    if(age>=13 && age<=59){
        printf("Charge to enter theme park fees is 40");
    }
    if (age>=60){
        printf("Charge to enter theme park is %d",0.8*ticket);

    }
    return 0;
}