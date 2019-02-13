#include<bits/stdc++.h>
using namespace std;
int main(){
	int N = 30000;
	bool seive[N]={0};
	for(int i=2;i<N;i++){
		if(!seive[i]){
			for(int j=i*2;j<N;j += i){
				seive[j] = 1;
			}
		}
	}
	int k=0;
	int ar[30000];
	for(int i=2;i<N;i++){
		if(!seive[i]){
			ar[k++] = i;
		}
	}

	int t;
	cin>>t;
	while(t > 0){
		int x,y;
		cin>>x>>y;
		int s = 0;
		s = x + y;
		for(int i=0;i<k;i++){
			if(s < ar[i]){
				cout<<ar[i] - s<<endl;
				break;
			}
		}
		t--;
	}
	return 0;
}