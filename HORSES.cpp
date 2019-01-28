#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,ar[5000],max=INT_MAX;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>ar[i];
		sort(ar,ar+n);
		for(int i=0;i<n-1;i++){
			int temp = abs(ar[i] - ar[i+1]);
			if(max > temp)
				max = temp;
		}
		cout<<max<<endl;
	}
	return 0;
}