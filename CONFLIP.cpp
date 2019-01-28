#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int game;
		cin>>game;
		while(game--){
			int i,n,q;
			cin>>i>>n>>q;
			if(i == 1){
				if(q == 1){
					cout<<n/2<<endl;
				}else{
					cout<<n-n/2<<endl;
				}
			}else{
				if(q == 2){
					cout<<n/2<<endl;
				}else{
					cout<<n-n/2<<endl;
				}
			}
		}
	}
	return 0;
}