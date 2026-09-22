#include<stdio.h>
#include<string.h>

void main()
{
	char str1[50] = "HelloWorld";
    char str2[] = "Apply";
    
    printf("Comparison: %d\n",strcmp(str1,str2));
}