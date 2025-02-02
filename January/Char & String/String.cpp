#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
	
int main(){
				// decending
		string s="welcome";
		sort(s.begin(), s.end(), less<char>());
		sort(s.begin(), s.end(), greater<char>());
		

return 0;
}
