#include<stdio.h>
#include<stdlib.h>

void counting_sort(int A[],int n,int B[],int k)
{
	int C[k],i,j;
	for(i=0;i<k;i++)
	{
		C[i]=0;
	}
	for(j=0;j<n;j++)
	{
		(C[A[j]])++;
	}
	for(i=1;i<k;i++)
	{
		C[i]=C[i]+C[i-1];
	}
	for(j=n-1;j>=0;j--)
	{
		B[C[A[j]]]=A[j];
		C[A[j]]=C[A[j]]-1;
	}
}

void printArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return;
}

int main()
{
	int i,n;
	scanf("%d",&n);
	int arr1[n],arr2[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printArray(arr1,n);
	int k;
	printf("Enter the range of the numbers:\n");
	scanf("%d",&k);
	printf("\n");
	counting_sort(arr1,n,arr2,k);
	printArray(arr2,n);
	printArray(arr1,n);
	return 0;
}
