#include<iostream>
using namespace std;

		void bubble(int arr[], int l){
			cout<<"Bubble Sort\n";
			
		}
int main(){
		int r;  //r=record
		cout<<"Enter size of array\n";
		cin>>r;
		
		int arr[r];
		if(r>=0 && r<20){
			for(int i=0; i<r; i++){
				cin>>arr[i];
			}
			bubble(arr,r);
		}
		else{
			cout<<"Not valid range";
		}
		

return 0;
}
