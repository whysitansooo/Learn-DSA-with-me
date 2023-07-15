#include <iostream>
using namespace std;
int main()
{
    const int i = 10; //* It can't be changed now
    int const a = 5; //* Can be written like this

    //? Constant reference from a non const int
    int j = 12;
    const int& k = j; //* Reference variable
    //! k++; can't to do that cause it is constant, path constant hota actual storage constant nahi hoti
    j++;
    cout<<k<<endl;

    //? Constant reference from a const int
    int const j2 = 12;
    int const &k2 = j2;
    //! k++; j++; cant do this both path are constant

     //? Reference from a const int

     int const o = 10;
    // int & t = o; //* Cant do this because main path is only read 


}