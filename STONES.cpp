#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string str,str1;
		int hash[256]={0};
		cin>>str;
		int k = str.size();
		for(int i=0;i<k;i++){
			hash[str[i]]++;
		}
		cin>>str1;
		k = str1.size();
		int m=0;
		for(int i=0;i<k;i++){
			if(hash[str1[i]]){
				m++;
			}
		}
		cout<<m<<endl;
	}
	return 0;
}