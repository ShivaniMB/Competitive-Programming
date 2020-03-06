// Ones

#include<stdio.h>
#include<conio.h>
int main()
{
	int temp,rem=0,n,ans;

	clrscr();
	printf("\nenter no=");
	while(scanf("%d",&n)!=EOF)
	{
		if(n==1 || n%2==0 || n%5==0)
		{
			printf("\nnumber should not be 1 or divisible by 2 or 5\n");
			printf("\nenter no=");
			continue;
		}
		else
			rem=1;
		for(ans=1;rem;ans++)
		{
			temp=rem*10+1;
			rem=temp%n;
		}
		printf("%d",ans);
		printf("\nenter no=");
	}
	return 0;
}
/*
***OUTPUT***

enter no=3
3
enter no=7
6
enter no=9901
12

*/