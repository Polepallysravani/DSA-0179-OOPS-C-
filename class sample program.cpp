#include<iostream>
using namespace std;
class sample{
	private:
		int a;
		public:
			void get(){
				cin>>a;
			}
			void disp(){
				cout<<a;
			}
};
int main()
{
	sample s1;
	s1.get();
	s1.disp();
}
