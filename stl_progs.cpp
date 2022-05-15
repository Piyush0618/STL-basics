#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(5);
    vec.push_back(4);
    vec.push_back(3);
    for(auto it : vec){
        cout<<it<<endl;
    }

    cout<<"Two dimension Array"<<endl;
    cout<<"Enter the dimension of array";
    int n,m;
    cin>>n>>m;
    vector<vector<int>> twoD;
    vector <int> k;
    for(int i=0;i<n;i++){
        for (int j=0,x;j<m;j++){
            cin>>x;
            k.push_back(x);
        }
        twoD.push_back(k);
        k.clear();
    }
    cout<<"Printing 2D array"<<endl;
    for(auto it : twoD){
        for(auto it2 : it){
            cout<<it2<<" ";
        }
        cout<<endl;
    }
}