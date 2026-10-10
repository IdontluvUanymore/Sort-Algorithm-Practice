#include<bits/stdc++.h>
using namespace std;
int main(){
	while(true){
		int b;
		cin>>b;
		int a[b];
		for(int k=0;k<b;k++){
			cin>>a[k];
		}
		for(int i=1;i<=b;i++){
			for(int j=0;j<=b-i;j++){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
				}
			}
		}
		for(int l=0;l<b;l++){
			cout<<a[l]<<" ";
		}
		cout<<"\n\n";
	}
	return 0;
}
