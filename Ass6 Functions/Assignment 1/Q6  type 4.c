#include<stdio.h>
int checkCase(char ch);
void main()
{
    int result;
	char ch;
	printf("Enter a Character:");
	scanf("%c",&ch);
    result=checkCase(ch);
	if(result == 1)
        printf("The given character is Uppercase");
    else if(result == 2)
        printf("The given character is Lowercase");
    else
        printf("It is not alphabet");	 	
}

int checkCase(char ch)
{
	
	if(ch>='A'&&ch<='Z')
	  return 1;
	else
	{
		if(ch>='a'&&ch<='z')
		 return 2;	
    	else
		 return 0;
	}
}