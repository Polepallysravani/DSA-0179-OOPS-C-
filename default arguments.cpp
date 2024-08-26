#include<iostream>
using namespace std;
void add(int x, int y, int m=0, int n=20){
	int s;
	s=x+y+m+n;
	cout<<s;
}
int main(){
	add(10,20,30,40);
	add(5,15);
	add(100,200,300);
}