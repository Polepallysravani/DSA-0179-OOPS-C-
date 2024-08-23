#include<iostream>
using namespace std;
class sample{
	private:
		int a;
		public:
		//	void get(); 
			void disp();
};
//
void sample :: get()
{
//	cin>>a;
}
//
void sample :: disp()
{
	cout<<a;
}
int main()
{
	sample s1;
	s1.a=10;
//	s1.get();
	s1.disp();
}

