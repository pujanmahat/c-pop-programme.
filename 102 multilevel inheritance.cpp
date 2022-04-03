//wap to display roll and sub1 ,sub2 (with total of two sub)
// using multilevel inheritance 

#include <iostream>
using namespace std;
class student
{
	protected:
		int roll;
	public:
		void setroll(int r)
		{
			roll=r;
		}
};
class test:public student
        {
        protected:
        	float sub1,sub2;
        public:
        	void setmark(float s1,float s2)
        	     {
        	     	sub1=s1;
        	     	sub2=s2;
				 }
		};
class result:public test
        {
        	private:
        		float total;
        	public:
        		void display()
        		{
        			cout<<"Roll="<<roll<<endl;
        			total=sub1+sub2;
        			cout<<"total="<<total<<endl;
				}
		};
		int main()
		{
			result r;
			float s1,s2;
			cout<<"Enter s1 and s2="<<endl;
			cin>>s1>>s2;
			r.setmark( s1, s2);
			float ro;
			cout<<"Enter roll"<<endl;
			cin>>ro;
			r.setroll(ro);
			r.display();
		}		
