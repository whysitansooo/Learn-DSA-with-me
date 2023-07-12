 #include <iostream>
 using namespace std;
 void updatevalue(int *p){
    *p = 610%255; //* *p = 100;
 }
 int main()
 {
   
    // int i = 65;
    // char c = i;
    
    // int *p = &i;
    // char *pc = (char*)p; //* Explicit Typecasting
    // cout<<*p<<endl;
    // cout<<*pc<<endl;

    char ch = 'A';
    char *pt = &ch;
    updatevalue((int*)pt);
    cout<<ch;
    
 }