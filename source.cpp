/*To dosto aaj hum dekhenge static data member ka use*/
#include<iostream>
using namespace std;
class statici
{
	int number;
	static int count;
	public:
			void getdata(int number)
			{
				this->number = number;
				count++;
			}
			void getcount()
			{
				cout << "count: " << count << endl ;
			}
};
int statici :: count;
int main()
{
	statici s1, s2, s3;
	s1.getdata(10);
	s2.getdata(20);
	s3.getdata(30);
	s1.getcount();
	s2.getcount();
	s3.getcount();
	return 0;
}
