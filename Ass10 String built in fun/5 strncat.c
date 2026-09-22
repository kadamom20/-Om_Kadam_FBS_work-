#include<stdio.h>
#include<string.h>

void main()
{
	char str1[30] = "Firstbit";
    char str2[] = "Solutions";
   
    strncat(str1,str2,2);
   	
    printf("String=%s",str1);
}