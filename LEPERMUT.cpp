#include<bits/stdc++.h>
using namespace std;
void merging(int ar[], int m, int mid, int n, int &count){
	int i, j, k = 0;
	i = m;
	j = mid; 
	int temp[n - m + 1];
	int local_inversion = 0;
	while(i < mid && j < n){
		if(ar[i] < ar[j]){
			temp[k++] = ar[i++];
		}else{
			local_inversion += mid - i;
			temp[k++] = ar[j++];
		}
	}
	if(i == mid){
		for(;j<n;j++){
			temp[k++] = ar[j];
		}
	}else if(j == n){
		for(;i<mid;i++){
			temp[k++] = ar[i];
		}
	}
	for(i=0;i<k;i++){
		ar[m + i] = temp[i];
	}
	count += local_inversion;
}
void merge_sort(int ar[],int m, int n, int &count){
	if(m < n - 1){
		int mid = (n + m)/2;
		merge_sort(ar,m,mid,count);
		merge_sort(ar,mid,n,count);
		merging(ar, m, mid, n,count);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, local_inversion = 0;
		cin>>n;
		int ar[n+1];
		for(int i=0;i<n;i++)
			cin>>ar[i];
		for(int i=0;i<n-1;i++){
			if(ar[i] > ar[i+1])
				local_inversion++;
		}
		// cout<<endl;
		// merging(ar,0,n/2,n);
		int count = 0;
		merge_sort(ar, 0, n,count);
		// for(int i=0;i<n;i++){
		// 	cout<<ar[i]<<" ";
		// }
		// cout<<endl;
		
		// cout<<count<<endl;
		if(count == local_inversion){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
			}
	return 0;
}