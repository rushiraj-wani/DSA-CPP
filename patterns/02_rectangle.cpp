#include<iostream>
using namespace std;

/* n = 3
    * * * * *
    * * * * *
    * * * * * 
*/

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin >> n;

    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= n+2; col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}