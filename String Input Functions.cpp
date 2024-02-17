#include<iostream>
using namespace std;
int main()
{
	string str;
	cout<<"Enter the String: ";
	cin>>str;
	cout<<"String: "<<str<<endl;
	fflush(stdin);
	cout<<"Enter the String: ";
	getline(cin,str);
	cout<<"String: "<<str<<endl;
	return 0;
}