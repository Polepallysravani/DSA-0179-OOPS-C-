#include<iostream>
using namespace std;
class base{
	public:
		void print()
		{
			cout<<"Base class"<<endl;
		}
};
class derived: public base
{
	public:
		void print(){
			cout<<"derived class"<<endl;
		}
};
int main(){
	base *bptr, b1;
	derived d1;
	bptr->print();
	bptr=&d1;
	bptr->print();
}