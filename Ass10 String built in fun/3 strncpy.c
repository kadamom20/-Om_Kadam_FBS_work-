#include<stdio.h>
#include<string.h>

int main()
{
  char str1[] = "Firstbit";
  char str2[20];
  
  strncpy(str2,str1,6);
  str2[6]='\0';
  
  printf("copied string=%s",str2);	
}
