#include<iostream>
using namespace std;
class base{
	public:
		virtual void print()
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
	base *bptr;
	derived d1;
	bptr=&d1;
	bptr->print();
	return 0;
}