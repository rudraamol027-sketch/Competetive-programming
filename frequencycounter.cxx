#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec;
    map<int,int> freq;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        vec.push_back(element);
        }
    for(auto val:vec){
        if(freq.find(val)==freq.end()){
            freq[val]=1;
            }else{
                freq[val]+=1;
                }
        }
         
    }