#include<bits/stdc++.h>
using namespace std;
// bool test(string str){
// 	int n;
// 	n = str.size();
// 	int c1=0,c2=0;
// 	for(int i=0;i<n;i++){

// 		if(str[i] == '0'){
// 			if(c1 == 0){
// 				c1++;
// 			}else if(c1 == 2){
// 				return 1;
// 			}
// 			if(c2 == 1){
// 				c2++;
// 			}
// 		}else{
// 			if(c1 == 1){
// 				c1++;
// 			}
// 			if(c2 == 0){
// 				c2++;
// 			}else if(c2 == 2){
// 				return 1;
// 			}
// 		}
// 	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		char s;
		int c1=0,c2=0,k=0;
		while(scanf("%c",&s) != EOF){
			if(s == '0'){
				if(c1 == 0){
					c1++;
				}else if(c1 == 2){
					cout<<"Good\n";
					k=1;
					break;
				}
				if(c2 == 1){
					c2++;
				}
			}else{
				if(c1 == 1){
					c1++;
				}
				if(c2 == 0){
					c2++;
				}else if(c2 == 2){
					cout<<"Good\n";
					k=1;
					break;
				}
			}
		}
		if(k==0){
			cout<<"Bad\n";
		}
	}
	return 0;
}