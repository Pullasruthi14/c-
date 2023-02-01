#include<iostream>
using namespace std;
class number
{
	int n;
	public:
		void getdata()
		{
			cout<<"enter number";
			cin>>n;
		}
		void display()
		{
			if(n%2==0)
			{
				cout<<"n is even number";
			}
			else
			{
				cout<<"n is odd number";
			}
			
		}
};
int main()
{
	number n;
	n.getdata();
	n.display();
}
