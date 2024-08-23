#include<iostream>
using namespace std;
class complex{
	private:
		int r,i;
		public:
			complex (int m, int n){
				r=m;
				i=n;
			}
			complex()
			{
				r=0;
				i=0;
			}
			complex operator+(complex t){
				complex temp;
				temp.r=r+t.r;
				temp.i=i+t.i;
				return temp;
			}
			void disp(){
			cout<<r<<"+j"<<i<<endl;
		}
			
};
int main() {
	complex c1(4,5), c2(3,3), c3;
	c3=c1+c2;
	c1.disp();
	c2.disp();
	c3.disp();
}
