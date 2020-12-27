/*Use of Static Data Member*/
#include<iostream>
using namespace std;
class stati
{
  static int count;
  int number;
  public:
    void getdata(int number)
    {
      this->number=number;
      count++;
    }
    void getcount()
    {
      cout << "count: " << count << endl;
    }
};
int main()
{
  stati s1, s2, s3;
  s1.getdata(10);
  s2.getdata(20);
  s3.getdata(30);
  s1.getcount();
  s2.getcount();
  s3.getcount();
	return 0;
}

