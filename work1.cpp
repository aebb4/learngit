#include <iostream>
using namespace std;
int main() {
    char input;

    cout << "Please input a character:";
    cin >> input;
    if (input >= 'a' && input <= 'z')
printf("%c",input+('a'-'A'));
    else if (input >= 'A' && input <= 'Z')
        cout << input;
    else
        cout << "invalid input";
}