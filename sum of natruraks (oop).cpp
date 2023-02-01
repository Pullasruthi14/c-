#include<iostream>
using namespace std;
class message
{
	int x,y;
	public:
		int getdata()
		{
			cout<<"enter the value x and y";
			cin>>x>>y;
			cout<<"sum of the two numbers"<<x+y;
		}
};
int main()
{
	message m;
	m.getdata();
}
