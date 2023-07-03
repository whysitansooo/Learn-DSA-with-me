#include <iostream>
using namespace std;
int main()
{   

    //! This is only useful in case of arrays

    // int a = 10;
    // int * p = &a;
    // cout<<p<<endl;
    // p++;
    // cout<<p;

    //? Predict Output

    int a = 7;
    int *c = &a;
    c=c+1;
    cout<<a<<" "<<*c<<endl;
}