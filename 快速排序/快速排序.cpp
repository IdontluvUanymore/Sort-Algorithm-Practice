#include<bits/stdc++.h>
using namespace std;
int a[2333];
void quick_sort(int l,int r){
	int key=a[(l+r)/2];
	int i=l,j=r;
	while(i<=j){
		while(a[i]<key){
			i+=1;
		}
		while(a[j]>key){
			j-=1;
		}
		if(i<=j){
			swap(a[i],a[j]);
			i+=1;
			j-=1;
		}
	}
	if(j>l){
		quick_sort(l,j);
	}
	if(i<r){
		quick_sort(i,r);
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	quick_sort(0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
