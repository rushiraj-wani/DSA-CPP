#include<iostream>
using namespace std;

/*
        *       -> 1  
       * *      -> 2
      * _ *     -> 3
     * _ _ *    -> 4
    * _ _ _ *   -> 5
     * _ _ *    -> 1
      * _ *     -> 2
       * *      -> 3
        *       -> 4
*/

int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin >> n;

    //upper half
    for(int row = 1; row <= n; row++){
        //space
        for(int col = 1; col <= n-row; col++){
            cout<<" ";
        }
        //star
        for(int col = 1; col <= row; col++){
            if(col == 1 || col == row){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    //lower half
    for(int row = 1; row <= n-1; row++){
        //space
        for(int col = 1; col <= row; col++){
            cout<<" ";
        }
        //star
        for(int col = 1; col <= n-row; col++){
            if(col == 1 || col == n-row){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}