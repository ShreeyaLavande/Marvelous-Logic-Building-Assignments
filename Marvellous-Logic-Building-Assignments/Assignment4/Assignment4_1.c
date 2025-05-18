////////////////////////////////
//      Program Name : Assignment4_1.c
//      Program : Write a program which accept number from user and display its multiplicatiomof factors.
//      Author : Shreeya Lavande
//      Date : 18/05/2025
///////////////////////////////////

#include<stdio.h>

int MultFact(int iNo)
{   int iCnt = 0;
    int iDigit = 0;
    int iMult = 1;

    for (iCnt = 1; iCnt <= (iNo/2);iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
    

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d \n",iRet);

    return 0;
}