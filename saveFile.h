#include <bits/stdc++.h>
using namespace std;

void savePasswordText(string password)
{
    cout<<"Enter Name of File : ";
    string name = "";
    cin>>name;

    string fileName;
    fileName = name + ".txt";

    ofstream PasswordFile(fileName);
    PasswordFile<<password;
    PasswordFile.close();


}