//? Basic Vector declaration

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v(5,10); //* (size,inital value)

//     for(int i=0;i<5;i++){
//         cout<<v[i]<<" ";
//     }

// }

//? Increasing Decreasing vector size

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5);

    for(int i=0;i<5;i++){
        cin>>v[i];
    }

    cout<<"size = "<<v.size()<<" "<<"Capacity = "<<v.capacity()<<endl;

    v.push_back(6); //* Inserting new element in the last
    
    // v.pop_back(); //* Removing last element from last

    cout<<"size = "<<v.size()<<" "<<"Capacity = "<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}