//strspn

#include<stdio.h>
#include<string.h>
void main()
{
    int result;
    char str1[100],str2[100];
    printf("\n Enter the first string: ");
    gets(str1);
    printf("\n Enter the second string: ");
    gets(str2);

    result = strspn(str1,str2);
    printf("\n The position of first character in str2 not match in str1 is %d",result+1);
}
