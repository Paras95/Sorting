#include<stdio.h>
#include<stdlib.h>
void printArray(int arr[],int n)
{
	int i;
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return;
}

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int arr[],int l,int r)
{
	int i,j,pivot;
	pivot=arr[r];
	i=(l-1);
	for(j=l;j<r;j++)
	{
		if(arr[j]<=pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[r]);
	return (i+1);
}

void quick_sort(int arr[],int l,int r)
{
	if(l<r)
	{
		int p=partition(arr,l,r);
		quick_sort(arr,l,p-1);
		quick_sort(arr,p+1,r);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Content of the array:\n");
	printArray(arr,n);
	printf("\n");
	quick_sort(arr,0,n-1);
	printf("\n");
	printf("Content of the array after sorting:\n");
	printArray(arr,n);
	return 0;
}
