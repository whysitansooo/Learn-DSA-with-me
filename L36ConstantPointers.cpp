// #include <iostream>
// using namespace std;


// int main()
// {
//     int const i=10;
//    // int *p = &i;  //* We can't do this also because main path is read only

//    int const* p = &i;

//    int j=12;
//    int const* p2 = &j;  //* No issues in this, mat kar change tu
//    cout<<j<<endl;
   
 
// }

//! Iske fayede yahi hai ki, mein inhe function mein bhej sakta hu aur woh usko change nahi kar payenge

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i=10;
//     int j=21;
//     int const* p=&i;
//     p=&j;
//     int *const p2 = &i;
// }

//? Predict Output

#include <iostream>
using namespace std;
int main()
{
    const int p=5;
    int const *q = &p;

    p++;
    q++;
    (*q)++;
}