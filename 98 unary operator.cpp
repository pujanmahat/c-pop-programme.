//wap to display overloading {unary operator ++}
// (using prefix and postfix)

#include <iostream>
using namespace std;
class increment
{
	private:
		int a;
	public:
		increment()
		{
			a=0;
		}
		increment(int b)
		{
			a=b;
		}
		 void operator ++()      //prefix operator
		{
		  a=a+2;	
		}
		void operator ++(int )
		{
			a=a+2;
		}
		void show ()
		{
			cout<<"A="<<a<<endl;
		}
};
int main()
{
	increment i(5);
	i.show();
	++i;
	i.show();
	i++;
	i.show();
}
