void main()
{
	int n,first,last,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    last=temp%10;  
    while(temp>=10)
    {
      temp=temp/10;
    }
    first=temp;       
    printf("Sum=%d",first+last);
}