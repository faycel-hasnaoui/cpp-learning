#include <iostream>
#include <string>

using namespace std;

int main() {
    string playerChoice;    
    
    cout << "Welcome to the Adventure Game!" << endl;
    cout << "You stand at a crossroads in a mysterious forest." << endl;
    cout << "Do you want to go 'left' or 'right' or 'forward'? ";
    cin >> playerChoice;  
    
    
    if (playerChoice == "left" || playerChoice == "LEFT") {
        cout << "You discover a hidden treasure chest!" << endl;
        cout << "Inside you find 100 gold coins." << endl;
    } else if (playerChoice == "right" || playerChoice == "RIGHT") {
        cout << "You meet a wise old sage." << endl;
        cout << "The sage gives you a magical potion." << endl;


    } else if (playerChoice == "forward"){
        cout << "You walk deep into the woods and find a sleeping dragon! 🐉" << endl;
        cout << "It's best to be quiet..." << endl;
    }else {
        cout << "You stand still, unsure of your choice." << endl;
        cout << "Time passes and nothing happens." << endl;
    }   

       
    
    return 0;

}
