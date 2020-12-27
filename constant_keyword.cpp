/*USe of Constant KKeyword*/
#include<iostream>
using namespace std;
class Sagar
{
	const int a;
	public:
			Sagar():a(10)
			{
				//cin >>a;
			}
			void get()
			{
				cout << a;
			}
};
int main()
{
	Sagar s;
	s.get();
}
