#include <bits/stdc++.h>
using namespace std;

#include "checkRandom.h"


int strongPass()
{
    int length , UppercaseChoice, numericChoice , specialChoice , customSpecial ;

    cout<<"Enter Length of Password : ";cin>>length;

    while(length<8||length>128)
    {
        if(length<8)
        {
            cout<<"Error : Password Length should be at least 8\n";
            cout<<"Enter Length again : ";cin>>length;
        
        }
        else if(length>128)
        {
            cout<<"Warning : Password is too Long,try again\n";
            cout<<"Enter Length again. : ";cin>>length;
            
        }
    }

    cout<<"\nPlease answer the choices below.\n";
    cout<<"Enter 1 for 'yes' or 0 for 'no'\n\n";
    cout<<"Do you want to Include Uppercase Characeters? : ";
    cin>>UppercaseChoice;

    cout<<"Do you want to Include Numberic Characeters? : ";
    cin>>numericChoice;

    cout<<"Do you want to Include !@#$? : ";
    cin>>customSpecial;

    cout<<"Do you want to Include Special Characeters? : ";
    cin>>specialChoice;


    //Generate The Password.

    int counter = 0;
    int numberOfSpecials = 0; //To control the number of special characters.
    string pass;

    srand(time(0));

    while(counter<length)
    {
        int ranNumber,CheckType;
        
        ranNumber = rand() % 127;
        
        CheckType = WhichCharacter(ranNumber);

        if(CheckType!=0)
        {
            if(CheckType==1&&UppercaseChoice==1){
                pass = pass + char(ranNumber);
                counter += 1;
            }
            else if(CheckType==3&&numericChoice==1){
                pass = pass + char(ranNumber);
                counter+=1;
            }
            else if(CheckType==5&&customSpecial==1){
                pass = pass + char(ranNumber);
                counter+=1;
            }
            else if(CheckType==4&&specialChoice==1)
            {
                
                if (numberOfSpecials<(length/4))
                {
                    pass = pass + char(ranNumber);
                    numberOfSpecials+=1;
                    counter+=1;
                }
            }
            else if(CheckType==2){
                pass = pass + char(ranNumber);
                counter+=1;
            }
            else {
                continue;
            }
            
        }

        else
        {
            counter = counter;
        }

    }

    cout<<"\nGenerated Password : "<<pass<<"\n";

    return 0;
}

int main()
{
    string again;
    again = "yes";

    while(again=="yes"||again=="YES"||again=="Yes")
    {
        strongPass();

        cout<<"\nWant to Generate Password again? Yes or NO : ";
        cin>>again;

    }
    return 0;
}
