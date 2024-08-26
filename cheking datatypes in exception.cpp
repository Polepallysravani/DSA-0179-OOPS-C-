#include<iostream>
using namespace std;
int main(){
	int i,j;
	cin>>i>>j;
	try{
		if(j==0)
		throw string("sravs");
		else
		cout<<i/j;
	}
	catch(string s){
		cout<<"string divisible by 0";
	}
	cout<<"Hai"<<endl;
	return 1;
}