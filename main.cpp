//
//  Lab Xi Part III
//
//  Created by Edgar Esparza on 7/15/15.
//

#include <iostream>
using namespace::std;

struct phoneTones
{
    int rowTone,
    colTone;
};

phoneTones keyToTones ( char key );
int main()
{
    char inputKey;
    phoneTones keyFreqs;
    
    for ( int i = 1; i <= 12 ; i++)
    {
        cout << "Enter key pressed (0-9, *, or #): ";
        cin >> inputKey;
        keyFreqs = keyToTones(inputKey);
        cout << "Tones produced at "
        << keyFreqs.rowTone << " and "
        << keyFreqs.colTone << " Hz" << endl;
    }
}

phoneTones keyToTones (char key){
    phoneTones temp;
    switch(key){
            
        case '1': case '2': case '3' : temp.rowTone = 697; break;
        case '4': case '5': case '6' : temp.rowTone = 770; break;
        case '7': case '8': case '9' : temp.rowTone = 852; break;
        case '*': case '0': case '#' : temp.rowTone = 941; break;
    }
    switch(key) {
            
        case '1': case '4': case '7': case '*' : temp.colTone = 1290; break;
        case '2': case '5': case '8': case '0' : temp.colTone = 1336; break;
        case '3': case '6': case '9': case '#' : temp.colTone = 1447; break;
    }
        return temp;
}