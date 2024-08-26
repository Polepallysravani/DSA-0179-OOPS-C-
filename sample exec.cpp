#include<iostream>
using namespace std;
int main(){
	int i,j;
	cin>>i>>j;
	try{
		if(j==0)
		throw 0;
		else
		cout<<i/j;
	}
	catch(int k){
		cout<<"Integer divisible by 0";
	}
	cout<<"Hai"<<endl;
	return 0;
}