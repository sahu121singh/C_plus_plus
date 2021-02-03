#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int arr[] = {1, 1, 2, 3, 5, 6, 7, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i < n; i++){
        v.push_back(arr[i]);
    }
    
    vector<int> :: iterator it;
    
    for(it = v.begin(); it != v.end(); it++){
        cout<<*it<<endl;
    }
    
    cout<<v[0]<<" "<<v[4]<<endl;
    
    
    if(find(v.begin(), v.end(), 5) != v.end()){
        cout<<"finded"<<endl;
    }
    
    if(find(v.begin(), v.end(), 8) != v.end()){
        cout<<"finded"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    
    cout<<v.size()<<endl;
    
    
    //1. vectorname.erase(position)
    //2. vectorname.erase(startingposition, endingposition)
    
    //m.erase(5);
    it = v.begin() + 3;        //    start_element + position_of_element_from_start
    v.erase(it);
    
    
    cout<<v.size()<<endl;
    for(it = v.begin(); it != v.end(); it++){
        cout<<*it<<endl;
    }
    
    /*
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
    */
    
    
    vector<int> vect[10];   // --> vector of 10 rows but the column size may or may not be same (depends on insertion)
}