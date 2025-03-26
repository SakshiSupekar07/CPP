#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character";
    cin>>ch;
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
    cout<<ch<<"is an alphabet";
}
else if((ch>='0'&&ch<='9')){
    cout <<ch<<"is an digit"
}
else
cout<<ch<<"is an special character"<<endl;
return 0;
}