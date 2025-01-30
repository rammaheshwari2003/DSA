//#include<iostream>
//using namespace std;
//	template<typename cybrom> 
//	class course{
//		cybrom name;
//	public:
//		course(cybrom nm){
//			name=nm;
//		}
//		cybrom show(){
//			return name;
//		}
//	};
//int main(){
////		course <int>obj(123);
//		course <string>obj("Full Stack");
//		cout<<obj.show();
//
//return 0;
//}


#include<iostream>
using namespace std;
	template<typename cybrom> 
	class course{
		cybrom name;
	public:
		cybrom input(cybrom nm){
			name=nm;
		}
		cybrom show(){
			return name;
		}
	};
int main(){
		
		course <string>s;
		s.input("java");
		cout<<s.show();

return 0;
}
