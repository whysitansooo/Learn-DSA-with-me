//? Binary search using recursion

// #include <iostream>
// using namespace std;

// int BinarySearch(int arr[],int size,int si,int ei,int x){
//     if(si > ei){
//         return -1;
//     }
//     int mid = (si + ei) / 2;
//     if(arr[mid] == x){
//         return mid;
//     }
//     if(arr[mid]>x){
//         ei = mid - 1;
//     }
//     else {
//         si = mid + 1;
//     }

//     return BinarySearch(arr,size,si,ei,x);
// }

// int main()
// {
//     int n; cin>> n; int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int si = 0;
//     int ei = n-1;
//     int x; cin>>x;
//     cout<<BinarySearch(arr,n,si,ei,x);

// }


#include <iostream>
using namespace std;

int binarySearch(int input[], int size, int element) {
   
}



int main()
{
    int n; cin>> n; int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    int x; cin>>x;
    cout<<binarySearch(arr,n,x);

}