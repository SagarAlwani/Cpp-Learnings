/*Dynamic Object Creation*/
#include<iostream>
using namespace std;
class sagar
{
	private:
			int a,b;
	public:
			sagar():a(10),b(20)
			{
				cout << "In Constructor\n";
			}
			void display()
			{
				cout << a << b;
			}
			~sagar()
			{
				cout << "IN Destructor\n";
			}		
};
int main()
{
	sagar *s = new sagar;
	s->display();
	delete s;
}
