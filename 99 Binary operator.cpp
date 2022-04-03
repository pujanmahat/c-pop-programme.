//wap to add two numbers using binary operator overloading

#include <iostream>
using namespace std;
class sum
{
	private:
		int a;
	public:
		sum()
		{
			a=0;
		}
		sum(int b)
		{
			a=b;
		}
		sum operator +(sum n2)
		{
			sum res;
			res.a=a+n2.a;
			return res;
		}
		void show()
		{
			cout<<a<<endl;
		}
};
int main()
{
	sum n1(100),n2(200),n3;
	n1.show();
	n2.show();
	n3=n1+n2;
	cout<<"sum=";
	n3.show();
}
