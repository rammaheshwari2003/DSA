#include<iostream>
#include<string>

#include<algorithm>
using namespace std;

int main(){
		string name="cybrom";
//		int arr[5]={3,1,4,2,6};
//		for(auto p:name){    // one by one read - auto (key word)
//			cour<<p;
//		}
		
		
		sort(name.begin(), name.end());
		cout<<name;


return 0;
}
