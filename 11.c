// Bridge

#include<stdio.h>
#include<conio.h>
void sort(int src[],int fr,int bk);
int min(int src[],int fr,int bk);
int max(int src[],int fr,int bk);
int main()
{
	int n,i,j,time=0,strategy[20],src[10],dest[10];
	int fr=0,bk=-1,btm=-1,top=0,itr;

	clrscr();
	printf("\nenter no of grps=");
	scanf("%d",&n);

	printf("\nenter no of person in each grp\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&src[i]);
		bk++;
	}
	time=2*src[1]+src[0]+src[n-1];
	if(n>4)
		time=time+src[1];
	for(i=0;i<n-3;i++)
	{
		time=time+src[i];
		time=time+src[0];
	}
	j=1;
	itr=1;
	while(fr<=bk)
	{
		sort(src,fr,bk);

		if(itr==1)
		{
			btm++;
			dest[btm]=src[fr];
			strategy[j]=src[fr];
			fr++;
			j++;

			btm++;
			dest[btm]=src[fr];
			strategy[j]=src[fr];
			fr++;
			j++;
		}
		if(itr==2)
		{
			btm++;
			dest[btm]=src[bk];
			strategy[j]=src[bk];
			bk--;
			j++;

			btm++;
			dest[btm]=src[bk];
			strategy[j]=src[bk];
			bk--;
			j++;
		}

		if(itr>2)
		{
			btm++;
			dest[btm]=min(src,fr,bk);
			fr++;
			strategy[j]=dest[btm];
			j++;

			btm++;
			dest[btm]=max(src,fr,bk);
			bk--;
			strategy[j]=dest[btm];
			j++;
		}

		sort(dest,top,btm);

		bk++;
		src[bk]=dest[top];
		strategy[j]=dest[top];
		top++;
		j++;

		sort(src,fr,bk);
		itr++;
	}
	printf("\n");

	if(n>4)
		n=15;
	else
		n=9;
	for(i=1;i<n;i++)
	{
		if(i%3!=0)
			printf(" %d",strategy[i]);
		else
			printf("\n  %d\n",strategy[i]);
	}

	printf("\ntime=%d",time);

	getch();
	return 0;
}

void sort(int arr[],int fr,int bk)
{
	int i,j,temp;
	for(i=fr;i<=bk;i++)
	{
		for(j=i;j<=bk;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int min(int src[],int fr,int bk)
{
	int min,i;
	min=src[0];
	for(i=fr;i<=bk;i++)
	{
		if(min>src[i])
			min=src[i];
	}
	return min;
}
int max(int src[],int fr,int bk)
{
	int max,i;
	max=src[0];
	for(i=fr;i<=bk;i++)
	{
		if(max<src[i])
			max=src[i];
	}
	return max;

}

/*
***OUTPUT***

enter no of grps=4
enter no of person in each grp
1 2 5 10

 1 2
  1
 10 5
  2
 1 2
time=17

*/