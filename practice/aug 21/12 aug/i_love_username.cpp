#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    int score[n];
    int count = 0;
    int best = 0,worst = 0 ;
    for(int i=0;i<n;i++){
        cin>>score[i];
        if(i!=0){
            if(score[i]>best){
                count++;
                best = score[i];
            }
            else if(score[i]<worst){
                count++;
                worst = score[i];
            }
        }
        else{
            best = score[i];
            worst = score[i];
        }
    }
    cout<<count<<endl;
    return 0;
}