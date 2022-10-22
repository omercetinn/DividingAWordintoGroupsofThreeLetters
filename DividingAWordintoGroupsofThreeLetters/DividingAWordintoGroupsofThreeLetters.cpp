#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

int main()
{
    string temp = "";
    string S("23456789ASD3@"); //S values manuel input
    //string S; // S values external input
    //cout<<"Enter your S value: "; 
    //cin>>S;
    if (S.size() > 2)
    {
        for (int i = 0; i < S.size(); ++i) { // examining letter one by one and removing unwanted letters
            if ((S[i] >= 'a' && S[i] <= 'z') || (S[i] >= 'A' && S[i] <= 'Z') ||
                (S[i] >= '0' && S[i] <= '9')) {
                temp = temp + S[i];
            }
        }
        S = temp;
        for (int i = 0; i < temp.length(); i += 3) {
            cout << temp.substr(i, 3) << ' '; //taking printouts in triplicate
        }

    }
    else {
        cout << "Please min 2 character input! ";
    }
}