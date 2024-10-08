#include<iostream>
using namespace std;
void sum(int n){
    int k,s=0;   
    while(n>0)
    {
        k=n%10;
        s=s+k;
        n=n/10;
    }
    cout<<"sum of the digits = "<<s<<endl;
}
int main(){
    int n;
cout<<"enter the number"<<endl;
cin>>n;
sum(n);
return 0;
}