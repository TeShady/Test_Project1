#include <iostream>

using namespace std;

int main ()
{


    string name;
    cout << "Enter your name: ";
    getline(cin, name);


cout << "Hello " << name;

    return 0;
}

// cout uses << this is to show and output
// cin uses >>, this is to get input
//Example below
//    int age; // using int with no nurmeric value will become a place holder for an input, you can also use chat, pretty much any character or number
//    cout << "Enter your age: "; // when the code is run, this will prompt the question.
//    cin >> age;  // this will allow you to input your age or whatever the output is asking
//    cout << "You are " << age << " years old"; // after the vaule is inputted. this sentence will print WITH the age that was inputted 
//Enter your age: 27
//You are 27 years old
///////////////////////////////
// getline = used to get a string of text
// getline(cin, name); allows input of a string of text. use a cout after this to act as an answer to said line of string
// Example 
//    string name; // this is storing a string of text
//    cout << "Enter your name: "; // Question, requires input
//    getline(cin, name); // used to gather a string of text as an input
//      cout << "Hello " << name; // will read hello (input)

