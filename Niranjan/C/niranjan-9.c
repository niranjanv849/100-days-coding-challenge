// Check whether the given alphabet is a vowel or a consonant using switch

 
#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
     
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        switch(ch)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("Vowel");
                break;
            default : 
                printf("Consonant");
                break;        
        }
    }
    else
    {
        printf("Not an alphabet");
    }
 
    return 0;
}