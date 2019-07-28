#include<stdio.h>
#include<stdlib.h>

void printArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
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

void insertion_sort(int arr[],int n)
{
	int j,key,i;
	j=1;
	while(j<n)
	{
		i=j-1;
		key=arr[j];
		while(i>=0 && arr[i]>key)
		{
			arr[i+1]=arr[i];
			i--;
		}
		arr[i+1]=key;
		j++;
	}
}

int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,n);
	printf("After Sorting:\n");
	printArray(arr,n);
	printf("\n");
	printf("Finally Done:\n");
	return 0;
}
