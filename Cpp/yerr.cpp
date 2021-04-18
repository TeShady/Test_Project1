#include <iostream> // this is basic Cpp code that will print the phrase in the quotes, i used strings and Int to make adjusting values easier

using namespace std;

int main ()
{
    string characterName = "Mark";
    string animal = "Goat";
    string drink = "Lemonade"; 
    string cousinName = "Kevin";

    int characterAge;
    characterAge = 27;
     

    cout << "There once was a man named " << characterName << endl; 
    cout << "He was the " << animal << " at " << characterAge << "!"  << endl;
    cout << "He like to drink " << drink << " when he is thirsty" << endl;
    cout << "and has a cousin named " << cousinName << endl;

    return 0;

}
