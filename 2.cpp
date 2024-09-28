#include<iostream>
using namespace std;
int  main(){
    int a,b,c,sum=0;
    cout<<"Enter the first number: ";
    cin>>a;
    cin>>b;
    cin>>c;
    sum =a+b+c;
    if(sum==180){
        cout<<"The tiangle is valid";
    }
    else{
        cout<<"not";
    }
    return 0;
}