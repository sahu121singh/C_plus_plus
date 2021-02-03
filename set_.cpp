#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    int arr[] = {1, 1, 2, 3, 5, 6, 7, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i < n; i++){
        s.insert(arr[i]);
    }
    
    set<int> :: iterator it;
    
    for(it = s.begin(); it != s.end(); it++){
        cout<<*it<<endl;
    }
    
    it = s.find(5);
    if(it != s.end()){
        cout<<"finded-> "<<*it<<endl;
    }
    
    it = s.find(8);
    if(it != s.end()){
        cout<<*it<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    
    cout<<s.size()<<endl;
    
    //m.erase(5);
    int e = s.erase(5);
    cout<<e<<endl;
    
    it = s.find(5);
    if(it != s.end()){
        cout<<*it<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    
    int ee = s.erase(8);
    cout<<ee<<endl;
    
    cout<<s.empty()<<endl;
    s.clear();
    
    cout<<s.empty()<<endl;
}