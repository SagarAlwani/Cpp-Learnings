/*USe of Friend Function in a Single Class*/
/*USe of Friend Function in multiple Classes*/
#include<iostream>
using namespace std;
class Alwani;//Forwrd Class Declaration necessary in case of Friend Function
class Sagar
{
	private:
			int a;
	public:
			Sagar():a(10)
			{
				cin >> a;
			}		
			friend int mean(Sagar s1, Alwani s2);
};
class Alwani
{
	private:
			int b;
	public:
			Alwani():b(20)
			{
				cin >> b;
			}
			friend int mean(Sagar s1, Alwani s2);
};
int mean(Sagar s1, Alwani s2)
{
	return ((s1.a+s2.b)/2);
}
int main()
{
	Sagar s1;
	Alwani s2;
	cout << mean(s1,s2);
}

