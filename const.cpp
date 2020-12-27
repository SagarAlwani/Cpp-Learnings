/*Class Sagar*/
#include<iostream>
using namespace std;
class Sagar
{
	int a;
	public:
			/*void setdata()
			{
				a = 12;
			}*/
			Sagar ():a(10){
			}
	void constfun();		
};
void Sagar :: constfun()
{
	cout << a;
	cout << endl << a;
}
int main()
{
	Sagar const  s;
	//s.setdata();
	s.constfun();
}
