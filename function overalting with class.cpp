#include<iostream>
using namespace std;
class sample{
	private:
		int a;
		double f;
		char c;
		string s;
		public:
			void disp(int a)
			{
				cout<<a<<endl;
			}
			void disp(char c){
				cout<<c<<endl;
			}
			void disp(double f){
				cout<<f<<endl;
			}
			void disp(string s){
				cout<<s<<endl;
			}
};
int main(){
	sample s;
	s.disp(5);
	s.disp(5.5);
	s.disp('a');
	s.disp("welcome");
}
