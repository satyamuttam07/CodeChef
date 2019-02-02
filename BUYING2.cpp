#include<bits/stdc++.h>
using namespace std;
int check(int ar[],int diff,int n){
	for(int i=0;i<n;i++){
		if(diff >= ar[i]){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,sum=0;
		cin>>n>>x;
		int ar[n];
		for(int i=0;i<n;i++){
			cin>>ar[i];
			sum += ar[i];
		}
		int diff = sum%x;
		if(check(ar,diff,n)){
			cout<<sum/x<<endl;
		}else{
			cout<<"-1\n";
		}
	}
	return 0;
}