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
}

using namespace cybrom;
//using namespace ::cybrom;
int main(){
		show();
		good();

return 0;
}
