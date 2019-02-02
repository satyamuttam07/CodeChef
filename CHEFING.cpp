#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int hash[26]={0};
		cin>>n;
		for(int i=0;i<n;i++){
			string str;
			cin>>str;
			int len = str.size();
			for(int j=0;j<len;j++){
				hash[str[j] - 'a']++;
			}
		}
		int m=0;
		for(int i=0;i<26;i++){
			if(hash[i] == n){
				m++;
			}
		}
		cout<<m<<endl;
	}
	return 0;
}