void main()
{
	int n,i=1,sum=0;
    printf("Enter a number:");   
    scanf("%d",&n);      //28
    while(i<n)           //1<28  true
    {
        if(n%i==0)       //1 2 4 7 14 
        {
          sum=sum+i;     //28
        }
        i++;
    }
     if(sum == n)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");
}