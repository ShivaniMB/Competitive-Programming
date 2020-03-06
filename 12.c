// Primary Arithmetic

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,carry,count,temp;

	clrscr();
	printf("\nenter two nos=");
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		carry=count=0;
		while(a||b)
		{
			temp=(a%10)+(b%10)+carry;
			if(temp>9)
			{
				count++;
				carry=1;
			}
			a=a/10;
			b=b/10;
		}
		if(count>=1)
			printf("%d carry operations",count);
		else
			printf("no caary operation");

		printf("\n\nenter two nos=");

	}
	getch();
	return 0;
}
/*
***OUTPUT***
enter two nos=123 456
no caary operation

enter two nos=555 555
3 carry operations

enter two nos=123 594
1 carry operations

*/

