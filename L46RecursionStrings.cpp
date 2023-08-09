//? Finding string length using recursion

// #include <iostream>
// #include <string>
// using namespace std;

// int length(char str[]){
//     if(str[0]=='\0'){
//         return 0;
//     }
//     int smallStr = length(str+1);
//     return smallStr+1;
// }

// int main()
// {
//     char str[100];
//     cin>>str;
//     cout<<length(str);
// }

//? Removing x from the string using recursion

// #include <iostream>
// using namespace std;

// void removeX(char str[]){
//     if(str[0]=='\0'){
//         return;
//     }
//     else if(str[0]!='x'){
//         removeX(str+1);
//     }
//     else{
//         int i = 1;
//         for(;str[i]!='\0';i++){
//             str[i-1] = str[i];
//         }
//         str[i-1] = '\0';
//         cout<<str<<endl;
//         removeX(str);
//     }
// }

// int main()
// {
//     char str[100];
//     cin>>str;
//     removeX(str);
//     cout<<str;

// }

//? Replace Character Recursively

// #include <iostream>
// using namespace std;

// void replaceCharacter(char str[], char c1, char c2) {
//    if(str[0]=='\0'){
//     return;
//    }

//    else if(str[0]!=c1){
//     replaceCharacter(str+1,c1,c2);
//    }

//    else{
//     str[0] = c2;
//     replaceCharacter(str+1,c1,c2);
//    }

    
// }

// int main()
// {
//     char str[1000000];
//     cin>>str;

//     char c1,c2;
//     cin>>c1>>c2;
//     replaceCharacter(str,c1,c2);
//     cout<<str;
// }

//? Remove Duplicates Recursively

#include <iostream>
using namespace std;

void removeConsecutiveDuplicates(char str[]) {
    
    if(str[0]=='\0'){
        return;
    }

    if(str[0]==str[1]){
        int i = 1;
        for(;str[i]!='\0';i++){
            str[i-1] = str[i];
        }
        str[i-1] = '\0';
        removeConsecutiveDuplicates(str);
    }
    removeConsecutiveDuplicates(str+1);

}

int main()
{
    char str[100000];
    cin>>str;
    removeConsecutiveDuplicates(str);
    cout<<str;
}