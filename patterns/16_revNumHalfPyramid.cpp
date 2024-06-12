#include<iostream>
using namespace std;

/* n = 5
    5 4 3 2 1
    5 4 3 2
    5 4 3 
    5 4 
    5 
 */

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin >> n;

    for(int row = 1; row <= n; row++){
        for(int col = 5; col >= row; col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }

    return 0;
}