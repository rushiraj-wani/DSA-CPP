#include<iostream>
using namespace std;

/* n = 5
    *
    * *
    * * *
    * * * *
    * * * * *
*/

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin >> n;

    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}