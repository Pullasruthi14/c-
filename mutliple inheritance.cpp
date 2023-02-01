#include<iostream>
using namespace std;
class F
{
	public:
		void getdata()
		{
			cout<<"base class";
		}
};
class M
{
	public:
		void getdata1()
		{
			cout<<"derived class";
		}
};
class C:public F,public M
{
	public:
		void getdata2()
		{
			cout<<"derived from derived class";
		}
};
int main()
{
	C c;
	c.getdata1();
	c.getdata2();
	F f;
	f.getdata() ; 
}
