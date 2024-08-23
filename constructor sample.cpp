#include<iostream>
using namespace std;
class complex{
	private:
		int r,i;
		public:
			complex()
			{
				r=0;
				i=0;
			}
			complex(int m, int n)
			{
				r=m;
				i=n;
			}
			
			complex (complex &t)
			{
				r=t.r;
				i=t.i;
			}
			void disp(){
				cout<<r<<"+j"<<i<<endl;
			}
};
int main()
{
	complex c1,c2,c3(5,6);
	c1.disp();
	c2.disp();
	c3.disp();
	complex c4=c1;
	c4.disp();
}
