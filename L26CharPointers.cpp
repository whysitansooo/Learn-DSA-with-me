// #include <iostream>
// using namespace std;
// int main()
// {
//     // char str[] = "sitansu";
//     // cout<<str<<endl;
    
//     // char c = 'S';
//     // char *pc = &c;
//     // cout<<pc<<endl;

//     //? Predict output

//     // char ch = 'a';
//     // char *ptr = &ch;
//     // ch++;
//     // cout<<*ptr<<endl;

//     // char b[] = "xyz";
//     // char *c = &b[0];
//     // c++;
//     // cout<<c<<endl;

//     // char s[] = "hello";
//     // char *p = s;
//     // cout<<s[0]<<" "<<p[0];

// }


#include <iostream>
#include <cstring>
using namespace std;



void func(char *str) {
  char *start = str;
  char *end = str + strlen(str) - 1;

  while (start < end) {
    char temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}
    


int main()
{
    int t;
    cin>>t;
    while(t--){
        char ch[100001];
        cin>>ch;
        func(ch);
        cout<<ch;
        cout<<endl;
    }
}