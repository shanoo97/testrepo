#include <iostream>
#include <cstdlib>
#include <ctime>



using namespace std;

int main(){


srand(time(0));
int x=rand()%100;
cout<<"Guessing game \nYou have 5 chances to guess the correct number"<<endl;    
  
int guess;
for (int i=0;i<5;i++){
cin>>guess;
if(x==guess){
cout<<"You win"<<endl;
break;
}
else if (x>guess)
    cout<<"Guess higher"<<endl;
    else if (x<guess)
        cout<<"Guess lower"<<endl;
        
} if(guess!=x)
    cout << "You loose"<<endl;
        
}