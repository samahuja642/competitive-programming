#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    int time=t;
    while(t--){
        string str;
        cin>>str;
        int alpha[26]={0};
        for(int i=0;i<str.length();i++){
            alpha[str[i]-'A']++;
        }
        int maxcons=0,maxvowels=0,sumvowels=0,sumcons=0;
        for(int i=0;i<26;i++){
            if(i==0||i==4||i==8||i==14||i==20){
                maxvowels = max(maxvowels,alpha[i]); 
                sumvowels+=alpha[i];
            }
            else{
                maxcons = max(maxcons,alpha[i]);
                sumcons+=alpha[i];
            }
        }
        int time1=0,time2=0;
        time1 = ((2*(sumcons-maxcons))+sumvowels);
        time2 = ((2*(sumvowels-maxvowels))+sumcons);
        cout<<"Case #"<<time-t<<": "<<min(time1,time2)<<endl;
    }
    return 0;
}