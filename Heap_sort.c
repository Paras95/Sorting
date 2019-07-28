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
	int temp=*a;
	*a=*b;
	*b=temp;
}

void MaxHeapify(int arr[],int index,int n)
{
	int l=2*index+1;
	int r=2*index+2;
	int largest=index;
	if(l<n && arr[l]>arr[index])
	{
		largest=l;
	}
	if(r<n && arr[r] > arr[largest])
	{
		largest=r;
	}
	if(largest!=index)
	{
		swap(&arr[largest],&arr[index]);
		MaxHeapify(arr,largest,n);
	}
}

void HeapSortUtil(int arr[],int n)
{
	for(int i=n-1;i>=0;i--)
	{
		swap(&arr[i],&arr[0]);
		MaxHeapify(arr,0,i);
	}
}

void heap_sort(int arr[],int n)
{
	int i;
	for(i=(n/2)-1;i>=0;i--)
	{
		MaxHeapify(arr,i,n);
	}
	HeapSortUtil(arr,n);
	return;
}

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Content of the array is :\n");
	printArray(arr,n);
	printf("\n");
	heap_sort(arr,n);
	printf("Sorted Conted of the array are like:\n");
	printArray(arr,n);
	return 0;
}
