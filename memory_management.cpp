/*Memory Allocation using New And Delete*/
#include<iostream>
using namespace std;
int main()
{
	int *p = new int ;
	*p = 5;
	cout << *p;
	/*or we can use */
	int *q = new int (10);
	cout << *q ;
	/*in case of Arrays we use*/
	int *arr;
	arr = new int[2];
	for(int i = 0; i < 2; i++)
		cin >> arr[i];
	for(int i = 0; i < 2; i++)
		cout << arr[i];	
}
