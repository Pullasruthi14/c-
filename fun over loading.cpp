#include<iostream>
using namespace std;
int sum(int x)
{
	return x;
}
float sum(float y)
{
	return y;
}
int sum(int a,int b)
{
	return a+b;
}
float sum(int d, float e)
{
	return d+e;
}
int main()
{
	cout<<sum(3);
	cout<<sum(0.3f);
	cout<<sum(3,3);
	cout<<sum(3,0.3f);
}
