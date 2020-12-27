/*Constructor wuth default arguments*/
#include<iostream>
using namespace std;
class Sagar
{
	private:
			int a, b;
	public:
			Sagar()
			{
				a = 10,b = 20;
			}
			Sagar(int ,int b = 4)
			{
				a = 19;
				this->b = b;
			}
			void show()
			{
				cout << endl;
				cout << a << endl << b;
				cout << endl;
			}		
};
int main()
{
	Sagar s;
	Sagar s1(4);
	s.show();
	s1.show();
}
