/*to doston aaj hum seekenge static member function ka use*/
#include<iostream>
using namespace std;
class stati
{
	int code;
	static int count;
	public:
			void invoke(void)
			{
				code = ++count; 
			}
			void showcode(void)
			{
				cout << "Object Number: " << code << endl; 
			}
			static void showcount(void)
			{
				cout << "count: " << count << endl;
			}
};
int stati :: count;
int main()
{
	stati s1, s2;
	s1.invoke();
	s2.invoke();
	stati :: showcount();
	
	stati s3;
	s3.invoke();
	stati :: showcount();
	
	s1.showcode();
	s2.showcode();
	s3.showcode();
}
