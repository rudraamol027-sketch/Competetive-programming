#include <iostream>
#include <string>
using namespace std;
int main(){
    string user;
    cin>>user;
    int n = user.size();
    int count =1;
    int freq = 1;
    for(int i=0;i<n-1;i++){
        if(user[i]==user[i+1]){
            count+=1;
            }else{
                count =1;
                }
        freq = max(count,freq);           
        }
    cout<<freq<<endl;    
    }