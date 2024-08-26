#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	cin>>i>>j;
	try
	{
if(j==0)
throw j;
}	
catch(int k)
{cout<<"integer division by 0";
}
	cout<<i/j;
	cout<<"hai";
	return 0;
}