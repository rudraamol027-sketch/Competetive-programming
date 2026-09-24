#include <iostream>
#include <string>
using namespace std;
int main(){
    int x=0;
    int t;
    cin>>t;
    string ar[2]={"x++","++x"};
    for(int i=0;i<t;i++){
        string user;
        cin>>user;
        if(find(ar,ar+2,user)==ar+2){
            x--;
            }else{
                x++;
                }
        }
     cout<<x<<endl;   
    }