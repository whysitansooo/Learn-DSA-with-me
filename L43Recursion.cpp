//? 1 to N

// #include <iostream>
// using namespace std;

// void print1ton(int n){
//     if(n==0){
//         return;
//     }
//     print1ton(n-1);
//     cout<<n<<" ";
    
// }

// int main()
// {
//     int n; cin>>n;
//     print1ton(n);
// }


//! Factorial using recursion

// #include <iostream>
// using namespace std;

// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     int output = factorial(n-1);
//     return n*output;
// }

// int main()
// {
//     int n; cin>>n;
//     int ans = factorial(n);
//     cout<<ans;
// }


//? Sum of numbers 1 to n

// #include <iostream>
// using namespace std;
// int sum(int n){

//     if(n==0){
//         return 0;
//     }

//     int pong = sum(n-1)+n;
//     return pong;
    

    

// }
// int main()

// {
//     int n; cin>>n;
//     int ans = sum(n);
//     cout<<ans;
// }

//? Number of Digits
// #include <iostream>
// using namespace std;

// int countDigits(int n){
//     if(n<10){
//         return 1;
//     }
//     else return 1+countDigits(n/10);

// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<countDigits(n);

// }



