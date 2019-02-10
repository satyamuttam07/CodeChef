#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s = n-1;
		int len = sqrt(n);
		for(int i=2;i<=len;i++){
			if(n%i==0){
				if(s > n/i - i){
					s = n/i - i;
				}
			}
		}
		cout<<s<<endl;
	}
	return 0;
}