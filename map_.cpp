#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> m;
    int arr[] = {1, 1, 2, 3, 5, 6, 7, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i < n; i++){
        m[arr[i]]++;
    }
    
    map<int, int> :: iterator it;
    
    cout<<"key -> value"<<endl;
    for(it = m.begin(); it != m.end(); it++){
        cout<<it->first<<"   "<<it->second<<endl;
    }
    
    it = m.find(5);
    if(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    it = m.find(8);
    if(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    
    cout<<m.size()<<endl;
    
    //m.erase(5);
    int e = m.erase(5);
    cout<<e<<endl;
    it = m.find(5);
    if(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    cout<<m.empty()<<endl;
    m.clear();
    
    cout<<m.empty()<<endl;
}