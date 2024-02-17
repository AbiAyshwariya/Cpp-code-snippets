#include<iostream>
using namespace std;
int main()
{
	string x="Ram";
	string y="Sam";
	cout<<"Before X: "<<x<<endl;
	cout<<"Before X: "<<y<<endl;
	x.swap(y);
	cout<<"After X: "<<x<<endl;
	cout<<"After Y: "<<y<<endl;
	return 0;
	
}