/*Use of Functions */
#include<iostream>
using namespace std;
class Romeo
{
	private :
			int a,b;
	public:
			Romeo():a(5),b(6)
			{}
			void getvalue()
			{
				cin >> a >> b;
			}
			void printvalue()
			{
				cout << endl;
				cout << a << b;
			}		
};
int main()
{
	Romeo *r;
	r = new Romeo;
	r->printvalue();
	cout << "\nAfter Executing Function\n";
	r->getvalue();
	r->printvalue();
	delete r;
}
