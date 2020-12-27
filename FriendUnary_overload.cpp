/*Friend function in Unary*/
#include<iostream>
using namespace std;
class Sagar
{
	int a;
	public:
			void get()
			{
				cin >> a;
			}
			/*void out()
			{
				cout << a;	
			}*/	
	friend void operator ++(Sagar c1);		
};
void operator ++(Sagar c1)
{
	c1.a+=1;
	//cout << c1.a;
}
int main()
{
	Sagar s;
	s.get();
	++s;
	//Sagar s1(s);
}
