/*Late Binding or Dynamic Binding*/
#include<iostream>
using namespace std;
class Sagar
{
	public:
			virtual void Display()
			{
				cout << "Base Display";
			}
};
class Alwani : public Sagar
{
	public:
			void Display()
			{
				cout << "Derived Display";
			}
};
int main()
{
	Sagar *s; //Base Class Pointer
	s = new Alwani; // Object of Derived Class
	s->Display();
	s = new Sagar;
	s->Display();
}
