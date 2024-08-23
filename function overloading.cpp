#include<iostream>
using namespace std;
void disp(int a);
void disp(char a);
void disp(double a);
void disp(string a[]);
int main()
{
	disp(5);
	disp('a');
	disp(5.6);
	disp("welcome");
}
void disp(int i)
{
	cout<<i;
}
void disp(char c)
{
	cout<<c;
}
void disp(float f)
{
	cout<<f;
}
void disp(string a[]) {
	cout<<a;
}
