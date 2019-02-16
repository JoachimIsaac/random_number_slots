//-------------------------------------------------------------------------------------------
//
//  
//
//
//
//   Purpose: This program accepts 5 integer values from the user and then generates 5
//            random integer values. These values are then compared and the amount of
//            which matched is displayed to the user.
//
//
//-------------------------------------------------------------------------------------------


#include<iostream>
#include<ctime>
using namespace std;

void heading();
void winningDigits(int Digits[]);
void playersnumber(int player[]);
int comparison(int Digits[],int player[]);
void print(int Anarray[]);




void heading(){
cout <<"Name Joachm Isaac\n\n";
cout <<"Course: CMPS-1044-102, Fall 18, Dr.Tina Johnson\n\n";
cout <<"Purpose: This program accepts 5 integer values from the user and then generates 5 \n";
    cout <<"random integer values. These values are then compared and the amount of values \n";
    cout <<"which matched is displayed to the user. \n\n";
    cout << "Please enter 5 numbers so that they can be compared.";
    cout<<"\n";
}

//This function generates the random numbers for Digits array.
void winningDigits(int Digits[]){
    
   srand(time(NULL));
    
    for(int i=0; i < 5; i++){
        
        Digits[i] = rand()%10;
        
    }
}

//This is the function which accepts the user's input 5 times.
void playersnumber(int player[]){
    
    for(int p=0; p < 5; p++){
        cin>>player[p];
        
    }
}

void print(int Anarray[]){
    
    for(int y=0; y < 5; y++){
        cout<< Anarray[y]<<", ";
    }
        cout<<"\n";
}

int comparison (int Digits[],int player[]){
    int a = 0;
// This nested loop makes the comparison between Arrays.
    for(int i=0; i < 5; i++){
        for(int t=0; t < 5; t++){
            if(Digits[t] == player[i]){
                
                // This changes the number being checked to -1 when the if conditon is met.
                player[i] = -1;  // this ensures that duplicate numbers are ignored.
                a++;
                
                }
            }
        }
//It returns the amount of numbers which were matched
    return a;
}

int main()
{
    int Digits[5];
    int player[5];
    
    heading();
    playersnumber(player);
    cout<<"\n";
    winningDigits(Digits);
    cout<<"Here are the random numbers generated: ";
    print(Digits);//This function call prints out the random array of 5 digits.
    cout<<"\n";
    cout <<"Here is the numbers the user chose: ";
    print(player);//This function call prints out the numbers chosen by the user.
    cout<<"\n";
    cout <<"Here is the number of matching numbers:" << comparison(Digits,player)<<"\n";
    
    return 0;
    
}

