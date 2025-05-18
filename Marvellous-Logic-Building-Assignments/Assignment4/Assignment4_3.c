////////////////////////////////
//     Program Name : Assignment4_3.c
//     Description : Write a program which accept number from user and display all its  non factors. 
//     Author : Shreeya Lavande        
//     Date : 18/05/2025
///////////////////////////////////

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\n",iCnt);
        }
    }
    

}
int main()
{
    int iValue  = 0; int iRet = 0;


    printf("Enter Number : ");
    scanf("%d",&iValue);

    printf("Factors are : \n");
    NonFact(iValue);

    return 0;
}   