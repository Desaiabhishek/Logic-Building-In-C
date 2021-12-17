#include<stdio.h>
#include<conio.h>

#define True 1
#define False 2

int ChkVowel(Char Ch)
{
    if(Ch == 'a' || Ch == 'A' || Ch == 'e' || Ch == 'E' || Ch == 'i' || Ch == 'I' || Ch == 'o' || Ch == 'O' || Ch == 'u' || Ch == 'U')
    {
       return 1;
    }
    else
    {
        return 2;
    }
}
int main();
{
    char cValue = '0';
    int Ret = 0;

    printf("\n Enter A Character =>");
    scanf("%d",&cValue);

    Ret = ChkVowel(cValue);

    if(Ret == True)
    {
        printf("\n It Is Vowel");
    }
    else
    {
        printf("\n It is Not Vowel");
    }
    getch();

}
