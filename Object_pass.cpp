/**Object Passing Techniques*/
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
			void show1(Sagar s)/*Call By value*/
			{
				num = s.num;
			}		
			void show2(Sagar &s,int a)/*Call by Refrence*/
			{
				num = s.num;
			}
			void show3(Sagar *s)/*Call by Address*/
			{
				num = s->num;
			}
};
int main()
{
	Sagar s;
	s.get();
	Sagar s1,s2,s3;
	s1.show1(s);
	s2.show2(s,2);
	s3.show3(&s);
}
