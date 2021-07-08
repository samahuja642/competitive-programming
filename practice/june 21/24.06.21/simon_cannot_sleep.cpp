#include<iostream>
#include<cstring>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string t;
    cin>>t;
    string hh;
    string mm; 
    for(int i=0;i<2;i++){
        hh+=t[i];
    }
    for(int i=3;i<5;i++){
        mm+=t[i];
    }
    float h=float(stoi(hh));
    float m=float(stoi(mm));
    int answer=h;
    float bigger=(h>=12?((h-12)*5):(h*5))+((m/2)/5);
    if(bigger<=m){
        answer++;
    }
    cout<<answer<<endl;
    return 0;
}