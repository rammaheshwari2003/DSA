#include<iostream>
using namespace std;

namespace cybrom{
	// by default public
	void show(){
		cout<<"show()"<<endl;
	}
	void good(){
		cout<<"good()"<<endl;
	}
	
	class bplStream{
		public:
			void bhopal(){
				cout<<"\nBhopal";
			}
	}bplcout;
}

//using namespace cybrom;
int main(){
		cybrom::bplcout.bhopal();	
//		bplcout.bhopal();	

return 0;
}
