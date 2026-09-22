#include<stdio.h>
#include<string.h>

void main()
{
	char str1[50] = "HelloWorld";
    char str2[] = "Helloworld";
    
    printf("Comparison: %d\n",strncmp(str1,str2,5));
}