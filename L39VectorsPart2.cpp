// #include<iostream>
// #include<vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int> num(5);

//     for(int i=0;i<num.size();i++){
//         cin>>num[i];
//     }

//     vector<int>::iterator i = num.begin();

//     for(;i!=num.end();i++){
//         cout<<*i<<" ";;
//     }

//     cout<<num.at(0)<<endl; //* We use this to access a particular element

//     //? empty()

//     cout<<"If the container empty or not = "<<num.empty()<<endl; //* It will return true or false

//     //? clear()

//     // num.clear();
//     cout<<"If the container empty or not = "<<num.empty()<<endl;

//     //? reverse()

//     // reverse(num.begin(),num.end()); //* (start index, end index )
   

//    //? reversing particular part

//     //reverse(num.begin()+1,num.begin()+4);


// //    for(int i=0;i<num.size();i++){
// //     cout<<num[i]<<" ";
//    //}

//    //? Front() and back(), This will give first and last element

//    // cout<<num.front()<<" "<<num.back();

//     //? erase() -  For deleting a particular element

//         //num.erase(num.begin()+2,num.begin()+4); //* (base address)
         
//       // for(int i=0;i<num.size();i++){
//     //cout<<num[i]<<" ";
//    //}

//    //? Sort() - Increasing and decreasing order
//     //! Increasing
// //    sort(num.begin(),num.end());

// //      for(int i=0;i<num.size();i++){
// //     cout<<num[i]<<" ";
//    //}

//    //! Decreasing

//    sort(num.begin(),num.end(),greater<int>());
//    for(int i=0;i<num.size();i++){
//     cout<<num[i]<<" ";
//    }
// }   

//? Predict output

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int>vect;
//     vect.push_back(1);
//     vect.push_back(3);
//     vect.pop_back();
//     vect.push_back(2);
//     int answer;
//     if(vect.empty()){
//         answer = vect.front();
//     }
//     else {
//         answer = vect.back();
//     }
//     cout<<answer;
// }

//? Kth Smallest and Largest element of Array

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<int> kthSmallLarge(vector<int> &v, int n, int k)
// {
// 		vector<int>v2(2);
// 	sort(v.begin(),v.end());
	
//     int temp = v[0];
//     v2[0] = v[k-1];
	
//           if (n - k == 0) {
//             v2[1] = temp;
//           }
// 		  else v2[1] = v[n-k];
        
// 	return v2;


// }

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;

//         vector<int> v(n);

//         vector<int> :: iterator i = v.begin();
//         for(;i!=v.end();i++){
//             cin>>*i;
//         }

//         kthSmallLarge(v,n,k);

//         for(int i=0;i<v.size();i++){
//             cout<<v[i]<<" ";
//         }


        
        
//     }
// }


//? Find Unique

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {   
//     int n; cin>>n;
//     vector<int> v(2*n+1);
//     for(int i=0;i<v.size();i++){
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end());
//     bool flag = true;
//     for(int i=0;i<n;i++){
//         int f = 2*i;
//         int l = 2*i+1;
//         if(v[f]!=v[l]){
//             flag = false;
//             cout<<v[f];
//             break;
//         }
        
//     }
//     if(flag){
//             cout<<v[2*n];
//         }

// }

//? Find Duplicate in Array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v(vector<int> &arr, int n){
	vector<int> v(1);

    sort(arr.begin(),arr.end());
    for(int i=0,j=1;j<n;i+=2,j+=2){
        if(arr[i] == arr[j]){
            v[0] = arr[i];
            break;
        }
    }
    return v;

}


int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector <int> v(n);

         for(int i=0;i<v.size();i++){
         cin>>v[i];
     }
    
    }
}