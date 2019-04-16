#include <iostream>
#include <conio.h>
using namespace std;

class functions{
public:
    void Body(){
        cout << " :: Welcome to Taylor's CALCULATOR! ::" << endl;
    }
    int Addition(int x, int y){
        int ans = x + y;
        return ans;
    }
    int Subtraction(int x, int y){
        int ans = x - y;
        return ans;
    }
    int Multiplication(int x, int y){
        int ans = x * y;
        return ans;
    }
    int Division(int x, int y){
        int ans = x / y;
        return ans;
    }
};

int main(){
int func;
int x, y;
functions key; //Object
key.Body(); //Object

cout << "What function do you want to use? " << endl;
cout << "1 - Addition " << endl;
cout << "2 - Subtraction " << endl;
cout << "3 - Multiplication " << endl;
cout << "4 - Division " << endl;
cout << "Input: " << endl;

cin >> func;
cout << endl;
switch(func){

    case 1: //Addition
        cout << "**ADDITION**" << endl;
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " + " << y << " = ";
        cout << key.Addition(x, y);

    case 2: //Subtraction
        cout << "**SUBTRACTION**" << endl;
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " - " << y << " = ";
        cout << key.Subtraction(x, y);
        break;
    case 3: //Multiplication
        cout << "**MULTIPLICATION**" << endl;
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " x " << y << " = ";
        cout << key.Multiplication(x, y);
        break;
    case 4: //Division
        cout << "**DIVISION**" << endl;
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " / " << y << " = ";
        cout << key.Division(x, y);
        break;
    default:
        cout << "Invalid Input...";
        break;
}

}
