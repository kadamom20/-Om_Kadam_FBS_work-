#include<stdio.h>

int greatest(int a,int b,int c);
void main()
{
	int result;
	int a,b,c;
	printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);	
    
    result=greatest(a,b,c);
    printf("%d is the greatest.", result);
}

int greatest(int a,int b,int c)
{
	if(a>b)
    {
    	if(a>c)  	
    	  return a;
        else
            return c;	
	}
	else if(b>c)
	    return b;
	else
        return c;
}