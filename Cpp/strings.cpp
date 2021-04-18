#include <iostream> // This are Strings in Cpp Notes

using namespace std;

int main ()
{

    string phrase = "Suny Cobleskill";
                      //   0123... strings index position starts at 0

    string phrasesub;               // this line creates new string
    phrasesub = phrase.substr(8,3); // this line assigns value to new string as a funtion. value should be (Les)

                      // phrase [5] = 'D'; this was used to change the C (index value 5) into a D, giving us the name "Suny Dobleskill"
                      // cout << phrase.length << endl; is a funtion, this one outputs how much characters are in the "phrase" varible  
                      // cout << phrase.find("A", 0); will find specific values in your string varible, doind .find("cobleskill", 0) told me that the word would being on the 5th index (techniucally the 6th letter)
                      // cout << phrase.substr(8, 3);. this "substr" function went to the 8th index of the phrase and printed the 3 letter after that. used to grab specific values from a varible 

    cout << phrasesub;    

    return 0;
}