#include<iostream>
using namespace std;
/*Types of Constructors*/
class Sagar
{
	private:
			int a, b;
	public:
			/*Default Cnstructor*/
			Sagar()
			{
				a = 10;b = 20;
			}
			Sagar(int a,int b)
			{
				this->a = a;
				this->b = b;
			}
			Sagar (Sagar &s)
			{
				a = s.a;
				b = s.b;
			}
			void show()
			{
				cout << a << b;
			}		
};
int main()
{
	Sagar s;
	Sagar s1(15,30);
	Sagar s2(s1);
	s1.show();
	s2.show();
	s.show();
}
