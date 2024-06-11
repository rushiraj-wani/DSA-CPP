#include<iostream>
using namespace std;

/* n = 3
    * * * * *
    *       *
    * * * * *
*/

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin >> n;

    for(int row = 1; row <= n; row++){
        //1st and last row
        if(row == 1 || row == n){
            for(int col = 1; col <= n+2; col++){
                cout<<"* ";
            }
        }
        //remaining middle rows
        else{
            //1st star
            cout<<"* ";

            //space
            for(int col = 1; col <= n; col++){
                cout<<"  ";
            }

            //last star
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}