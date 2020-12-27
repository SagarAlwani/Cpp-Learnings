/*Binary Operator Overload*/
#include<iostream>
using namespace std;
class Sagar
{
	int real,imag;
	public:
			void get()
			{
				cin >> real >> imag;
			}
			void out()
			{
				cout << real << "+" << imag <<"i";
			}
	friend Sagar operator+(Sagar s1,Sagar s2);
};
Sagar operator +(Sagar s1,Sagar s2)
{
	Sagar s;
	s.real = s1.real+s2.real;
	s.imag = s1.imag+s2.imag;
	return s;
}
int main()
{
	Sagar s1,s2;
	s1.get();
	s2.get();
	(s1+s2).out();	
}
