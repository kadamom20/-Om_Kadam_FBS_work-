#include<stdio.h>
void greatest(int,int,int);

void main()
{
    int a,b,c;
	printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);	
    
    greatest(a,b,c);
}

void greatest(int a,int b,int c)
{
	if(a>b)
    {
    	if(a>c)  	
    	  printf("%d is the greatest.", a);
        else
            printf("%d is the greatest.", c);	
	}
	else if(b>c)
	    printf("%d is the greatest.", b);
	else
        printf("%d is the greatest.", c);
}