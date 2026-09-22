#include<stdio.h>
void checkCase();
void main()
{
    int result;
    result=checkCase();	
    
	if(result == 1)
        printf("The given character is Uppercase");
    else if(result == 2)
        printf("The given character is Lowercase");
    else
        printf("It is not alphabet");
	 	
}

int checkCase()
{
	char ch;
	printf("Enter a Character:");
	scanf("%c",&ch);
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