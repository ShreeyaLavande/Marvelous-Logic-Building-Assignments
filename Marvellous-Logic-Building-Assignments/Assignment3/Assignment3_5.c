////////////////////////////////
//      Author : Shreeya Lavande
//     Program : Accept one character from user and check weather that character is vovel or not 
//        Date : 11/05/2025
///////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL ChkVowel(char CValue)
{
    if (CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'U' ||
       CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U')

    {
        return TRUE;
    }
    else
    {
       return FALSE;   
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);
    if (bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not a Vowel\n");
    }

    return 0;

}

