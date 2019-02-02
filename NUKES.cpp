#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,n,k,t,i=0;
	cin>>a>>n>>k;
	int ar[k] = {0};
	n++;
	t = k;
	while(t--){
		ar[i++] = a%n;
		a = a/n;
	}
	for(i=0;i<k;i++)
		cout<<ar[i]<<" ";
	cout<<endl;
	return 0;
}