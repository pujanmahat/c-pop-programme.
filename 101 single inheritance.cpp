//wap to find the area and volume using single inheritance 

#include <iostream>
using namespace std;
class Room
{
	protected:
		int len,bre;
	public:
		int area()
		{
			return(len*bre);
		}
};
class Bedroom:public Room
           {
           	private:
             int height;
             public:
             	void setdata(int l,int b,int h)
             	{
             		len=l;
             		bre=b;
             		height=h;
				}
				int volume()
				{
					return(area()*height);
				}
		   };
		   
		   int main()
		   {
		   	Bedroom b;
		   	int len,bre,height;
		   	cout<<"Enter length breadth and height="<<endl;
		   	cin>>len>>bre>>height;
		   	b.setdata( len, bre, height);
		   	int ar =b.area();
		   	int vol=b.volume();
		   	cout<<"Area="<<ar<<endl;
		   	cout<<"volume="<<vol<<endl;
		   }
		   
		   
