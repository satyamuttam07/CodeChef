#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s=0;
		cin>>n;
		while(n){
			s += n/5;
			n = n/5;
		}
		cout<<s<<endl;
	}
	return 0;
}