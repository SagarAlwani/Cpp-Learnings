/*Operator Overloading*/
#include<iostream>
using namespace std;
class Unary
{
	int a;
	public:
			void get()
			{
				cin >> a;
			}
			void put()
			{
				cout << a; 
			}
			void operator ++ ();
			
};
void Unary :: operator++()
{
	a+=1;
}
int main()
{
	Unary s;
	s.get();
	s.put();
	++s;
	s.put();
}

