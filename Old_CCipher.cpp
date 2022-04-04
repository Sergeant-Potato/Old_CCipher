#include <iostream>
#include <string>
using namespace std;

/*
    Function that will solve the monoalphabetic encoded message
*/
string monoAlphabetic(string enMsg, string key){
    const string alphabet = "abcdefghijklmnopqrstuvwxyz"; //Constant variable that will be used to rewrite the message in readable form
    string solution =""; //Variable that will hold the readable text
    for(int i =0; i<enMsg.size();i++){ //For that iterates throughout the whole length of the encoded message
        for(int k = 0; k<key.size();k++){ //For that iterates throughout the whole length of the key, when possible
            if(key[k] == enMsg[i]){ //If a key character is the same as that of the encoded message variable...
                solution = solution + alphabet[k]; //Start generating a readable message with alphabet variable at position k
            }
        }
    }
    return solution; //Return the readable text
}

int main(){
    //enMsg is the encoded message
    string enMsg = "frparnddlafmudkafcinnamifcaopmafpcasiqkacaqpnceaflikrtedqpfqdfckahvciaffdspcasiagiprcdrdnsidvkodrcgauuaqvncqepnnifmir";
    //'key' is the key needed to crack the encoded message
    string key = "phqgiumeajlnofdybkrcvstxzw";

    cout << "Mono-Alphabetic Cipher\n\n";
    cout << "The encrypted message is: " << enMsg << endl << endl; //Show the encoded message
    cout << "The decrypted message is: " << monoAlphabetic(enMsg,key) << endl; //Show the readable message with monoAlphabetic function
}

//This is the output
/*
Windows PowerShell
Copyright (C) Microsoft Corporation. All rights reserved.

PS C:\Users\regc1\Documents\C++ Scripts\Cipher> cd "c:\Users\regc1\Documents\C++ Scripts\Cipher\" ; if ($?) { g++ Cipher.cpp -o Cipher } ; if ($?) { .\Cipher }
Mono-Alphabetic Cipher

The encrypted message is: frparnddlafmudkafcinnamifcaopmafpcasiqkacaqpnceaflikrtedqpfqdfckahvciaffdspcasiagiprcdrdnsidvkodrcgauuaqvncqepnnifmir

The decrypted message is: nsaislookingforintelligentimaginativecriticalthinkerswhocancontributeinnovativeideastosolveourmostdifficultchallenges
*/