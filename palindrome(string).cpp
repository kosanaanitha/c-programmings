#include <stdio.h>
int main()
{
    char s[20];
    int i, j, l, temp=0;
    printf("Enter string name ");
    scanf("%s", s);
    for(i=0; s[i]!='\0'; i++);
    l = i;
    for(i=0, j=l-1; i<j; i++, j--)
    {
        if(s[i] != s[j])
        {
            temp = 1;
            break;
        }
    }

    if(temp == 0)
        printf("It is a palindrome\n");
    else
        printf("It is not a palindrome");

    return 0;
}
