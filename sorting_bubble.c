#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b)
{
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}
void main()
{
	int i, j;
	int arr[] = {7,8,1,4,2};
	int n = 5;
	for(i = 0; i < n-i; i++)
	{
		for(j = 0; j < n-i-1; j++)
		{
			if(arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);
		}
	}
	for(i = 0; i <= n; i++)
		printf("%d",arr[i]);	
	
}
