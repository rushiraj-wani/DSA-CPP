#include<iostream>
using namespace std;

/* n = 5
    * * * * *   -> 1
    * * * *     -> 2
    * * *       -> 3
    * *         -> 4
    *           -> 5
*/

int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin >> n;

    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= n-row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}