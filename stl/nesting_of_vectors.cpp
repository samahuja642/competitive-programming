#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>>v={{1,2},{2,3}};
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    vector<int>a[12];//vector has rows fixed but columns are dynamic in size means it is also like 2d array but with columns dynamic
    vector<vector<int>>vec;//2d array with both rows and columns dynamic
    int n;
    cout<<"enter number of columns:";
    cin>>n;
    for(int j=0;j<n;j++){
        vector<int>temp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        vec.push_back(temp);
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            cout<<vec[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}