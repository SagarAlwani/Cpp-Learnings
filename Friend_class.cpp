/*Friend classes*/
#include<iostream>
using namespace std;
class Sagar
{
	private:
			int income1, income2;
	public:
			void setvalue(int a, int b = 0)
			{
				income1 = a;
				income2 = b;
			}
	friend class Alwani;						
};
class Alwani
{
	private:
			int income;
	public:
			void setdata(int c)
			{
				income = c;
			}
			int func1(Sagar s)
			{
				return (s.income1+s.income2+income);
			}		
};
int main()
{
	Sagar s;
	Alwani a;
	s.setvalue(1,2);
	a.setdata(10);
	cout << a.func1(s);
}
