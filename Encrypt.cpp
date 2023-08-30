//
//  main.cpp
//  encrypt
//
//  Created by Akhil Venkat on 5/11/23.
//

#include <iostream>
#include <unistd.h>
using namespace std;

void encrypt(string sentence){
    for(int i = 0; i < sentence.length(); i++) {
        if(sentence[i] == ' ') {
            cout << "S";
            }
        
            else if(sentence[i] == 'A' || sentence[i] == 'a') {
                cout << '!';
            }
            else if(sentence[i] == 'B' || sentence[i] == 'b') {
                cout << '@';
            }
            else if(sentence[i] == 'C' || sentence[i] == 'c') {
                cout << '#';
            }
            else if(sentence[i] == 'D' || sentence[i] == 'd') {
                cout << '$';
            }
            else if(sentence[i] == 'E' || sentence[i] == 'e') {
                cout << '%';
            }
            else if(sentence[i] == 'F' || sentence[i] == 'f') {
                cout << '^';
            }
            else if(sentence[i] == 'G' || sentence[i] == 'g') {
                cout << '&';
            }
            else if(sentence[i] == 'H' || sentence[i] == 'h') {
                cout << '*';
            }
            else if(sentence[i] == 'I' || sentence[i] == 'i') {
                cout << '(';
            }
            else if(sentence[i] == 'J' || sentence[i] == 'j') {
                cout << ')';
            }
            else if(sentence[i] == 'K' || sentence[i] == 'k') {
                cout << '-';
            }
            else if(sentence[i] == 'L' || sentence[i] == 'l') {
                cout << '=';
            }
            else if(sentence[i] == 'M' || sentence[i] == 'm') {
                cout << '_';
            }
            else if(sentence[i] == 'N' || sentence[i] == 'n') {
                cout << '+';
            }
            else if(sentence[i] == 'O' || sentence[i] == 'o') {
                cout << '[';
            }
            else if(sentence[i] == 'P' || sentence[i] == 'p') {
                cout << ']';
            }
            else if(sentence[i] == 'Q' || sentence[i] == 'q') {
                cout << '{';
            }
            else if(sentence[i] == 'R' || sentence[i] == 'r') {
                cout << '}';
            }
            else if(sentence[i] == 'S' || sentence[i] == 's') {
                cout << ';';
            }
            else if(sentence[i] == 'T' || sentence[i] == 't') {
                cout << '|';
            }
            else if(sentence[i] == 'U' || sentence[i] == 'u') {
                cout << '4';
            }
            else if(sentence[i] == 'V' || sentence[i] == 'v') {
                cout << '"';
            }
            else if(sentence[i] == 'W' || sentence[i] == 'w') {
                cout << '~';
            }
            else if(sentence[i] == 'X' || sentence[i] == 'x') {
                cout << 'n';
            }
            else if(sentence[i] == 'Y' || sentence[i] == 'y') {
                cout << 'r';
            }
            else if(sentence[i] == 'Z' || sentence[i] == 'z') {
                cout << '8';
            }
            else if(sentence[i] == '1') {
                cout << "a";
            }
            else if(sentence[i] == '2') {
                cout << "b";
            }
            else if(sentence[i] == '3') {
                cout << "g";
            }
            else if(sentence[i] == '4') {
                cout << "<";
            }
            else if(sentence[i] == '5') {
                cout << ">";
            }
            else if(sentence[i] == '6') {
                cout << "P";
            }
            else if(sentence[i] == '7') {
                cout << "R";
            }
            else if(sentence[i] == '8') {
                cout << "v";
            }
            else if(sentence[i] == '9') {
                cout << "Q";
            }
            else if(sentence[i] == '0') {
                cout << "1";
            }
            else if(sentence[i] == '.') {
                cout << "?";
            }
            else if(sentence[i] == '?') {
                cout << ",";
            }
            else if(sentence[i] == ',') {
                cout << "t";
            }
            else if(sentence[i] == ':') {
                cout << "T";
            }
            else if(sentence[i] == ')') {
                cout << "Y";
            }
            else if(sentence[i] == '(') {
                cout << "U";
            }
            else if(sentence[i] == '!') {
                cout << "A";
            }
            else if(sentence[i] == '@') {
                cout << "S";
            }
            else if(sentence[i] == '$') {
                cout << "D";
            }
        
        }
        cout << endl;
}



