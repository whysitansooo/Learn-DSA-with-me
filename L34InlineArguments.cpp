//? Tertiary Operator
//? Inline 

// #include <iostream>
// using namespace std;

// inline int max(int a,int b){ //* When we use small function we use to copy it to main code
//     return(a>b)?a:b;
// }

// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     int max = (a>b)?a:b;
//     cout<<max<<endl;

//     int x=10,y=24;
//     int z=(x,y);
//     cout<<z<<endl;

// }


//? Default arguments

#include <iostream>
using namespace std;

int sum(int a[],int size,int si=0){ //* si represents default argument is user does not provide si value in function calling
    int sum=0;                      //! Default value can be  given from right most argument to left 
    for(int i=si;i<size;i++){
        sum+=a[i];
    }
    return sum;
}

int sum2(int a,int b,int c=0,int d=0){
    return a+b+c+d;
}

int main()
{
    int arr[20];

    int sum=sum2(5,6);
    cout<<sum;
}
