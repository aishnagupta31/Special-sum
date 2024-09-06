#include<iostream>
using namespace std;
int spsum(int a[],int j,int size){
    int sum=j;
    int k=1;
    while(sum+k <= size){
        sum+=k;
        k++;
    }
    int adder=0;
    for(int i=j;i<sum;i++){
        adder+=a[i];
    }
    return adder;
}
int main(){
    int n,biggest=0;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int sum=spsum(a,i,n);
        if(sum>biggest){
            biggest=sum;
        }
    }
    cout<<biggest<<endl;
}