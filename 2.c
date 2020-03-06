// LC Display

#include<stdio.h>
#include<conio.h>
char arr[20][10];
char max[70][50];
void print0(int size);
void print1(int size);
void print2(int size);
void print3(int size);
void print4(int size);
void print5(int size);
void print6(int size);
void print7(int size);
void print8(int size);
void print9(int size);
void seg1(int size);
void seg2(int size);
void seg3(int size);
void seg4(int size);
void seg5(int size);
void seg6(int size);
void seg7(int size);
void preserve(int k,int size);
void clear();
int i,j;
int main()
{
	int size,a;
	char n[10];

	clrscr();
	printf("\nenter size=");
	scanf("%d",&size);
	printf("\nenter no=");
	scanf("%s",n);

	for(i=0;i<70;i++)
	{
		for(j=0;j<50;j++)
		{
			max[i][j]=' ';
		}
	}
	for(a=0;n[a]!='\0';a++)
	{
		switch(n[a])
		{
			case '0':
				print0(size);
				preserve(a,size);
				break;
			case '1':
				print1(size);
				preserve(a,size);
				break;
			case '2':
				print2(size);
				preserve(a,size);
				break;
			case '3':
				print3(size);
				preserve(a,size);
				break;
			case '4':
				print4(size);
				preserve(a,size);
				break;
			case '5':
				print5(size);
				preserve(a,size);
				break;
			case '6':
				print6(size);
				preserve(a,size);
				break;
			case '7':
				print7(size);
				preserve(a,size);
				break;
			case '8':
				print8(size);
				preserve(a,size);
				break;
			case '9':
				print9(size);
				preserve(a,size);
				break;
			default:
				printf("\nwrong choice");
		}
	}

	for(i=0;i<15;i++)
	{
		for(j=0;j<35;j++)
		{
			printf(" %c",max[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
void clear()
{
	for(i=0;i<20;i++)
	{
		for(j=0;j<10;j++)
		{
			arr[i][j]=' ';
		}
	 }
}
void preserve(int k,int size)
{
	int a,b;
	b=k*(size+3);
	a=0;
	for(j=0;j<10;j++)
	{
		a=0;
		for(i=0;i<20;i++)
		{
			max[a][b]=arr[i][j];
			a++;
		}
		b++;
	}

}
void print0(int size)
{
	clear();
	seg1(size);
	seg2(size);
	seg3(size);
	seg5(size);
	seg6(size);
	seg7(size);
}
void print1(int size)
{
	clear();
	seg3(size);
	seg6(size);
}
void print2(int size)
{
	clear();
	seg1(size);
	seg3(size);
	seg4(size);
	seg5(size);
	seg7(size);

}
void print3(int size)
{
	clear();
	seg1(size);
	seg3(size);
	seg4(size);
	seg6(size);
	seg7(size);
}
void print4(int size)
{
	clear();
	seg2(size);
	seg4(size);
	seg3(size);
	seg6(size);
}
void print5(int size)
{
	clear();
	seg1(size);
	seg2(size);
	seg4(size);
	seg6(size);
	seg7(size);
}
void print6(int size)
{
	clear();
	seg1(size);
	seg2(size);
	seg4(size);
	seg5(size);
	seg6(size);
	seg7(size);
}
void print7(int size)
{
	clear();
	seg1(size);
	seg3(size);
	seg6(size);
}
void print8(int size)
{
	clear();
	seg1(size);
	seg2(size);
	seg3(size);
	seg4(size);
	seg5(size);
	seg6(size);
	seg7(size);
}
void print9(int size)
{
	clear();
	seg1(size);
	seg2(size);
	seg3(size);
	seg4(size);
	seg6(size);
	seg7(size);
}

void seg1(int size)
{
	j=0;
	for(i=1;i<=size;i++)
	{
		arr[j][i]='-';
	}
}
void seg2(int size)
{
	j=0;
	for(i=1;i<=size;i++)
	{
		arr[i][j]='|';
	}
}
void seg3(int size)
{
	j=size+1;
	for(i=1;i<=size;i++)
	{
		arr[i][j]='|';
	}
}
void seg4(int size)
{
	i=size+1;
	for(j=1;j<=size;j++)
	{
		arr[i][j]='-';
	}
}
void seg5(int size)
{
	j=0;
	for(i=(size+2);i<(2*size+2);i++)
	{
		arr[i][j]='|';
	}
}
void seg6(int size)
{
	j=size+1;
	for(i=(size+2);i<(2*size+2);i++)
	{
		arr[i][j]='|';
	}
}
void seg7(int size)
{
	j=2*size+2;
	for(i=1;i<=size;i++)
	{
		arr[j][i]='-';
	}
}

/*
***OUTPUT***

enter size=3
enter no=123

	       - - -       - - -
	 |           |           |
	 |           |           |
	 |           |           |
	       - - -       - - -
	 |   |                   |
	 |   |                   |
	 |   |                   |
	       - - -       - - -

enter size=2
enter no=874

   - -       - -
 |     |         |   |     |
 |     |         |   |     |
   - -                 - -
 |     |         |         |
 |     |         |         |
   - -

*/













