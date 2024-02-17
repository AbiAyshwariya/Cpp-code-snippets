#include<iostream>
using namespace std;
namespace name1{
	string name="ram";
	int age=56;	
}
namespace name2{
	string name="ram";
}
int main()
{
	cout<<name2::age;
	return 0;
}