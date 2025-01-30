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
		
	namespace newmkt{
		void student(){
			cout<<"\nStudent";
		}
	}
}

//using namespace cybrom;
//using namespace cybrom::newmkt;
int main(){
		cybrom::bplcout.bhopal();	
//		bplcout.bhopal();

		cybrom::newmkt::student();
//		student();	

return 0;
}
