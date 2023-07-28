#include <iostream>
#include <vector>
using namespace std;
int main()
{   
    //! Auto will automatically detects datatype

    vector<char> ar(5,'A');

    for(auto ele : ar){
        cout<<ele<<" ";
    }
    cout<<endl;
    
    //* vector<char>:: iterator it = ar.begin();

    auto it = ar.begin();
    for(;it!=ar.end();it++){
        cout<<*it<<" ";
    }
}