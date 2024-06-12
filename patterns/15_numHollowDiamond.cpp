#include<iostream>
using namespace std;

/* n = 5
        1      -> 1
       1 2     -> 2
      1   3    -> 3
     1     4   -> 4
    1       5  -> 5
     1     4   -> 1
      1   3    -> 2
       1 2     -> 3
        1      -> 4
*/

int main(){
    int n;
    cout<<"Ente value of n: ";
    cin >> n;

    for(int row = 1; row <= n; row++){
        //space
        for(int col = 1; col <= n-row; col++){
            cout<<" ";
        }
        //num
        for(int col = 1; col <= row; col++){
            if(col == 1 || col == row){
                cout<<col<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int row = 1; row <= n-1; row++){
        //space
        for(int col = 1; col <= row; col++){
            cout<<" ";
        }
        //num
        for(int col = 1; col <= n-row; col++){
            if(col == 1 || col == n-row){
                cout<<col<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}