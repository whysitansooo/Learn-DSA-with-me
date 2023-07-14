//? MACROS

// #include <iostream> //! Preprocesor director
// using namespace std;
// #define PI 3.14 
// int main(){

//     int r;
//     cin>>r;
//     cout<<r*PI;
// }

//? GLOBAL

// #include <iostream>
// using namespace std;

// int a;


// void f(){
//     cout<<a <<endl;
//     a++;
// }

// int main(){
//     a = 10;
//     f();
//     cout<<a<<endl;

// }

//* Kabhi use mat karna bekar chiz hai


//? Predict output
// #include <iostream>
// using namespace std;

// #define MULTIPLY(a, b) a*b

// int main(){
//     cout << MULTIPLY(2+3, 3+5);
//     return 0;
// }

#include <iostream>
using namespace std;

#define SQUARE(x) x*x

int main(){
    int x = 36 / SQUARE(6);
    cout << x;

    return 0;
}