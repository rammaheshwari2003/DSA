#include<iostream>
#include<vector>
#include<iterator>>
using namespace std;

int main(){
	vector<int>v;
	int sizes,n;
	cout<<"Enter sizes : ";
	cin>>sizes;
	for(int i=0; i<sizes; i++){
		cout<<"Enter Value for "<<i<<" index : ";
		cin>>n;
		v.push_back(n);
	}
	cout<<"Result : ";
	for(auto p:v){
		cout<<p<<"\t";
	}

	// --------------- delete (begin +) first and any index ------------------
	vector<int>::iterator it=v.begin();
    v.erase(it+1);
    cout<<"\n After delete result \n";
    for(auto p:v){
        cout<<p<<"\t";
    }
    v.insert(it+2, 999);
    cout<<"\n After insert result ";
    for(auto p:v){
        cout<<p<<"\t";
    }

    /*  ------------ Delete (end - ) -1(-0 null) ----------------------- */
    vector<int>::iterator it=v.end();
    v.erase(it-1);
    cout<<"\n After delete result \n";
    for(auto p:v){
        cout<<p<<"\t";
    }

return 0;
}

