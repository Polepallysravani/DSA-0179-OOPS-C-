#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5},p,i,x;
	int n=5;
	cout << "Enter position and value : " << endl;
	cin >> p >> x;	
	for(i=n-1;i>=p-1;i--){
        a[i+1] = a[i];
    }
	a[p-1]=x;
	for (i=0;i<=n;i++){   
        cout << a[i] << " ";
    }
}