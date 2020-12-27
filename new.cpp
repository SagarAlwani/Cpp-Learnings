#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
			cout << "Division is :"<<a/b;
	}
	catch(int b)
	{
		cout << "Error:";
	}
	return 0;
}
