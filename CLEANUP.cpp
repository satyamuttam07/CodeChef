#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,ar[1001]={0},temp;
		cin>>n>>m;
		for(int i=0;i<m;i++){
			cin>>temp;
			ar[--temp] = -1;
		}
		temp = 0;
		for(int i=0;i<n;i++){
			if(temp == 0){
				if(ar[i] == 0){
					temp = 1;
				}
			}else{
				if(ar[i] == 0){
					ar[i] = 1;
					temp = 0;
				}
			}
		}
		for(int i=0;i<n;i++){
			if(ar[i] == 0)
				cout<<i+1<<" ";
		}
		cout<<endl;
		for(int i=0;i<n;i++){
			if(ar[i] == 1)
				cout<<i+1<<" ";
		}
		cout<<endl;
	}
	return 0;
}