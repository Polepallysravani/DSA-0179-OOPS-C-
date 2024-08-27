#include<iostream>
using namespace std;
void swap (int x, inty){
	int t;
	t = x;
	x = y;
	y = t;
}
int main(){
	int i=10, j=20;
	cout<<"before swapping"<<endl;
	cout<<i<<j<<endl;
	swap(i,j);
	cout<<"After swapping"<<endl;
	cout<<i<<j<<endl;
}