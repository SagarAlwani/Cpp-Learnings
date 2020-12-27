/*Dynamically  Object Creation and Deletion*/
#include<iostream>
using namespace std;
class Sagar
{
	private: 
			int a, b;
	public:
			Sagar():a(10),b(20)
			{
				cout << "\nIn Constructor";
			}
			void display();
			{
				cout << "A = " << a << "\nB = " << b;
			}
			~Sagar()
			{
				cout << "\nIn Destructor";
			}
};
int main()
{
	Sagar *s;
	s = new Sagar;
	s->display();
	delete s;
}
