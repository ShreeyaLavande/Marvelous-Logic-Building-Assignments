////////////////////////////////
//      Author : Shreeya Lavande
//     Program : Accept one number from user and print factors 
//        Date : 11/05/2025
///////////////////////////////////

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    //write updater
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    printf("\n");

    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i) == 0)
        {
            printf(" %d ",i);

        }
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;

}
