#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,temp,m;
		cin>>n;
		int ar[100];
		for(int i=0;i<n;i++){
			cin>>ar[i];
		}
		cin>>m;
		temp = ar[m-1];
		m = 1;
		for(int i=0;i<n;i++){
			if(ar[i] < temp){
				m++;
			}
		}
		cout<<m<<endl;
	}
	return 0;
}