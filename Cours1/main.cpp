#include <iostream> //loading necessary library for console application project
#include <string> //Necessary to use chain char in the code

using namespace std;

int main()
{
    //Variable initialization syntax  : TYPE NAME (VALUE);
    int ageUser(16); //Age of the user
    int& yOld(ageUser); //Alias for the variable ageUser. Same memory allocation.

    int numberFriend(432);//Number of friends

    double pi(3.14159);//Pi number

    bool isMyFrend(true);//This user is my friend ?

    char lettre('a');

    string userName("Albert Einstein");

    /* Other possibilities :
    int a(2),b(4),c(-1);  //Here, three memory room are created (a,b and c) and contained respectively the value 2, 4 et -1

    string firstName("Albert"), lastName("Einstein"); //Same for string

    It's possible to create a variable without initialization :

    string gamerName;
    int gamerNumber;
    bool areWon;
*/

    cout << "You are "<<yOld<<" years old !"<<endl; //Display the content of a variable
       return 0; // Ending the code
}
