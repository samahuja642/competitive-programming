#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    string stones;
    cin>>stones;
    int remove=0;
    for(int i=0;i<n;i++){
        auto temp=stones[i];
        int count=-1;
        while(stones[i]==temp){
            count++;
            i++;
        }
        i--;
        remove+=count;
    }
    cout<<remove<<endl;
    return 0;
}