#include<iostream>
using namespace std;
class P
{
	public:
		void getdata()
		{
			cout<<"base class";
		}
};
class C1:public P
{
	public:
		void getdata1()
		{
			cout<<"derived class";
		}
};
class C2:public P
{
	public:
		void getdata()
		{
			cout<<"derived from derived class";
		}
};
int main()
{
	C2 c;
// 	c.getdata1();
	c.getdata();
	P p;
	p.getdata();
	
}
