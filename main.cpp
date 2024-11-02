#include <iostream>
using namespace std;
int main(){
    //Declaring variables
    string cars[4] = {"Toyota", "BMW", "Audi", "Ford"};
    int iChose;
    int iCarChose;
    string sNewCar;
    bool running = 1;
    //while cycle
    while (running){
        //list and options
        cout << "Cars in your garage: " << cars[0] << ", " << cars[1] << ", " << cars[2] << ", " << cars[3] << endl;
        cout << "Option: 1. Swap, 2.Exit" << endl;
        cin >> iChose;
        //if statements for options
        if (iChose == 1){
            //swap car input
            cout << "Which car you want to swap?: " << "1." << cars[0] << " 2." << cars[1] << " 3." << cars[2] << " 4." << cars[3] << endl;
            cin >> iCarChose;
            //if statement to chose the car spot
            if (iCarChose == 1){
                cout << "Write the name of the new car in your garage: ";
                cin >> sNewCar;
                cars[0] = sNewCar;
                cout << endl << "Car modified!" << endl;
            } else if (iCarChose == 2){
                cout << "Write the name of the new car in your garage: ";
                cin >> sNewCar;
                cars[1] = sNewCar;
                cout << endl << "Car modified!" << endl;
            } else if (iCarChose == 3){
                cout << "Write the name of the new car in your garage: ";
                cin >> sNewCar;
                cars[2] = sNewCar;
                cout << endl << "Car modified!" << endl;
            } else if (iCarChose == 4){
                cout << "Write the name of the new car in your garage: ";
                cin >> sNewCar;
                cars[3] = sNewCar;
                cout << endl << "Car modified!" << endl;
            }
            //error bypass
            else{
                cout << endl << "No valid optio find! Make sure to enter 1 or 2 as parameter!";
            }
        //quit option
        } else if (iChose == 2){
            cout << "Quitting...";
            running = 0;
        }
    }
}