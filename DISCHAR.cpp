#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while( t-- ){
		string str;
		int hash[26] = {0};
		cin>>str;
		int n = str.size();
		int i = 0, j = 0, max = 0;
		while(j < n){
			if(!hash[str[j] - 'a']){
				hash[str[j] - 'a']++;
				j++;
			}else{
				if(max < j - i){
					max = j - i;
				}
				while(i < j){
					if(str[i] == str[j]){
						i++;
						break;
					}
					hash[str[i] - 'a'] = 0;
					i++;
				}
				hash[str[j] - 'a']++;
				j++;
			}
		}
		if(max < j - i)
			max = j - i;
		cout<<max<<endl;
	}
	return 0;
}