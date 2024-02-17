#include<iostream>
using namespace std;
int main()
{
	string firstname="Tutor";
	string secondname="Joes";
	cout<<firstname+" "+secondname<<endl;
	string Fullname=firstname.append(secondname);
	cout<<Fullname<<endl;
	return 0;
}