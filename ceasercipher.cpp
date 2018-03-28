// FCI – Programming 1 – 2018 - Assignment 2
// Program Name:ceaser cipher.cpp
// Last Modification Date: 03/03/2017
// Author1 and ID and Group: 2017 0351
// Author2 and ID and Group: 2017 0352
// Author3 and ID and Group: 2017 0353
// Teaching Assistant: xxxxx xxxxx
// Purpose:each letter in the plaintext is replaced by a letter at some fixed number of positions down the alphabet.
#include <iostream>
#include<string>
using namespace std;
int main()
{   bool flag1=true;
     cout<<" ahlan ya user ya hobbi.\n";
    while (flag1){
        cout<<endl<<"what do you like to do today??\n"<<"1- Cipher a message.\n"<<"2- Decipher a message.\n"<<"3- End.\n";
        char choice;
        cin>>choice;
        cin.ignore();
        if (choice=='1'){
            cout<<"please enter the message you want to cipher"<<endl;
            string plainWord;
            getline(cin,plainWord);
            cout<<"please enter the number of shifts"<<endl;
            int nshifts,num;
            cin>>nshifts;

            for (int i=0;i<plainWord.size();i++){
                bool flag2=true;
                if (plainWord[i]>='A'&& plainWord[i]<='Z'){
                    for (int i=0;i<plainWord.size();i++){
                        tolower(plainWord[i]);
                        flag2=false;
                        }
                 }
                if( (plainWord[i]+nshifts)<='z' && (plainWord[i])!=' '){
                    plainWord[i]=char(plainWord[i]+nshifts);
                }
                else if((plainWord[i])==' '){
                    plainWord[i]=' ';
                }
                else{
                    num= (plainWord[i]+nshifts)-'z';
                    plainWord[i]=char('a'+ (num%26)-1);
                }
                if(flag2)
                    cout<<plainWord[i];
                else
                    cout<<char(toupper(plainWord[i]));
            }

        }
      else if(choice=='2'){
            cout<<"please enter the message you want to decipher"<<endl;
            string cipheredMsg;
            getline(cin,cipheredMsg);
            cout<<"please enter the number of shifts"<<endl;
            int nshifts,num;
            cin>>nshifts;
            for (int i=0;i<cipheredMsg.size();i++){
                if( (cipheredMsg[i]-nshifts)>='a' && (cipheredMsg[i])!=' '){
                    cipheredMsg[i]=char(cipheredMsg[i]-nshifts);
                }
                else if((cipheredMsg[i])==' '){
                    cipheredMsg[i]=' ';
                }
                else{
                    num='a' - (cipheredMsg[i]-nshifts);
                    cipheredMsg[i]=char('z'- (num%26)+1);
                }

                    cout<<cipheredMsg[i];
            }

        }
        else if (choice =='3'){
            flag1=false;
        }
        else{
            cout<<"please choose either 1 or 2 or 3"<<endl;
        }
    }


    return 0;
}
