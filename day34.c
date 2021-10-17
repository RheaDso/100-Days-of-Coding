/*C program to calculate
length of string using pointer*/

#include<stdio.h>
int main()
{
    char s[100];
    int l, a;
    printf("Enter a string:\t");
    scanf("%s", &s);
    l = str(s);
    printf("\nThe length of the string %s is %d.",s,l);
    a=&s[0];
    return 0;
}
int str(char*a)
{
    int i=0;
    while (*a!='\0')
    {
        i++;
        a++;
    }
    return i;
    
}
