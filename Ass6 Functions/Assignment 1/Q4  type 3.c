#include<stdio.h>
void vowel(char ch);
void main()
{
	char ch;
	printf("Enter a Alphabet:");
	scanf("%c",&ch);
	vowel(ch);
}
void vowel(char ch)
{
	
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	 printf("%c is a vowel",ch);	
	else
     printf("%c is a consonant",ch);
	
}