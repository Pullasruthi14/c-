#include<iostream>
using namespace std;
class circle
{
	int r,a,ci;
	public:
		void getdata()
		{
			cout<<"enter the radius=";
			cin>>r;			
		}
		void display()
		{
			a=3.14*r*r;
			ci=2*3.14*r;
			cout<<"area of circle="<<a;
			cout<<"/ncircumference of circle="<<ci;
		}
		
};
int main()
{
	circle c;
	c.getdata();
	c.display();
}
