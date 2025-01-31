// string / char
#include<iostream>
#include<string>
using namespace std;

int main(){
	// char
/*	int n;
	cout<<"Enter size of string\n";
	cin>>n;
	cin.ignore();
	char c[n];
	
	cout<<"Enter a name: ";
	cin.getline(c,n);
	cout<<"Name = "<<c;
	*/
	
	// string
	
/*	string name;
//	char c[9];      // ----
	cout<<"Enter name: ";
//	cin>>name;   // without space
	getline(cin, name); // with space
//	cin.getline(variable, size);   // character data type  ----
	
	cout<<"Name = "<<name;*/
	
			
			
			//push back
			string nm="cybrom";
			cout<<nm;
//			nm.push_back('b'); // last character add
			cout<<"\n"<<nm;
			
			cout<<"\n After delete\n"<<nm;
			nm.pop_back();
			cout<<"\n After delete "<<nm;
			
return 0;
}
