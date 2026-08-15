void main()
{
	int n,temp,rem,fact,sum=0,i;
    printf("Enter a number:");
    scanf("%d",&n);           
    temp=n;                   
    while(temp>0)
    {
        rem=temp%10;      
        fact=1;
        i=1;

        while(i<=rem)
        {
            fact=fact*i;
            i++;
        }

        sum=sum+fact;
        temp=temp/10;
    }

    if(sum==n)
        printf("Strong Number");
    else
        printf("Not Strong Number");
}