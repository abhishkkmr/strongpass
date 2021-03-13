#include <bits/stdc++.h>
using namespace std;

int WhichCharacter(int num)
{
    if(num>=65&&num<=90){
        return 1;  //Upper case Alphabets
    }
    else if(num>=97&&num<=122){
        return 2;  //Lower case Alphabets.
    }
    else if(num>=48&&num<=57){
        return 3;  //Numeric Numbers
    }
    else if((num>=32&&num<=47)||(num>=58&&num<=64)||(num>=91&&num<=96)||(num>=123&&num<=126)){
        return 4; //Special Characters
    }
    else
    return 0;
}

int capitalAlphabets(int num)
{
    // 65 - 90 Upper case Alphabets.
    return 0;
}

int lowercaseAlphabets(int num)
{
    // 97 - 122 Lower case Alphabets.
    return 0;
}

int digits(int num)
{
    // 48 - 57 Numeric Numbers
    return 0;
}

int specialCharacters(int num)
{
    // 32 - 47 
    // 58 - 64
    // 91 - 96
    // 123 - 126
    // Special Characters.
    return 0;
}