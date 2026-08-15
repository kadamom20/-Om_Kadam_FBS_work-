void main()
{
	int n,i=1,fact=1;

    printf("Enter a number:");
    scanf("%d",&n);             //5

    while(i<=n)                 //1<=5
    {
        fact=fact*i;            //1*1=1   1*2=2  2*3=6  6*4=24   24*5=120
        i++;
    }

    printf("Factorial=%d",fact);
}