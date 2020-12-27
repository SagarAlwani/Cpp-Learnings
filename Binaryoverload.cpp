/*Binary Operator Overloading*/
#include<iostream>
using namespace std;
class Complex
{
	int imag ,real;
	public:
			/*Complex()
			{
				cin >> imag >> real;
			}*/
			void get()
			{
				cin >> imag >> real;
			}
			void display()
			{
				cout << real << "+" << imag <<"i";
			}
			Complex operator + (Complex c1)
			{
				Complex temp;
				temp.real = real + c1.real;
				temp.imag = imag + c1.imag;
				return temp;
			}
};
int main()
{
	Complex c1, c2;
	c1.get();
	c2.get();
	(c1+c2).display();
}
