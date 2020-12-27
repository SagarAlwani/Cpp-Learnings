/*Static Memeber Function*/
#include<iostream>
using namespace std;
class Sagar
{
	int code;
	static int count;
	public:
		void set()
		{
			code = ++count;
		}
		void show()
		{
			cout << code;
		}
		static void count_show()
		{
			count++;//code++;
			cout << count;
		}
};
int Sagar :: count;
int main()
{
	Sagar s;
	s.set();
	s.show();
	s.count_show();
}
