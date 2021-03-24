#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,T1,T2,T3;
    // cout << "Enter total number of pizzas: ";
    cin >> m;
    // cout << "Enter number of each teams: ";
    cin >> T1 >> T2 >> T3; 
    // cout << "\n";
    int row[m];

    vector<vector<string>> vec(m);

    for(int i = 0; i < m; i++)
    { 
        // cout << "Enter number of ingredients of pizza " << i << ": ";
        cin >> row[i];
        int col = row[i];
        vec[i] = vector<string>(col);
        // cout << "Enter the ingredients of pizza "<< i << ": ";
        for(int j = 0; j < col; j++){
            cin >> vec[i][j];
        }
        // cout << "\n\n";
    }cout << vec[1][2];
    return 0;
}