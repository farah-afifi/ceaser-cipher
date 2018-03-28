#include <iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"ahlan ya user ya hobbi.\n"<<"what do you like to do today??\n"<<"1- Cipher a message.\n2- Decipher a message.\n3- End.\n";
    int choice;
    cin>>choice;
    cin.ignore();
    if (choice == 1 ){
        cout<<"please enter the message you want to cipher"<<endl;
        string plainWord;
        getline(cin,plainWord);
        int nshifts,num;
        cin>>nshifts;
        for (int i=0;i<plainWord.size();i++){
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
            cout<<plainWord[i];
        }
    }
    else if(choice==2 ){
       cout<<"please enter the message you want to decipher"<<endl;
        string cipheredMsg;
        getline(cin,cipheredMsg);
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
                num='a' - (cipheredMsg[i]+nshifts);
                cipheredMsg[i]=char('z'+ (num%26)-1);
            }
            cout<<cipheredMsg[i];
        }
    }
    return 0;
}
