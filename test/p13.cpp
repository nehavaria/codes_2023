#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    
    int arr[5] = {1,2,3,4,5};
    
    int ans[5];
    int cnt=0;
    for(int i=0; i<5; i++){
        if(i>=n){
            ans[cnt] = arr[i];
            cnt++;
        }
    }
    for(int i=0; i<n; i++){
        ans[cnt] = arr[i];
        cnt++;
    }
    cout<<"Ans array is : "<<endl;
    for(int i=0; i<5; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}