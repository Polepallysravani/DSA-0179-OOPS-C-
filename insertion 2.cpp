#include<iostream>
using namespace std;
int main(){
	int a[]={1,2,3,4,5};
	int p=3;
	int x,i;
	cout<<"Enter the element"<<endl;
	cin>>x;
	for(int i=5; i>p-1; i--){
		a[i]=a[i-1];
	}
	a[i]=x;
	for(i=0;i<6;i++)
	cout<<a[i];
	return 0;
}