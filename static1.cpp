#include<iostream>
using namespace std;
class Sagar
{
	static int a;
	public:
		void increase()
		{
			//cout << endl << a;
			a++;
			//cout << endl << a;
		}
		void print()
		{
			cout << endl << a;
		}
};
int Sagar :: a ;
int main()
{
	Sagar s;
	Sagar s1;
	s.print();
	s.increase();
	s.print();
	s1.increase();
	s1.print();
}
