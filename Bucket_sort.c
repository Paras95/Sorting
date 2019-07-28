#include<stdio.h>
#include<stdlib.h>
#define BUCKETS 10

void BucketsSort(int A[],int array_size)
{
	int i,j,k;
	int buckets[BUCKETS];
	for(j=0;j<BUCKETS;j++)
	{
		buckets[j]=0;
	}
	for(i=0;i<array_size;i++)
	{
		++(buckets[A[i]]);
	}
	for(i=0,j=0;j<BUCKETS;j++)
	{
		for(k=buckets[j];k>0;--k)
		{
			A[i++]=j;
		}
	}
}

int main()
{
	
	int num,i;
	scanf("%d",&num);
	int array[num];
	for (i = 0; i < num; i++ ) 
	{
		scanf("%d",&array[i]);
	}
	BucketsSort(array, num);
	printf("Sorted content of the array:\n");
	for (i = 0;i <num;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
