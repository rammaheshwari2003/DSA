// Time complexity [ avg - O(n^2) | worst - O(n^2) | best O(n) ].
// Space complexity [ O(1) = constant ].
// Inplace = yes.
// Stable = Yes.
// Approach = Subtract and Conquare.

/* 											Insertion sort / Online Sort														*/ 
#include<iostream>
using namespace std;

void insrt(int arr[], int s){
	for(int i=1; i<s; i++){
		int chotu=i;
		while(chotu>0 && arr[chotu]<arr[chotu-1]){
			int tmp;
			tmp=arr[chotu-1];
			arr[chotu-1]=arr[chotu];
			arr[chotu]=tmp;
			chotu--;
		}
	}
}

int main(){
	int arr[]={3,1,4,2,6};
	int s=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<s; i++){
		cout<<arr[i]<<"\n";
	}
	insrt(arr,s);
	cout<<"\n After Applying Insertion Sort \n";
	for(int i=0; i<s; i++){
		cout<<arr[i]<<"\n";
	}

return 0;
}
