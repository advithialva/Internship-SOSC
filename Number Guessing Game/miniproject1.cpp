//Number Guessing Game//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    
    // int number= 1+rand()%100;
    // cout<<number;

    int min=1;
    int max=50;
    
    int num=min+rand()%(max-min);
    
    int lives=5;
    cout<<"WELCOME TO THE NUMBER GUESSING GAME\n";
    cout<<"Choose a Number Between 1 and 50\n";
    while(lives--){
        int choice;
        cout<<"Enter Your Choice\n";
        cin>>choice;
        if(choice==num)
        {
            cout<<"YOU WON THE GAME!!\n";
            break;
        }
        else if (choice<num)
        {
            cout<<"Low, Guess High\n";
        }
         else if (choice>num)
        {
            cout<<"High, Guess Low\n";
        }
        if(lives==0)
        {
            cout<<"YOU LOST\n";
            break;
        }
        else{
            cout<<"You have "<<lives<<" "<<"left\n";
        }
    }

    return 0;
}