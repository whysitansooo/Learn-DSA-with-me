// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
    //? Fill function
    // int arr[5];

    // fill(arr,arr+5,10); //* (base address, range , value) This will fill the array

    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    //? Sort Function
    int arr[5] = {3,5,4,2,1};
    
    // sort(arr,arr+5); //*(base address,range)
    
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    //? If I want to sort particular part of array
    //sort(arr+1,arr+4);
    
     //for(int i=0;i<5;i++){
     //   cout<<arr[i]<<" ";
   // }
    



    // cout<<endl;

    // reverse(arr,arr+5); //*(base address,range)

    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    //? Swap Function

    // int arr[5] = {1,2,3,4,5};

    // swap(arr[0],arr[2]);
    
    //  for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    //? Finding number of elements in array

    // int arr[5] = {1,2,3,4,5};

    // int n = sizeof(arr)/sizeof(arr[0]);

    // cout<<n;

    
    
//}


//? K Largest Elements

#include <iostream>
#include <algorithm>
using namespace std;

void Klargest(int arr[],int output[],int n,int k){
        sort(arr,arr+n);
        for(int i=0;i<k;i++){
          output[i] = arr[n-k+i];
        }
        // sort(output,output+k);
}

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    int output[k];
    Klargest(arr,output,n,k);
    
    for(int i=0;i<k;i++){
      cout<<output[i]<<" ";
    }
    cout<<endl;

  }
}