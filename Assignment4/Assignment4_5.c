/////////////////////////////////////////////
//     Program Name : Assignment4_5.c
//     Description : Write a program which accept number from user and return difference betwen summation of all its factors &  non factors. 
//     Author : Shreeya Lavande        
//     Date : 18/05/2025
//////////////////////////////////////////////////////

#include<stdio.h>

int  FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    return iSumFact - iSumNonFact;
    
}
int main()
{
    int iValue  = 0; int iRet = 0;


    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d\n",iRet);
   

    return 0;
}   