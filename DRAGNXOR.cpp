#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;
		int count = 0;
		int result = 0;
		while(a){
			if(a%2==1)
				count++;
			a  = a/2;
		}
		while(b){
			if(b%2==1)
				count++;
			b = b/2;
		}
		if(n >= count){
			while(count--){
				result = result<<1;
				result++;
				n--;
			}
			while(n--){
				result = result<<1;
			}
		}else{
			count = count - 2*(count - n);
			while(count--){
				result = result<<1;
				result++;
				n--;
			}
			while(n--){
				result = result<<1;
			}
		}
		cout<<result<<endl;
	}
	return 0;
}