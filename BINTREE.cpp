#include<bits/stc++.h>
using namespace std;
int tree(int n, int m){
	if(n == m)
		return 0;
	if(n > m)
		return 1 + tree(n/2, m);
	else
		return 1 + tree(n, m/2);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		cout<<tree(n,m)<<endl;
	}
	return 0;
}