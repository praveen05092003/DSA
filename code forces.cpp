#include<iostream>
using namespace std;
int main(){
    int t,n,x,y;
    cin>>t;
    while(t--){
        int x=0;
        int y=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int j=0;j<n;j++){
            if(arr[j]%2==0){
                x=x+arr[j];
            }
            else{
                y=y+arr[j];
            }
        }
        if(x>y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}