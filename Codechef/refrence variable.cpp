#include<iostream>

using namespace std;


int main()
{
	int a=10;
	int b=20;
	int *p=&b;
	
	int &q=100;
	
	cout<<a<<" "<<b<<" "<<p<<" "<<q;	
}
