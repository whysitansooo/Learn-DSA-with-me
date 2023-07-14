// #include <iostream>
// using namespace std;
// int main()
// {
//     int *p = new int;
//     *p = 10;
//     cout<<*p<<endl;

//     double* pd = new double;
//     char* c = new char;


//     //!* Declaring a array
//     int *arr = new int[50];
    
//     //! How to take array size by user input
//     int n;

//     cout<<"Enter number of element: "<<endl;
//     cin>>n;
//     int *arr2 = new int[n];
//     for(int i=0;i<n;i++){
//         cin>>arr2[i];
//     }
//     int max=-1;
//     for(int i=0;i<n;i++){
//         if(arr2[i]>max) max = arr2[i];
//     }
//     cout<<max<<endl;

// }

#include <iostream>
using namespace std;
int main()
{
    int* p = new int;
    *p = 10;
    cout<<*p<<endl;
    delete p; //* Single element delete
    cout<<*p<<endl;

    p = new int[100];
    delete[]p; //* To delete a array
}