#include<stdio.h>
#include<string.h>

void main()
{
	char str1[]="Firstbit";
    
    char*result=strstr(str1,"i");   

    if(result!=NULL)
        printf("Found: %s",result);
    else
        printf("Not found");
}