#include<iostream>
using namespace std;
int main(){
	base *bptr, b1;
	derived d1;
	bptr->print();
	bptr=&d1;
	bptr->print();
}