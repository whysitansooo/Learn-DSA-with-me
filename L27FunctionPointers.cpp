// #include <iostream>
// using namespace std;

// void print(int *p){
//     cout<<*p<<endl;
// }

// void incrementPointer(int*p){
//     p = p+1;
// }

// void increment(int* p){
//     (*p)++;
// }

// int main()
// {
//     int i = 10;
//     int *p = &i;
//     print(p);

//     cout<<p<<endl;
//     incrementPointer(p);
//     cout<<p<<endl;

//     cout<<*p<<endl;
//     increment(p);
//     cout<<*p<<endl;

// }

//! Arrays and Pointers and Function

// #include <iostream>
// using namespace std;

// // int sum(int* arr,int size){
// //     int sum = 0;
// //     for(int i=0;i<size;i++){
// //         sum +=arr[i];
// //     }
// //     return sum;
// // }

// // int main(){
// //     int a[5] = {1,2,3,4,5};
// //     int ans = sum(a+3,2);
// //     cout<<ans<<endl;

// //? Pointers Output
// // void changeSign(int *p){
// //     *p = (*p) * - 1;
// // }
// // int main()
// // {
// //     int a = 10;
// //     changeSign(&a);
// //     cout<<a<<endl;
// // }

// //? Pointers Output

// void square(int* p ){
//     int a =10;
//     p = &a;
//     *p = (*p)*(*p);
// }

// int main(){
//     int a = 10;
//     square(&a);
//     cout<<a<<endl;
// }

//? Swap it

#include <iostream>
using namespace std;

void swap(int *a,int *b){
    // int sum = *a+*b;
    // *a = sum - *a;
    // *b = sum - *b;

    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        swap(&a,&b);
        cout<<a<<" "<<b;
        cout<<endl;
    }
}