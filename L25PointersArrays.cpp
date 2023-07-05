#include <iostream>
using namespace std;
int main()
{
    // int arr[10];
    // cout<<arr<<endl;
    // cout<<&arr<<endl;

    // int *p = arr;
    // arr[0] = 5;
    // arr[1] = 10;
    // cout<<*arr<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<0[arr]<<endl;   

    // cout<<&p<<endl;
    // cout<<arr<<endl; 

}

 //? Sum of the Numbers


#include<iostream>
using namespace std;

int sum(int *ar,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + *ar;
        ar++;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int ans = sum(ar,n);
    cout<<ans;
}

//? Predict Output
#include<iostream>
using namespace std;
int main(){
int a[6] = {1,2,3};
int *b = a;
cout<<b[2];
}
