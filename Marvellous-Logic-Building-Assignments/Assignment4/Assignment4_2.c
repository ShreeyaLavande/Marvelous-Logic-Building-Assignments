////////////////////////////////
//     Program Name : Assignment4_2.c
//     Description : Write a program which accept number from user and display its factors in decresing order.
//     Author : Shreeya Lavande        
//     Date : 18/05/2025
///////////////////////////////////

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }
    

}
int main()
{
    int iValue  = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}   