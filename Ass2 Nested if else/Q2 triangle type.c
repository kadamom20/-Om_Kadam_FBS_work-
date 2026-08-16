void main()
{
  int a,b,c;
  printf("Enter three sides:");
  scanf("%d %d %d",&a,&b,&c);
  if((a+b>c)&&(a+c>b)&&(b+c>a))
  {
   if(a==b)
   {
   	if(b==c)
   	printf("Triangle is Equilateral");
   	else
   	printf("Triangle is Isoscales");
   }
   else
    {
        if (b == c)
                printf("Isosceles Triangle");
          else 
		  {
                if (a == c)
                    printf("Isosceles Triangle");
                else
                    printf("Scalene Triangle");
            }
        
	}
}
else
  {
  	printf("Not a valid triangle");
  }
}
