#include<iostream>
using namespace std;

template <typename c1, typename c2>
c2 sum(c1 a, c2 b){           
	return a+b;
}


int main(){
	cout<<sum(12.5, 6);
		

return 0;
}
