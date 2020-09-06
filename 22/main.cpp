//
//  main.cpp
//  Project For CSC211.
//
//  Created by Rodolphe Nemr on 4/6/18.
//  Copyright © 2018 Rodolphe Nemr. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string Encryption();
string Decryption();
int main() {
    string text;
    
    cout<<"Enter text"<<endl;
    getline(cin,text);
    
    Encryption(text);
    
    Decryption(text);
    
    return 0;
}

string Encryption(){


int x ;
int len;
    
len = (int)text.length();
   
    int count;
    cout<<"Enter (P+i)"<<endl;
    cin>>count;
    
for(x = 0; x < len; x++) {
    
    //Check if its a alphabet by using "isalpha"And convert any uppercase to lowercase;
    
    if (isalpha(text[x])) {
        text[x] = tolower(text[x]);
        
        for (int i = 0; i <count ; i++) {
            
            if (text[x] == 'z') {
                
                text[x] = 'a';
                
            }
            
            else {
                
                text[x]++;
                
            }
            
        }
    }
}

cout << "Encrypted text:"<<endl << text << endl;

    return text;
}


string Decryption(){
    
    
    int x ;
    int len;
    
    len = (int)text.length();
    
    int count;
    cout<<"Enter (P-i)"<<endl;
   
    cin>>count;
    
for(x=0; x< len ; x++) {
        
        //Check if its a alphabet by using "isalpha"And convert any uppercase to lowercase;
        
        if (isalpha(text[x])) {
            text[x] = tolower(text[x]);
            
            for (int i = count; i > 0; i--) {
                
                if (text[x] == 'z') {
                    
                    text[x] = 'a';
                    
                }
                
               else {
                   
                   text[x]--;
                    
                }
                
            }
        }
    }
    
    cout << "Decrypted text:"<<endl << text << endl;
   
    return text;
}


