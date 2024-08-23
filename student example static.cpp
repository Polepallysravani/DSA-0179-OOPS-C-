#include<iostream>
using namespace std;
class student{
	private:
		static int count;
		public:
			student(){
				count++;
			}
			static int getcount(){
				return count;
			}
};
int student::count=0;
int main(){
	student s1;
	cout<<"No. of students"<<student::getcount()<<endl;
	student s2;
	cout<<"No.of students"<<student::getcount()<<endl;
	student s3;
	cout<<"No. of students"<<student::getcount()<<endl;
}