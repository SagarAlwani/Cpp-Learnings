/*Use of Friend Function*/
#include<iostream>
using namespace std;
class Sagar
{
	private:
			int a,b;
	public:
			Sagar():a(10),b(20)
			{
			}
			friend int mean(Sagar s);		
};
int mean(Sagar s)
{
	return((s.a+s.b)/2);
}
int main()
{
	Sagar s;
	int c = mean(s);
	cout << c;
	cout << mean(s);
}
