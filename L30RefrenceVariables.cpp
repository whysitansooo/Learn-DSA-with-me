// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 10;
//     int&  j = i; //* J is now a reference variable, abb ye sab i ke memory pe store karega
//     i++;
//     cout<<j<<endl;
//     j++;
//     cout<<i<<endl;

//     int k = 100;
//     j = k;
//     cout<<i<<endl;
// }

//! Use of this shit in calling functions

// #include <iostream>
// using namespace std;

// void increment(int &x){
//     x++;
// }



// int main(){
//     int i = 10;
//     increment(i);
//     cout<<i;

    
// }

//! So cool

//? What is output?

// #include <iostream>
// using namespace std;

// void func(int p){
//     cout<<p<<" ";
// }

// int main()
// {
//     int i=10;
//     int &p = i;
//     func(p++);
//     cout<<i;
// }

#include <iostream>
using namespace std;

void func(int x,int &j,int  y){
    x++;
    j++;
    y++;
}

int main()
{
    int i=10;
    int j=6;
    int &p = i;
    func(i,j,p);
    cout<<i<<" "<<j<<" "<<p;
}