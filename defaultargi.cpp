/*Default_Arguments*/
#include<iostream>
using namespace std;
class Sagar
{
	private:
			float p,r,t;
	public:
			/*Sagar():p(20.32),r(10.54),t(45.2)
			{
			}
			void getdata(float princ , float rate, float time = 4)
			{
				cin >> p >> r >> t;
			}		
*/			void putdata(float princ , float rate, float time = 400000)
			{
				cout << endl << "solution";
				cout << princ << rate << time;
				cout << endl <<  (princ*rate*time)/100;
			}
};
int main()
{
	Sagar s;
	s.putdata(10.2,4.2);
	//s.putdata();
}
