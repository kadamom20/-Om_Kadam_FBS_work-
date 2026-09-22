#include<stdio.h>
int vowel();
void main()
{
	int result;
	result=vowel();
	if(result==1)
	  printf("vowel");
	else
	  printf("consonant");
}
int vowel()
{
	char ch;
	printf("Enter a Alphabet:");
	scanf("%c",&ch);
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	  return 1;	
	else
     return 0;
}