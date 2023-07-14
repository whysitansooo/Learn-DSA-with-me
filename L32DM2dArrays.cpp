//? How to create 2d array dynamically
//? How to delete 2d array memory
//! Learned it from Love Babbar <3


#include <iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;


    int** arr = new int*[row];

    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }

    //* Creation Done

    //! Taking input

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    //! Output
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    //! Releasing 2d array memory

    for(int i=0;i<row;i++){
        delete [] arr[i];
    }

    delete [] arr;
   
    
}