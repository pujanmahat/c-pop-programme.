//wap to find the sum of two integer number using 
//concept of operator overloading

#include <iostream>
using namespace std;
class sum
{
	private:
		int n1;
	public:
		sum()
		{
			n1=0;	
		}
		sum(int a)
		{
			n1=a;
		}
		sum operator +(sum o2)
		{
			sum temp;
			temp.n1=n1+o2.n1;
			return temp;
		}
		void display()
		{
			cout<<n1<<endl;
		}
};
int main()
{
	int x,y;
	cout<<"Enter a number "<<endl;
	cin>>x;
	cout<<"Enter any number "<<endl;
	cin>>y;	
	sum o1(x),o2(y),o3;
	cout<<"First number =";
    o1.display();
    cout<<"Second number =";
	o2.display();
    cout<<"Sum=";
	o3=o1+o2;
	o3.display();
}
