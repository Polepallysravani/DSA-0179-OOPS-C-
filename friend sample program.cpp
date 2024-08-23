#include<iostream>
using namespace std;
class big{
	private:
		int a;
		public:
			big(int x){
				a=x;
			}
			friend int max(big,big);
};
int max(big b1, big b2)
{
	if(b1.a > b2.a)
	return b1.a;
	else
	return b2.a;
}
int main(){
	big b1(10), b2(20);
	cout<<max(b1,b2);
	return 0;
}