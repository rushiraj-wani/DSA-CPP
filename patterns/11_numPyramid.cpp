#include<iostream>
using namespace std;

/* n = 5
        1      -> 1
       2 2     -> 2
      3 3 3    -> 3
     4 4 4 4   -> 4
    5 5 5 5 5  -> 5
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
            cout<<row<<" ";
        }
        cout<<endl;
    }

    return 0;
}