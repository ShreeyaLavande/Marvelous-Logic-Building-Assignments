////////////////////////////////
//     Program Name : Assignment4_4.c
//     Description : Write a program which accept number from user and return summation of all its  non factors. 
//     Author : Shreeya Lavande        
//     Date : 18/05/2025
///////////////////////////////////

#include<stdio.h>

int  SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
    
}
int main()
{
    int iValue  = 0; int iRet = 0;


    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n",iRet);
   

    return 0;
}   