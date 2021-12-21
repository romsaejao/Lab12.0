#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
cout << "Press Enter 3 times to reveal your future."<<endl;

cin.ignore();
cin.ignore();
cin.ignore();

srand(time(0));
string g;
switch(rand()%9+1)
{
    case 1: g = "A";
    cout << "You will get " << g <<" in this 261102.";
    break;
    case 2: g = "B";
    cout << "You will get " << g <<" in this 261102.";
    break;
    case 3: g = "B";
    cout << "You will get " << g <<" in this 261102.";
    break;
    case 4: g = "C+";
    cout << "You will get " << g <<" in this 261102.";
    break;
    case 5: g = "C";
    cout << "You will get " << g <<" in this 261102.";
    break;
    case 6: g = "D+";
    cout << "You will get " << g <<" in this 261102.";
    break;
    case 7: g = "D";
    cout << "You will get " << g <<" in this 261102.";
    break;
    case 8: g = "F";
    cout << "You will get " << g <<" in this 261102.";
    break;
    case 9: g = "W";
    cout << "You will get " << g <<" in this 261102.";
    break;
    
}

}
