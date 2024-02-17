#include<iostream>
using namespace std;
int main()
{
	string str;
	cout<<"Enter the String: ";
	cin>>str;
	str.push_back('z');
	cout<<"String: "<<str<<endl;
	str.pop_back();
	cout<<"String: "<<str<<endl;
	
}