void decrypt(string sentence){
    for(int i = 0; i < sentence.length(); i++) {
        if(sentence[i] == 'S') {
            cout << " ";
        }
        else if(sentence[i] == '!') {
            cout << 'a';
        }
        else if(sentence[i] == '@') {
            cout << 'b';
        }
        else if(sentence[i] == '#') {
            cout << 'c';
        }
        else if(sentence[i] == '$') {
            cout << 'd';
        }
        else if(sentence[i] == '%') {
            cout << 'e';
        }
        else if(sentence[i] == '^') {
            cout << 'f';
        }
        else if(sentence[i] == '&') {
            cout << 'g';
        }
        else if(sentence[i] == '*') {
            cout << 'h';
        }
        else if(sentence[i] == '(') {
            cout << 'i';
        }
        else if(sentence[i] == ')') {
            cout << 'j';
        }
        else if(sentence[i] == '-') {
            cout << 'k';
        }
        else if(sentence[i] == '=') {
            cout << 'l';
        }
        else if(sentence[i] == '_') {
            cout << 'm';
        }
        else if(sentence[i] == '+') {
            cout << 'n';
        }
        else if(sentence[i] == '[') {
            cout << 'o';
        }
        else if(sentence[i] == ']') {
            cout << 'p';
        }
        else if(sentence[i] == '{') {
            cout << 'q';
        }
        else if(sentence[i] == '}') {
            cout << 'r';
        }
        else if(sentence[i] == ';') {
            cout << 's';
        }
        else if(sentence[i] == '|') {
            cout << 't';
        }
        else if(sentence[i] == '4') {
            cout << 'u';
        }
        else if(sentence[i] == '"') {
            cout << 'v';
        }
        else if(sentence[i] == '~') {
            cout << 'w';
        }
        else if(sentence[i] == 'n') {
            cout << 'x';
        }
        else if(sentence[i] == 'r') {
            cout << 'y';
        }
        else if(sentence[i] == '8') {
            cout << 'z';
        }
        else if(sentence[i] == 'a') {
            cout << '1';
        }
        else if(sentence[i] == 'b') {
            cout << '2';
        }
        else if(sentence[i] == 'g') {
            cout << '3';
        }
        else if(sentence[i] == '<') {
            cout << '4';
        }
        else if(sentence[i] == '>') {
            cout << '5';
        }
        else if(sentence[i] == 'P') {
            cout << '6';
        }
        else if(sentence[i] == 'R') {
            cout << '7';
        }
        else if(sentence[i] == 'v') {
            cout << '8';
        }
        else if(sentence[i] == 'Q') {
            cout << '9';
        }
        else if(sentence[i] == '1') {
            cout << '0';
        }
        else if(sentence[i] == '?') {
            cout << '.';
        }
        else if(sentence[i] == ',') {
            cout << '?';
        }
        else if(sentence[i] == 't') {
            cout << ',';
        }
        else if(sentence[i] == 'T') {
            cout << ':';
        }
        else if(sentence[i] == 'Y') {
            cout << ')';
        }
        else if(sentence[i] == 'U') {
            cout << '(';
        }
        else if(sentence[i] == 'A') {
            cout << '!';
        }
        else if(sentence[i] == 'S') {
            cout << '@';
        }
        else if(sentence[i] == 'D') {
            cout << '$';
        }
    }
}
    
    
    int main() {
        
        string sentence;
        cout << "Input: ";
        getline(cin, sentence);
        
        cout << endl << "1)  Encrypt" << endl;
        cout << "2)  Decrypt" << endl;
        cout << "";

        string choice;
        cin >> choice;
        if(choice == "1" || choice == "encrypt"){
            encrypt(sentence);
            cout << endl << endl;
        }
        if(choice == "2" || choice == "decrypt"){
            decrypt(sentence);
            cout << endl << endl;
        }
        
    }
    
    


