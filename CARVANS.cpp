#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,m=0,max = INT_MAX;
		cin>>n;
		for(int i=0;i<n;i++){
			scanf("%d",&a);
			if(a <= max){
				m++;
				max = a;
			}
		}
		cout<<m<<endl;
	}
	return 0;
}