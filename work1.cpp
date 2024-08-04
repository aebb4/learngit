#include<iostream>
using namespace std;
int main(){
    char input;
    cin>>input;
    cout<<"Please input a character:";
    if(input>='a'&&input<='z') cout<<input+('A'-'a');
    else if(input>='A'&&input<='Z') cout<<input;
    else cout<<"invalid input";

}