/*Selection sort*/
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
	int i, j, min_indx;
	int arr[] = {8,7,1,4,9,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(i = 0; i < n-1; i++)
	{
		min_indx = i;
		for(j = i+1; j < n; j++)
		{
			if(arr[min_indx] > arr[j])
				min_indx = j;
		}
		swap(&arr[i],&arr[min_indx]);
	}
	for(i = 0; i < n; i++)
		printf("%d",arr[i]);
}
