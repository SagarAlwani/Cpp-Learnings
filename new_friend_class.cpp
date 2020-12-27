/*Friend Class*/
#include<iostream>
using namespace std;
class Sagar
{
	private:
			int income1,income2;
	public:
			void setdata(int a, int b = 2)
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
			void setincome(int a = 10)
			{
				income = a;
			}
			int fun(Sagar s)
			{
				return s.income1+s.income2+income;
			}		
};
int main()
{
	Sagar s;
	s.setdata(1,2);
	Alwani a;
	a.setincome(14);
	cout << a.fun(s);
}
