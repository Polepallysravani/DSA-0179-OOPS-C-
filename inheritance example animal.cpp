#include<iostream>
using namespace std;
class animal{
	public:
		void eat()
		{
			cout<<"I can eat"<<endl;
		}
		void sleep(){
			cout<<"I can sleep"<<endl;
		}
};
class dog: public animal{
	public:
		void bark()
		{
			cout<<"I can bark"<<endl;
		}
};
int main(){
	dog d;
	d.eat();
	d.sleep();
	d.bark();
	
}