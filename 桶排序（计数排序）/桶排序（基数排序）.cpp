#include<iostream>
using namespace std;
int main(){
    int n,max,min;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    min=arr[0];
	max=arr[0];
    for(int i=1;i<n;i++){
    	cin>>arr[i];
    	if(arr[i]>max){
    		max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	int length=max-min+1;
    int t[length];
    for(int i=0;i<length;i++){
    	t[i]=0;
	}
    for(int i=0;i<n;i++){
        t[arr[i]-min]+=1;
    }
    for(int i=0;i<length;i++){
        for(int j=0;j<t[i];j++){
            cout<<i+min<<" ";
        }
    }
    return 0;
}
