#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    
    for(int i = 0; i < myString.length(); i++){
        if(myString[i] == 'a')
            myString[i] = toupper(myString[i]);
        else if (myString[i] >= 'B' && myString[i] <= 'Z')
            myString[i] = tolower(myString[i]);
    }
    
    return myString;
}