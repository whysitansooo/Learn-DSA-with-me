// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int r,c;
//     cin>>r>>c;

//     vector<int> ar[r];

//     //* Making the grid
//     for(int i=0;i<r;i++){
//         ar[i].resize(c);
//     }
//     //* Taking Input
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin>>ar[i][j];
//         }
//     }
//     //* Printing Output
//      for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<ar[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     //* Printing Sum of every row

//      for(int i=0;i<r;i++){
//         int sum = 0;
//         for(int j=0;j<c;j++){
//             sum = sum+ar[i][j];
//         }
//         cout<<sum<<endl;
//     }
// }

//? Another way to declare 2d vector

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;

    vector<vector <int>> ar(r,vector<int>(c));

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>ar[i][j];
        }
    }

   for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }


}