#include<iostream>
using namespace std;
class A
{
	public:
		void getdata()
		{
			cout<<"base class";
		}
};
class B:public A
{
	public:
		void getdata1()
		{
			cout<<"derived class";
		}
};
int main()
{
	B b;
	b.getdata1();
	b.getdata();
}
