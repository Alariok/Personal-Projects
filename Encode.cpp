#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

void encode(string input)
{
    char letter;
    string output[1000]; 
    for(int i = 0; i < input.length(); i++)
    {
        cout << "Letter: " << input[i]<< endl; 
        switch(input[i])
        {
            case '.': output[i] = "."; break; 
            case '?': output[i] = "?"; break;
            case ',': output[i] = ","; break; 
            case ' ': output[i] = " "; break; 
            case 'A': output[i] = "A1"; break;
            case 'a': output[i] = "A1"; break;
            case 'B': output[i] = "T2"; break;
            case 'b': output[i] = "T2"; break;
            case 'C': output[i] = "C3"; break;
            case 'c': output[i] = "C3"; break;
            case 'D': output[i] = "G4"; break;
            case 'd': output[i] = "G4"; break;
            case 'E': output[i] = "U5"; break;
            case 'e': output[i] = "U5"; break;
            case 'F': output[i] = "A6"; break;
            case 'f': output[i] = "A6"; break;
            case 'G': output[i] = "T7"; break;
            case 'g': output[i] = "T7"; break;
            case 'H': output[i] = "C8"; break;
            case 'h': output[i] = "C8"; break;
            case 'I': output[i] = "G9"; break;
            case 'i': output[i] = "G9"; break;
            case 'J': output[i] = "U1"; break;
            case 'j': output[i] = "U1"; break;
            case 'K': output[i] = "A2"; break;
            case 'k': output[i] = "A2"; break;
            case 'L': output[i] = "T3"; break;
            case 'l': output[i] = "T3"; break;
            case 'M': output[i] = "C4"; break;
            case 'm': output[i] = "C4"; break;
            case 'N': output[i] = "G5"; break;
            case 'n': output[i] = "G5"; break;
            case 'O': output[i] = "U6"; break;
            case 'o': output[i] = "U6"; break;
            case 'P': output[i] = "A7"; break;
            case 'p': output[i] = "A7"; break;
            case 'Q': output[i] = "T8"; break;
            case 'q': output[i] = "T8"; break;
            case 'R': output[i] = "C9"; break;
            case 'r': output[i] = "C9"; break;
            case 'S': output[i] = "G1"; break;
            case 's': output[i] = "G1"; break;
            case 'T': output[i] = "U2"; break;
            case 't': output[i] = "U2"; break;
            case 'U': output[i] = "A3"; break;
            case 'u': output[i] = "A3"; break;
            case 'V': output[i] = "T4"; break;
            case 'v': output[i] = "T4"; break;
            case 'W': output[i] = "C5"; break;
            case 'w': output[i] = "C5"; break; 
            case 'X': output[i] = "G6"; break;
            case 'x': output[i] = "G6"; break;
            case 'Y': output[i] = "U7"; break;
            case 'y': output[i] = "U7"; break;
            case 'Z': output[i] = "A8"; break;
            case 'z': output[i] = "A8"; break;
        }
        cout << "i: " << i << endl; 
    }
    for (int i = 0; i < input.length(); i++)
    {
        cout << output[i]; 
    }
    cout << endl; 
}

int main()
{
    string user_input;
    cout << "Enter what you want to encode" << endl; 
    getline(cin, user_input);
    encode(user_input);
    return 0; 
}