#include<iostream>
using namespace std;
class A{
	public:
		int x;
		protected:
			int y;
			private:
				int z;
		
};
class B: public A{
	public:
		int x;
		protected:
			int y;
			private:
				not accessible;
};
class C: protected A{
	public:
		int x;
		protected:
			int y;
			private:
				not accessible;
}
class D: private A{
	public:
		not accessible:
			protected:
				int y;
				private:
					int z;
};
