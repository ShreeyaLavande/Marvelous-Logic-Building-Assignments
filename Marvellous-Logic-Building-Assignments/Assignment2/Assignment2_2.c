////////////////////////////////
//      Author : Shreeya Lavande
//     Program : Accept one number from user and print that number of * on screen
//        Date : 11/05/2025
///////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    
    //write updater
    while(iNo > 0)
    {
        printf("*");
        iNo--;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter the number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}


