#include<iostream>
#include<math.h>
using namespace std;
class simple
{
	int p,n,r;
	public:
		void getdata()
		{
			cout<<"enterthe values of p, n, r";
			cin>>p>>n>>r;
		}
		void display()
		{
			cout<<"simple interest"<<(p*n*r/100);
			cout<<"compound inetrest"<< p*pow((1+r/100),n);
		}
};
int main()
{
	simple s;
	s.getdata();
	s.display();
}

