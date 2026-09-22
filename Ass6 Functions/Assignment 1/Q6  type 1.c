#include<stdio.h>
void checkCase();
void main()
{
  checkCase();		
}

void checkCase()
{
	char ch;
	printf("Enter a Character:");
	scanf("%c",&ch);
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