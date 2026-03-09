#include<iostream> // This is a library.
using namespace std;
// Code likha hai : std::cout ka meaning, console mein chejo ko print karna hai.

int main() {

    // Number
    int a = 10; // integer : 4 byte
    float b = 2.41; // float : 4 byte
    char c = 'a'; // char b: 1 byte
    bool num = true;  // bool : 1 byte
    long long d = 33323232325362;
    string name = "Prashant Kumar";
    
    cout << name;
    
    // cout << "a";
    // cout << "Hello Coder Army";
    // cout << sizeof(num);
    cout << name.length();

    return 0;
}