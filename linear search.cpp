#include<iostream>
using namespace std;

int linear(int a[],int val,int n){

    for(int i=0;i<n;i++)
        if(a[i]==val)return i; //return the index if found

    return -1; //return -1 if not found
}


int main(){
    cout<<"Enter the number of elements"<<endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"Enter the value to search"<<endl;
    int val;
    cin>>val;

    if(linear(a,val,n)!=-1)cout<<"Found! The position is "<<linear(a,val,n)+1<<endl;
    else cout<<"NOT FOUND!"<<endl;

}
