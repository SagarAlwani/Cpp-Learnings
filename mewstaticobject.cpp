#include<iostream>
using namespace std;
class Sagar
{
	int a,b;
	public:
			void set()
			{
				a = 20;
				b = 20;
			}
			void show()
			{
				cout << endl << a << endl << b;
			}
};
int main()
{
	static Sagar s;
	s.set();
	s.show();
}
