/*													 Selection Sort																 */

// Time complexity [ avg - O(n^2) | worst - O(n^2) | best O(n^2) ].
// Space complexity [ O(1) = constant ].
// Inplace = yes.
// Stable = Yes.
// Approach = Subtract and Conquare.
#include<iostream>
using namespace std;
		void select(int arr[],int s){
			for(int i=0; i<s; i++){
				int min=i;
				for(int j=min+1; j<s; j++){
					if(arr[min]>arr[j])
					min=j;
				}
				if(min!=i){
					int tmp;
					tmp=arr[min];
					arr[min]=arr[i];
					arr[i]=tmp;
				}
			}
				
			}
int main(){
	int arr[]={4,23,1,5,6};
	int s=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<s; i++){
		cout<<arr[i]<<"\n";
	}
	select(arr,s);
	cout<<"\n After Applying Selection Sort \n";
	for(int i=0; i<s; i++){
		cout<<arr[i]<<"\n";
	}
		

return 0;
}
