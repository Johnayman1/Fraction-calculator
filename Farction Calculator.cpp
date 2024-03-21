#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;
int main() {
    // set main variables
    string yes, choice, text, key , encrypted_text, decrypted_text;
    int num;
    // print welcome message 
    cout << "welcome to Rail Fence encrypt program " << endl;
        
                while (true) {
                    // let user select the key
                    cout << "please choose the key 3 or 4 :  " ;
                    getline(cin , key ) ;
                    //check validition of key
                    if (key == "3" || key == "4")
                    {   int num = stoi(key) ;
                        if( num == 3 ) {
                            // make 3 lists 
                            vector <char> list1 , list2 , list3;
                            // make first list to collect the first row by adding 4 each loop
                            for (int i = 0; i < text.length() ; i+=4) {
                                list1.push_back(text[i]);
                            }
                            // make second to collect second row by adding 2 each loop
                            for (int j = 1 ; j < text.length(); j+=2) {
                                list2.push_back(text[j]);
                            }
                            // make third to collect third row by adding 4 each loop
                            for (int y = 2; y < text.length(); y+=4) {
                                list3.push_back(text[y]);
                            }
                            // print the result of three lists
                            cout << "Cipher text : ";
                            for (char c : list1) {
                                cout << c;
                            }
                            for (char c : list2) {
                                cout << c;
                            }
                            for (char c : list3) {
                                cout << c;
                            }
                            cout << endl;
                            break;
                        } 
                        else if (num == 4) {
                            // make 4 lists 
                            vector <char> list1 , list2 , list3 , list4 ;
                            // first to collect first row by adding 6 each loop
                            for (int i = 0; i < text.length() ; i+=6) {
                                list1.push_back(text[i]);
                            }
                            // second one to collect second row 
                            // but flag to iterate each loop between 4 , 2 
                            bool addFour = true;
                            for (int j = 1; j < text.length();) {
                                list2.push_back(text[j]);
                                // here add 4 first time
                                if (addFour) {
                                    j += 4; 
                                // and 2 in second time
                                } else {
                                    j += 2; 
                                }
                                addFour = !addFour; // Toggle the flag
                            }
                            // third one to collect third row 
                            // but flag to iterate each loop between 2 , 4 
                            bool addTwo = true ;
                            for (int y = 2 ; y < text.length(); ) {
                                list3.push_back(text[y]);
                                // here add 2 first time
                                if (addTwo) {
                                    y += 2; 
                                // and 4 in second time    
                                } else {
                                    y += 4; 
                                }
                                addTwo = !addTwo; // Toggle the flag
                            }
                            // fourth one to collect last row by adding 6 each loop
                            for (int u = 3; u < text.length(); u+=6) {
                                list4.push_back(text[u]);
                            }
                            // print the result of four lists
                            cout << "Cipher text : ";
                            for (char c : list1) {
                                cout << c;
                            }
                            for (char c : list2) {
                                cout << c;
                            }
                            for (char c : list3) {
                                cout << c;
                            }
                            for (char c : list4) {
                                cout << c;
                            }
                            cout << endl;
                            break;
                        } 
                        else {
                            continue;
                        }
                }
                else{
                    continue;
                }
             break;
              }
            
        } 
    
