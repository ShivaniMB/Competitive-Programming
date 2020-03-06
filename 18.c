// Counting

#include<stdio.h>
#include<conio.h>
int main()
{
	unsigned long long int i,arr[15000],n;

	clrscr();
	arr[0]=2;
	arr[1]=5;
	arr[2]=13;
	printf("\nenter index=");
	scanf("%llu",&n);

	for(i=3;i<15000;i++)
		arr[i]=2*arr[i-1]+arr[i-2]+arr[i-3];
	for(i=0;i<15000;i++)
		if((i+1)==n)
			printf(" %llu",arr[i]);

	getch();
	return 0;
}
/*
***OUTPUT***

enter index=2
5
enter index=3
13

*/