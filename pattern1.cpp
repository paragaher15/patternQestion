#include<iostream>
using namespace std;
int main(){
    int col = 9;
    int row = 9;
    for(int row=0;row<col+1;row++){
        for(int col=0;col<row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}


// output--

// *
// **
// ***
// ****
// *****
// ******
// *******
// ********
// *********
