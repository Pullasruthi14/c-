#include<iostream>
using namespace std;
class sum
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"enter the x and y values";
			cin>>x>>y;
		}
		void display()
		{
			cout<<"sum of two  numbers"<<x+y;
		}
};
 int main()
{
	sum s;
	s.getdata();
	s.display();
}
