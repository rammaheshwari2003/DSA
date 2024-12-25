#include<iostream>
using namespace std;

void bubble(int arr[],int s){
	int c=0; // counter
	
	for(int i=0; i<s; i++){
		bool f=true;
	for(int j=0; j<s-i-1; j++){
		c++;
	if(arr[j]>arr[j+1]){
		int tmp;
		
		tmp=arr[j+1];
		arr[j+1]=arr[j];
		arr[j]=tmp;
		f=false;
	}
	}
	if(f==true)
	break;
	}
}

int main(){
//int arr[]={1,2,3,5,4};
int arr[]={5,4,3,2,1};

int s=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<s; i++){
	cout<<arr[i]<<"\t";
}
bubble(arr,s);
cout<<"\nAfter sort array : \n";
for(int i=0; i<s; i++){
	cout<<arr[i]<<"\t";
}


return 0;
}
