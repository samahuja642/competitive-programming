// link -> https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int green , purple;
        cin>>green>>purple;
        int n;
        cin>>n;
        int first[n],second[n];
        int total1=0,total2=0;
        for(int i=0;i<n;i++){
            cin>>first[i];
            total1+=first[i];
            cin>>second[i];
            total2+=second[i];
        }
        int cost;
        if(green>purple){
            cost = green * min(total1,total2) + purple * max(total1,total2); 
        }
        else{
            cost = purple * min(total1,total2) + green * max(total1,total2);
        }
        cout<<cost<<endl;
    }
    return 0;
}