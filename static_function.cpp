/*Use of Static Member Function*/
#include<iostream>
using namespace std;
class stati
{
	int code;
 int count;
	public:
			void setcode(void)
			{
				code = ++count;
			}
			void showcode(void)
			{
				cout << "Object Number: " << code << endl;
			}
		    void showcount(void)
			{
				cout << "Count: " << count << endl;
			}
};
int stati :: count;
int main()
{
	stati t1, t2;
	t1.setcode();
	t2.setcode();
	
	stati :: showcount();
	
/*	stati t3;
	t3.setcode();
	
	stati :: showcount();
	
	t1.showcode();
	t2.showcode();
	t3.showcode();
*/	return 0;
}
