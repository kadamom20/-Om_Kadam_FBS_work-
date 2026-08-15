void main()
{
   int n,i=2;
   printf("Enter a number:");
   scanf("%d",&n);
   while(i<n)
    {
     if(n%i==0) 
	 {
        printf("Not Prime");
        break;
     }
        i++;
    }
    printf("Prime");    
}
