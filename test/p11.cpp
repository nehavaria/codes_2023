#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x,n;
    cout<<"Enter x : base and n : max exp"<<endl;
    cin>>x>>n;

    if(x<0 || n<0){
        cout<<"Illegal character"<<endl;
    }
    else{
        int sum = 0;
        for(int i=0; i<=n; i++){
            sum = sum + pow(x,i);
        }
        cout<<"Sum is"<<sum<<endl;
    }
}