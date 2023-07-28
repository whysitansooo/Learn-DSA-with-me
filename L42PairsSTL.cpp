#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int ,char> a,pair<int,char> b){
   return a.second < b.second;
}

int main()
{
   // pair<int,char> p; //* Declaration

    //pair<int,char> p(10,'A'); //* Initialization
    //pair<int,char> p = {10,'A'}; //* Initialization
    // pair<int,char> p = make_pair(10,'A'); //* Initialization

    // cout<<p.first;

    int n; cin>>n;
    vector<pair<int,char>> students;

    int roll_number;
    char section;

    for(int i=0;i<n;i++){
        cin>>roll_number>>section;

        students.push_back({roll_number,section});
    }

    // for(int i=0;i<n;i++){
    //     cout<<students[i].first<<" "<<students[i].second<<endl;
    // }

    sort(students.begin(),students.end(),comp);

    for(int i=0;i<n;i++){
        cout<<students[i].first<<" "<<students[i].second<<endl;
    }





    



}