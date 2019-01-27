#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,n,num,k = 0;
	cin>>a>>b;
	n = a - b;
	num = n;
	while(n){
		k++;
		n = n/10;
	}
	int ar[k];
	for(int i=k-1;i>=0;i--){
		ar[i] = num%10;
		num = num/10;
	}
	if(ar[0] == 9){
		ar[0]--;
	}else{
		ar[0]++;
	}
	for(int i=0;i<k;i++){
		cout<<ar[i];
	}
	cout<<endl;
	return 0;
}