// How many pieces of Land?

#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,n,lines,j,p,T;

	clrscr();
	printf("\nenter no of test case=");
	scanf("%d",&T);
	while(i<T)
	{
		printf("\nenter no of arbitrary points=");
		scanf("%d",&n);
		lines=n*(n-1)/2;
		p=n*(n-1)*(n-2)*(n-3)/24+lines+1;
		printf(" %d",p);
		i++;
	}
	getch();
	return 0;
}
/*

***OUTPUT***

enter no of test case=4
enter no of arbitrary points=1
1
enter no of arbitrary points=2
2
enter no of arbitrary points=3
4
enter no of arbitrary points=4
8
*/