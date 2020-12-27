/*Object Passing Techniques*/
#include<iostream>
using namespace std;
class Sagar
{
	private:
			int num;
	public:
			void get()
			{
				cin >> num;
			}
			void show1(Sagar s1)/*Pass By Value*/
			{
				num = s1.num;
			}
			void show2(Sagar &s2, int a)/*Pass by refrence*/
			{
				num = s2.num;
			}
			void show3(Sagar *s3)
			{
				num = s3->num;
			}
};
int main()
{
	Sagar s1;
	s1.get();
	Sagar s2;
	s2.show1(s1);
	Sagar s3;
	s3.show2(s1,2);
	Sagar s4;
	s4.show3(&s3);
}
