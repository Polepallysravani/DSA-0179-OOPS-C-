#include<iostream>
using namespace std;
void swap (int *x, int *y){
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
int main(){
	int x=10, y=20;
	cout<<"before swapping"<<endl;
	cout<<x<<y<<endl;
	swap(&x,&y);
	cout<<"After swapping"<<endl;
	cout<<x<<y<<endl;
}