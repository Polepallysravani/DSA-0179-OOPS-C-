#include<iostream>
using namespace std;
class IE{
	protected:
		int imarks;
		public:
		void get(){
			cout<<"Enter internal marks"<<endl;
			cin>>imarks;
			}
};
class EX{
	protected:
		int extmarks;
		public:
			void get(){
				cout<<"Enter External marks"<<endl;
				cin>>extmarks;
			}
};
int main(){
	IE int1, int2;
	EX ext1, ext2;
	int1.get();
	int2.get();
	ext1.get();
	ext2.get();
	
}