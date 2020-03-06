// Common permutation

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i=0,x=0;
	char a[1000],b[1000];

	clrscr();
	while(gets(a),gets(b))
	{
		int asc[128],bsc[128];
		char longest[1000]="";

		for(i='a';i<='z';++i)
			asc[i]=bsc[i]=0;
		for(i=0;i<sizeof(a);++i)
			++asc[a[i]];
		for(i=0;i<sizeof(b);++i)
			++bsc[b[i]];
		x=0;
		for(i='a';i<='z';++i)
		{
			while(asc[i]>0 && bsc[i]>0)
			{
				longest[x]=(char)i;
				x++;
				--asc[i];
				--bsc[i];
			}
		}
		printf("%s\n",longest);
		printf("\n");
	}
	getch();
	return 0;
}

/*

***OUTPUT***

pretty
women
e

walking
down
nw

the
street
et

*/