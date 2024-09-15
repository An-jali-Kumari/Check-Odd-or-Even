#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Check number is Even or Odd\n";
	cout<<"\nEnter number to check:";
	cin>>a;
	if(a==0)
	cout<<"\n Please enter another number except 0";
	else{if(a%2==0)
	cout<<"\n"<<a<<"is a Even number";
	else cout<<"\n"<<a<<"is a Odd number";
	}
}
