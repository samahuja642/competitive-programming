#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        string str;
        int days;
        cin>>str>>days;
        map<string,int>day;
        day["wednesday"]=2;
        day["thursday"]=3;
        day["friday"]=4;
        day["saturday"]=5;
        day["sunday"]=6;
        day["monday"]=0;
        day["tuesday"]=1;
        for(map<string,int>::iterator itr=day.begin();itr!=day.end();itr++){
            if(((days%7+day[str])%7)==itr->second){
                cout<<itr->first<<endl;
                break;
            }
        }
    }
    return 0;
}