// #include <iostream>
// using namespace std;

// void increment(int **p){
//   (**p)++;
// }

// int main(){
// //    int i  = 10;
// //    int* p = &i; 
// //    int **p2= &p;

// //    cout<<p<<endl; //* Address of i;
// //    cout<<p2<<endl; //*Address of p;
   
// //    cout<<*p2<<endl; //* Address of i
// //    cout<<**p2<<endl; //* i


// //? Output
// // int a = 10;
// // int *p=&a;
// // int **q = &p;
// // int b= 20;
// // *q = &b;
// // (*p)++;
// // cout<<a<<" "<<b;

// // int a = 100;
// // int *p = &a;
// // int **q = &p;
// // int b = (**q)++ + 4;
// // cout<<a<<" "<<b;

// // int a = 100;
// // int *p = &a;
// // int **q = &p;
// // int b = (**q)++; //* b = 100
// // //* a = 101
// // int *r = *q; //* r = &a;
// // (*r)++; //* a=102
// // cout<<a<<' '<<b;


// //  int num = 10;
// //  int *ptr = &num;
// //  increment(&ptr);
// //  cout << num << endl;

// // int arr[] = {4,5,6,7};
// // int *p = (arr+1);
// // cout<<*arr+9;

//   int numbers[5];
//   int * p;
//   p = numbers; 
//   *p = 10;
//   p = &numbers[2]; 
//   *p = 20;
//   p--; 
//   *p = 30;
//   p = numbers + 3;
//   *p = 40;
//   p = numbers;
//   *(p+4) = 50;
//   for (int n=0; n<5; n++) {
//      cout << numbers[n] << ",";

//   }
// }

//? Modify the array

// #include <iostream>
// using namespace std;

// void modify(int *arr,int n){

//    int min = arr[0];
//    int max = arr[0]; 

//    int *sp,*mp; 
//    sp = &arr[0];
//     mp = &arr[0];
//    for(int i=1;i<n;i++){
   
//       if(arr[i]<min){
//         min = arr[i];
//         sp = &arr[i];

//       }
//       else if(arr[i]>max){
//         max = arr[i];
//         mp = &arr[i];
//       }
//    }
//    *mp = 100;
//    *sp = 0;



// }


// int main(){
//   int n;
//   cin>>n;
//   int arr[n];

//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }

//   modify(arr,n);
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   char arr[20];
//   int i;
//   for(i=0;i<10;i++){
//     *(arr+i) = 65+i;
//   }
//   *(arr+i) = '\0';
//   cout<<arr;
// }

//? Find the highest

// #include <iostream>
// using namespace std;
// int* findmax(int *arr,int n)
// {
//   for(int i=1;i<n;i++){
//     int current = arr[i];
//     int j;
//     for(int j=i-1;j>=0;j--){
//       if(current<arr[j]){
//         arr[j+1] = arr[j];
//       }
//       else break;
//     }
//     arr[j+1] = current;
//   }
//   int *p = &arr[n-1];
//   return p;
  
// }

// int main()
// {
//    int n;
//    cin>>n;
//    int ar[n];
//    for(int i=0;i<n;i++)
//    {
//        cin>>ar[i];
//    }
//    int *ans =findmax(ar,n);
//    cout<<*ans;
    
// }

//? Output

#include <iostream>
using namespace std;

void swap(char *x,char*y){
  char *t = x;
  x = y;
  y =t;
}

int main()
{
  // char *x = "ninjasquiz";
  // char *y = "codingninjas";
  // char *t;
  // swap(x,y);
  // cout<<x<<" "<<y<<endl;
  // t= x;
  // x = y;
  // y=t;
  // cout<<" "<<x<<" "<<y;
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout<<*ptr2<<" ";
  cout<< ptr2 - ptr1;
  return 0;
}