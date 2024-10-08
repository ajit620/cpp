#include<iostream>
using namespace std;
void fact(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact<<endl;
    }
int main(){
    int n;
    cout<<"enter number"<<endl;
     cin>>n;
    fact(n);
return 0;
}