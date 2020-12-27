/*Unary Pass by reference*/
#include<iostream>
using namespace std;
class Sagar
{
	int a;
	public:
			void get()
			{
				cin >> a;
			}
			int getindex()
			{
				return a;
			}
			void operator ++()
			{
				a+=1;
			}
};
int main()
{
	Sagar s;
	s.get();
	cout << s.getindex();
	++s;
	cout << s.getindex();
}
