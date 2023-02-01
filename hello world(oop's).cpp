#include<iostream>
using namespace std;
class message 
{
	int x =10;
	public :
		void getdata()
		{
			cout<<"x value"<<x;
			cout<<"hello world";
		}
	
};
int main()
{
	message m;
	m.getdata();
}
