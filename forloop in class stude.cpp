#include<iostream>
using namespace std;
class student{
	private:
		int rollnumber;
		double CGPA;
		char Gender;
		string name;
		public:
		    void get()
		    {
		        cout<<"Enter the rollnumber";
		        cin>>rollnumber;
		        cout<<"Enter the cgpa";
		        cin>>CGPA;
		        cout<<"Enter Gender";
		        cin>>Gender;
		        cout<<"Enter the name";
		        cin>>name;
		    }
			void disp()
			{
				cout<<rollnumber<<endl;
		
				cout<<CGPA<<endl;

				cout<<Gender<<endl;

				cout<<name<<endl;
			}
};
int main(){
	student s[10];
	int i;
	for(i=0;i<10;i++){
	s[i].get();
	s[i].disp();
}
}