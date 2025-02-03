#include<iostream>
#include<vector>

using namespace std;

int main(){
		vector<int>t(3);   // vector size fix
		
		
		vector<string>s{"one", "two","three"}; // static
		for(auto p:s){
			cout<<p<<"\n";
		}
		cout<<"\n";
		
		vector<int>v;
		v.push_back(10);  // dynamic
		v.push_back(4);
		v.push_back(7);				
		v.push_back(8);
		v.push_back(56);
		v[1]=900;   // edit
		cout<<"size of v="<<v.size()<<"\n";
		cout<<"\n Capacity of v = "<<v.capacity();
		cout<<v.size()<<"\n";	
		for(auto p:v){
			cout<<p<<"\t";
		}	
		
		
		v.pop_back();
		cout<<"\n Delete\n";
		for(auto p:v){
			cout<<p<<"\t";
		}
		
		
		vector<int>t(3);   // vector size fix
		t[0]=23;
		t[1]=56;
		t[2]=2;
		t.push_back(10);
		t.push_back(50);
		t.push_back(90);
		for(auto p:t){
			cout<<k<<"\t";
		}

		
		
	
return 0;
}
