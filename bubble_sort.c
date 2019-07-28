#include<stdio.h>
#include<stdlib.h>

void printArray(int arr[],int n)
{
	int i;
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void Bubble_sort(int arr[],int n)
{
	int swapped,i,j;
	for(i=0;i<n-1;i++)
	{
		swapped=0;
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
				swapped=1;
			}
		}
		if(swapped==0)
		{
			break;
		}
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array Content before sorting:\n");
	printArray(arr,n);
	printf("\n");
	Bubble_sort(arr,n);
	printArray(arr,n);
	return 0;
}
