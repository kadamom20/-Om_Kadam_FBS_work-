
#include<stdio.h>
void checkCase(char ch);
void main()
{
    char ch;
	printf("Enter a Character:");
	scanf("%c",&ch);
    checkCase(ch);	 	
}

void checkCase(char ch)
{
	
	if(ch>='A'&&ch<='Z')
	  printf("The given character is Uppercase");
	else
	{
		if(ch>='a'&&ch<='z')
		 printf("The given character is Lowercase");	
    	else
		 printf("It is not alphabet");
	}
}