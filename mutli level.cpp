#include<iostream>
using namespace std;
class GP
{
	public:
		void getdata()
		{
			cout<<"base class";
		}
};
class P:public GP
{
	public:
		void getdata1()
		{
			cout<<"derived class";
		}
};
class C:public P
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
c.getdata2();
c.getdata1();
GP g;
g.getdata();
}
