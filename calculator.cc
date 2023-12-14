#include <iostream>
using namespace std;


int main() {
    int a,b,c;
    char ch;
    cout<<"enter the number";
    cin>>a>>b;
    cout<<"enter the operator";
    cin>>ch;
    {
        if(ch=='+')
        {
            c=a+b;
            cout<<c;
        }
        else if(ch=='-')
        {
            c=a-b;
            cout<<c;
        }
        else if(ch=='/')
        {
            c=a/b;
            cout<<c;
        }
        else if(ch=='*')
        {
            c=a*b;
            cout<<c;
        }
        else
        {
            cout<<"invalid number";
        }
        
        }
}
    
