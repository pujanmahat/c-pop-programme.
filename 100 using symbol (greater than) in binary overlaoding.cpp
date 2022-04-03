//wap to demonstrate the concept of binary operator overloading 
//(comparision of '>'symbol).
//Enter two amounts and find the greatest one usign > symbol

#include <iostream>
using namespace std;
class money
{
	private:
		int rs;
		float ps;
	public:
		money()
		{
			rs=0;
			ps=0;
		}
		void putdata()
		{
			cout<<"Enter amount in rs"<<endl;
			cin>>rs;
			cout<<"Enter amount in ps"<<endl;
			cin>>ps;
		}
		void show()
		{
			cout<<rs<<endl;
			cout<<ps<<endl;
		}
		int operator >(money m2)
		{
		  float mm1=rs+ ps/100;
		  float mm2=m2.rs+m2.ps/100;
		  return (mm1>mm2)?true:false;	
		}		
};
int main()
{
	money m1,m2;
	m1.putdata();
	cout<<"Amount 1 is"<<endl;
	m1.show();
	m2.putdata();
	cout<<"Amount 2 is"<<endl;
	m2.show();
	if (m1>m2)
	{
		cout<<"m1 is greater than m2"<<endl;
	}
	else if(m2>m1)
	{
		cout<<"m2 is greater than m1"<<endl;
	}
	else
	{
		cout<<"m1 and m2 both are equal"<<endl;
	}
	
	
}


