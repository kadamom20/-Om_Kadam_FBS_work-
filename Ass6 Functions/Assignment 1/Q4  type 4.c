#include<stdio.h>
int vowel(char ch);

void main()
{    
    int result;
	char ch;
	printf("Enter a Alphabet:");
	scanf("%c",&ch);
	result=vowel(ch);
	if(result==1)
	 printf("Vowel");
	else
	printf("consonant");
}

int vowel(char ch)
{
	
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	 return 1;	
	else
     return 0;
	
}