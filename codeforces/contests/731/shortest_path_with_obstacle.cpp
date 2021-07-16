#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int xa,ya;
        cin>>xa>>ya;
        int xb,yb;
        cin>>xb>>yb;
        int xc,yc;
        cin>>xc>>yc;
        int result;
        if(xa==xb){
            if(xc==xa&&(((yc>=yb)&&(yc<=ya))||((yc>=ya)&&(yc<=yb)))){
                result=abs(yb-ya)+2;
            }
            else{
                result=abs(yb-ya);
            }
        }
        else if(ya==yb){
            if(yc==ya&&(((xc>=xb)&&(xc<=xa))||((xc>=xa)&&(xc<=xb)))){
                result=abs(xb-xa)+2;
            }
            else{
                result=abs(xb-xa);
            }
        }
        else{
            result=abs(xb-xa)+abs(yb-ya);
        }
        cout<<result<<endl;
    }
    return 0;
}