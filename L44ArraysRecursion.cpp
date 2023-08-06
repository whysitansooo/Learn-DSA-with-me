//? Returning true or false if the array is sorted using recursion


// #include <iostream>
// using namespace std;

// bool check(int arr[],int n){
//     if(n == 0 || n == 1){
//         return true;
//     }
//     if(arr[0] > arr[1]){
//         return false;
//     }
//     bool sorted = check(arr+1,n-1);
//     return sorted;
// }

// int main()
// {
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<check(arr,n);

// }

//? Returning sum of array elements using recursion

// #include <iostream>
// using namespace std;

// int sum(int arr[],int n){
//     if(n<1){
//         return 0;
//     }
//     int pong = arr[n-1];
//     return pong + sum( arr,n-1);

    

// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<sum(arr,n);
// }

//? Check if the number is present in array using recursion

// bool check(int arr[],int n,int x){
//     if(n<1){
//         return false;
//     }
//     if(arr[n-1]==x){
//         return true;
//     }
    
//     return check(arr,n-1,x);
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;cin>>x;
//     cout<<check(arr,n,x);
// }

// //? Finding the element index where it occurs first using recursion

// #include <iostream>
// using namespace std;

// int firstIndex(int arr[],int size,int x){
//     if(size==0){
//         return -1;
//     }
//     if(arr[0]==x){
//         return 0;
//     }
//     int smallArrayFirstIndex = firstIndex(arr+1,size-1,x);
//     if(smallArrayFirstIndex == -1){
//         return -1;
//     }
//     else{
//         return smallArrayFirstIndex+1;
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }
//     int x; cin>>x;
//     cout<<firstIndex(arr,n,x);
// }

// //? Last Index of Number

// #include <iostream>
// using namespace std;

// int lastIndex(int arr[],int size,int x){
//     if(size==0){
//         return -1;
//     }
//     int smallIndex=lastIndex(arr+1,size-1,x);
//     if(smallIndex!=-1){
//         return smallIndex +1;
//     }


//     if(arr[0]==x){
//         return 0;
//     }
//     else return -1;
// }

// int main()
// {
//     int n; cin>>n; int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;cin>>x;
//     cout<<lastIndex(arr,n,x);

// }

//? Checking Palindrome using recursion

// #include <iostream>
// using namespace std;

// bool checkPalindrome(char arr[],int size){
//     if(size==0 || size == 1){
//         return true;
//     }
//     if(arr[0] != arr[size-1]){
//         return false;
//     }
//     bool flag = checkPalindrome(arr+1,size-2);
//     if(flag==false){
//         return false;
//     }
//     else return true;
    
// }

// int main()
// {
//     int n; cin>>n;char arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     cout<<checkPalindrome(arr,n)<<endl;
     
// }

//? Sum of Digits (Recursive)

// #include <iostream>
// using namespace std;

// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     int son = (n%10) + sum(n/10);
    
//     return son;
// }

// int main()
// {
//     int n; cin>>n;
//     cout<<sum(n)<<endl;
// }

//? Multiplication (Recursive)

// #include <iostream>
// using namespace std;
// int pro(int m,int n){
//     if(n==0){
//         return 0;
//     }
//     int product = pro(m ,(n-1));
//     return product+m;
// }
// int main()
// {
//     int m,n; cin>>m>>n;
//     cout<<pro(m,n);
// }

//? Count Zeros
// #include<iostream>
// using namespace std;

// int countZeros(int n){
//     if(n<=9){
//         if(n==0){
//             return 1;
//         }
//         else {
//             return 0;
//         }
//     }
//     int last = n%10;
//     int count = 0;
//     if(last == 0){
//         count = 1;
//     }
//     return count + countZeros(n/10);

// }

// int main()
// {
//     int n; cin>>n;
//     cout<<countZeros(n);
// }

// #include<iostream>
// using namespace std;

// int count = 0;

// void number_of_zeroes(int num){
//     if(num%10 == 0){
//         count++;
//     }
//     if(num/10 >= 1){
//         number_of_zeroes(num/10);
//     }
// }

// int main()
// {
//     int a;
//     scanf("%d", &a);
//     number_of_zeroes(a);
//     printf("%d", count);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5];
//     int *ptr = arr;
//     for(int i = 0; i < 5; i++){
//         *(ptr + i) = i;
//     }
//     for(int i = 0; i < 5; i++){
//         printf("%d\n", *(ptr + i));
//     }
//     return 0;

// }

//? Geometric Sum

// #include <iostream>
// #include <math.h>
// using namespace std;

// double geometricSum(int k) {
//     if(k==0){
//         return 1;
//     }
//     return (1/pow(2,k))+ geometricSum(k-1);

// }

// int main()
// {
//     int k; cin>>k;
//     cout<<geometricSum(k);

// }


#include<iostream>
#include<math.h>
using namespace std;

int counter = 0;

float geometric_sum(int num){
    float g_sum = 0;
    g_sum += 1/pow(2, counter);
    counter++;
    if(counter <= num){
        g_sum += geometric_sum(num);
    }
    
    return g_sum;
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%f", geometric_sum(a));
    return 0;
}