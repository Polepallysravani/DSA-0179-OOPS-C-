#include<iostream>
using namespace std;
int main(){
	int i=10,*k;
	k=&i;
	cout<<i<<endl;
	cout<<*(&i)<<endl;
	cout<<&i<<endl;
	cout<<k<<endl;
	cout<<*k<<endl;
}