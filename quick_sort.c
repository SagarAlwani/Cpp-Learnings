/**/
#include<stdio.h>
#include<stdlib.h>
int arr[] = {10,16,8,12,15,6,3,9,5};
void swap(int *x, int *y)
{
	*x = *x^*y;
	*y = *x^*y;
	*x = *x^*y;
}
int partition(int l, int h)
{
	int i = l, j = h;
	int pivot = arr[l];  
	while(i<j)
	{
		do{
		i++;
	  }while(arr[i]<pivot);
	  do{
		j--;
	  }while(arr[j]>pivot);
	  if(i<j)
	swap(&arr[i],&arr[j]);
	}
	swap(&arr[l],&arr[j]); 
	return j;
}
void quicksort(int l, int h)
{
	if(l<h)
	{
	int j = partition(l,h);
	quicksort(l,j);
	quicksort(j+1,h);
	}
}
void main()
{
	int n =(sizeof(arr)/sizeof(arr[0]));
	quicksort(0,n);
	int i ;
	for(i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}
}
