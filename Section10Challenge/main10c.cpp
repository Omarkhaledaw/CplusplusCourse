#include <iostream>
#include <string>

using namespace std;

int main() {
    
    // string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    // string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    // string secret_message{};
    // cout << "Please enter a secret message: ";
    // getline(cin,secret_message);
    
    /*
    //The easy way
    int ch1,ch2;
    cout << "Encrypting your message..." << endl;
    for(int i{};i<secret_message.size();i++){
        ch1 = secret_message[i];
        for(int j{};j<alphabet.size();j++){
            ch2 = alphabet[j];
            if(ch1 == ch2){
                secret_message[i] = key[j];
            }
        }
    }
    
    cout << "Your message is now: " << secret_message << endl;
    
    cout << "Dcrypting your message..." << endl;
    for(int i{};i<secret_message.size();i++){
        ch1 = secret_message[i];
        for(int j{};j<key.size();j++){
            ch2 = key[j];
            if(ch1 == ch2){
                secret_message[i] = alphabet[j];
            }
        }
    }
    cout << "Your message is now: " << secret_message << endl;    
    */
   
   //The hard way
    // string encrypted_message{};
    // cout << "Encrypting your message..." << endl;
    // for(char c:secret_message){
    //     size_t position = alphabet.find(c);
    //     if(position != string::npos){
    //         char new_char = key.at(position);
    //         encrypted_message += new_char;
    //     }else{
    //         encrypted_message += c;
    //     }
    // }
    // cout << "Your message is now: " << encrypted_message << endl;
    
    // string dcrypted_message{};

    // for(char c:encrypted_message){
    //     size_t position = key.find(c);
    //     if(position != string::npos){
    //         char new_char = alphabet.at(position);
    //         dcrypted_message += new_char;
    //     }else{
    //         dcrypted_message += c;
    //     }
    // }

    // cout << "Your message is now: " << dcrypted_message << endl;
    // for(size_t i {1};i<count;i++){
    //     random_number = rand() %max+min;
    //     cout << random_number << endl;
    // }

    /*Pyramid Challenge*/
    string text = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i,j,k,l;
    int size =text.length()-1;
    for(i = 0;i<text.length();i++){
        
        for(j = (size-i);j>=0;j--){
            cout << " ";
        }
        for(k = 0;k<(i+1);k++){
            cout << text[k];
        }
        for(l = k-2;l>=0;l--){
            cout << text[l];
        }
        cout << endl;
    }
    return 0;
}

