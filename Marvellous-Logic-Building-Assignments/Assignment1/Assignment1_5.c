////////////////////////////////
//      Author : Shreeya Lavande
//     Program : Accept one number from user and print that number of * on screen
//        Date : 11/05/2025
///////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*");
    }
    
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}