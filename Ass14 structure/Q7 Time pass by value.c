#include<stdio.h>

struct Time
{
	int hr,min,sec;
};
struct Time formatTime(struct Time t);
displayTime(struct Time t);
void main()
{
	struct Time t;
	printf("Enter hr min and sec");
	scanf("%d%d%d",&t.hr,&t.min,&t.sec);
	
	displayTime(t);
	
	t=formatTime(t);
	
	displayTime(t);
} 
displayTime(struct Time t)
{
  printf("\n%d: %d: %d",t.hr,t.min,t.sec);	
}
struct Time formatTime(struct Time t)
{
	int tsec=t.hr*60*60+t.min*60+t.sec;
	
	t.hr=tsec/3600;
	t.min=tsec%3600;
	t.sec=t.min%60;
	t.min=t.min/60;
	
	return t;
}