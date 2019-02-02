#include<bits/stdc++.h>
using namespace std;
int find(int ar[],int sum,int n){
	if(sum == 0){
		return 1;
	}
	if( n == 0){
		return 0;
	}
	if(sum < ar[n-1]){
		return find(ar,sum,n-1);
	}
	return find(ar,sum,n-1) || find(ar,sum - ar[n-1],n-1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,sum;
		cin>>n>>sum;
		int ar[n];
		for(int i=0;i<n;i++)
			cin>>ar[i];
		if(find(ar,sum,n)){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}
	}
	return 0;
}