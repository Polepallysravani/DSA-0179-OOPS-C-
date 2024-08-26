#include<iostream>
using namespace std;
int main(){
	int numerator,denominator,a[]={1,2,3,4},index;
	cout<<"Enter numerator"<<endl;
	cin>>numerator;
	cout<<"Enter the denominator"<<endl;
	cin>>denominator;
	cout<<"Enter the array index"<<endl;
	cin>>index;
	try{
		if(denominator==0)
		throw string("integer/0");
		else
		cout<<numerator/denominator;
		if(index>3)
		throw index;
		else
		cout<<a[index];
	}
	catch (string s){
		cout<<s<<endl;
	}
	catch(int k){
		cout<<"array index of bonds"<<endl;
	}
	cout<<"Hai"<<endl;
	return 0;
}