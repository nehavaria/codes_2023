#include<iostream>
using namespace std;

int main(){

    
    bool flag = true;

    while(flag){
        cout<<"------------CALCULATOR--------------------"<<endl;
        cout<<"Select an option"<<endl;
        cout<<"1) addition"<<endl;
        cout<<"2) substraction"<<endl;
        cout<<"3) multiplication"<<endl;
        cout<<"4) Divivson"<<endl;
        cout<<"5) Exit"<<endl;
        cout<<"------------------------------------------"<<endl;
        int n;
        cin>>n;
        
        cout<<"Enter number 1 : ";
        int a;
        cin>>a;
        cout<<"\nEnter number 2 : ";
        int b;
        cin>>b;
        
        switch(n){
            case 1: 
                cout << "Addition of "<<a<<" and "<<b<<" ="<<a+b<<endl; 
                
                break; 
            case 2: 
                cout << "substraction of "<<a<<" and "<<b<<" ="<<a-b<<endl;
                break; 
            case 3: 
                cout << "multiplication of "<<a<<" and "<<b<<" ="<<a*b<<endl; 
                break; 
            case 4: 
                cout << "Divivson : "<<a<<" and "<<b<<" ="<<a/b<<endl;
                break; 
            case 5: 
                cout<<"Goodbye !!!"<<endl;
                flag=false; 
                break; 
        }
         
    }

    return 0;

}