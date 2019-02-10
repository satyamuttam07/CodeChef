#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int N,k,S;
	cin>>N;
	S = (N*(N+1))/2;
	for(int i=0;i<N;i++){
		cin>>k;
		S -= k;
	}
	if(S==0){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}


	return 0;
}