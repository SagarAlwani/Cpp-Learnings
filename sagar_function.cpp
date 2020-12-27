/*Function Definition outside the Function*/
#include<iostream>
using namespace std;
class Ram_siya
{
	private:
			int a,b;
	public:
			void getdata();
			void printdata();
};
/*syntax-> return_type class_name :: Function_name(arguments)*/
void Ram_siya :: getdata()
{
	cin >> a >> b;
}
void Ram_siya :: printdata()
{
	cout << a << b;
}
int main()
{
	Ram_siya *s;
	s = new Ram_siya;
	s->getdata();
	s->printdata();
	delete s;
}
