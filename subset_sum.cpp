#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cout<<"Enter the number of values in set : "<<endl;
    cin>>n;
    cout<<"Enter the values in the set"<<endl;
    int arr[n],W;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to check if their is subset whose sum is equal to given input :";
    cin>>W;
    cout<<endl;
    int t[n+1][W+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<W+1;j++){
            if(i==0){
                t[i][j]=0;
            }
            if(j==0){
                t[i][j]=1;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<W+1;j++){
            if(arr[i-1]<=j){
                t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(t[i][W]){
            cout<<"Subset present\n";
            for(int j=W;j>0&&t[i][j];){
                if(!t[i-1][j]){
                    cout<<arr[i-1]<<" ";
                    j=j-arr[i-1];
                    i--;
                }
                else{
                    i--;
                }
            }
            cout<<endl;
            for(int i=0;i<n+1;i++){
                for(int j=0;j<W+1;j++){
                    cout<<t[i][j]<<" ";
                }
                cout<<endl;
            }
            return (0);
        }
    }
    cout<<"not possible";
    
    return (0);

}