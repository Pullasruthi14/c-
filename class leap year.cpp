#include<iostream>
using namespace std;
class year
{
	int y;
	public:
		void getdata()
		{
			cout<<"enter the year";
			cin>>y;
		}
		void display()
		{
			if(y%4==0)
			{
				cout<<"y is a leap";
			}
			else
			{
				cout<<"y is not a leap year";
			}
		}
};
int main()
{
	year y;
	y.getdata();
	y.display();
}
