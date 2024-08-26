#include<iostream>
using namespace std;
class base{
	public:
		void print()
		{
			cout<<"Base class"<<endl;
		}
};
class derived1: public base
{
	public:
		void print(){
			cout<<"derived1 class"<<endl;
		}
};
class derived2: public base
{
	public:
		void print(){
			cout<<"derived2 class"<<endl;
		}
	};
int main(){
	base *bptr;
	derived1 d1;
	derived2 d2;
	bptr=&d1;
	bptr->print();
	bptr=&d2;
	bptr->print();
	return 0;
}