#include<iostream>
using namespace std;
int main()
{
	int *a,n,i;
	cout<<"no. of elements"<<endl;
	cin>>n;
	a=new int[5];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}