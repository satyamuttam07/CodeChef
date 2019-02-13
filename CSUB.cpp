#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string str;
		cin>>str;
		long s = 0;
		for(int i=0;i<n;i++){
			if(str[i] == '1')
				s++;
		}
		s = (s*(s+1))/2;
		cout<<s<<endl;
	}
	return 0;
}