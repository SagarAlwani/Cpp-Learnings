/*Use of Pure Virtual Functions*/
#include<iostream>
using namespace std;
class Sagar
{
	public:
			virtual void fun() = 0;
};
class Alwani : public Sagar
{
	public:
			void fun()
			{
				cout << "In Derived\n";
			}
};
int main()
{
	Alwani a;
	a.fun();
}
