// How Many Fibs?

#include<stdio.h>
#include<conio.h>
int main()
{
	unsigned long long int fibs[15000],i,next,t1=0,t2=1,n1,n2,j,a;
	clrscr();
	for(i=0;i<15000;i++)
	{
		next=t1+t2;
		fibs[i]=next;
		t1=t2;
		t2=next;
	}
	printf("\nenter two nos=");
	while(scanf("%llu%llu",&n1,&n2))
	{
		a=0;
		if(n1==0 || n2==0)
			break;
		for(i=0;i<15000;i++)
		{
			if(fibs[i]==n1)
			{
				a++;
				break;
			}
			if(fibs[i]>n1)
				break;
		}
		for(j=0;j<15000;j++)
		{
			if(fibs[j]==n2)
			{
				a++;
				break;
			}
			if(fibs[j]>n2)
			{
				if(a==1)
					j--;
				break;
			}
		}
		if(a==2)
			printf(" %d",j-i-1);
		else
			printf(" %d",j-i);
		printf("\nenter two nos=");
	}
	getch();
	return 0;
}
/*

***OUTPUT***

enter two nos=10 100
5

*/


