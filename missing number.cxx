#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i =0;i<n-1;i++)
    {
        int element;
        cin>>element;
        arr[i]=element;
        }
    for(int j=1;j<n+1;j++){
        if(find(arr,arr+n,j)==arr+n){
            cout<<j<<endl;
            }
        }    
    }