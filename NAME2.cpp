#include<bits/stdc++.h>
using namespace std;
int dp(string str1, string str2, int n, int m){
	if(n < 0 || m < 0)
		return 0;
	else if(str1[n] == str2[m])
		return 1 + dp(str1,str2,n-1,m-1);
	else
		return max(dp(str1,str2,n-1,m), dp(str1,str2,n,m-1));
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string str1,str2;
		cin>>str1>>str2;
		int result = dp(str1,str2,str1.size() - 1,str2.size() - 1);
		if( str1.size() == result || str2.size() == result )
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}