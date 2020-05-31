#include <iostream>
#include <string>
using namespace std;


int main() {
    cout << "Hello. This is an advanced calculator.";
    string again = "Y";
    while (again == "Y" || again == "y"){
        cout << "1: Basic Arithmetic" <<  endl
             << "2: Fractions" << endl
             << "3: Complex Numbers" << endl
             << "4: Factors" << endl
             << "5: Multiples" << endl
             << "6: Matrices" << endl << endl;
        string category;
        cout << "Please enter the number corresponding to the category you would like to choose: "; 
        getline(cin, category);
        if(category == "1"){
        
        }
        else if(category == "2"){
        
        }
        else if(category == "3"){
        
        }
        else if(category == "4"){
        
        }
        else if(category == "5"){
        
        }
        else if(category == "6"){
        
        }
        else{
            cout << "Invalid Entry. Enter a number from 1-6 corresponding th othe above categories: ";
            getline(cin, category);
        }
        cout << "Would you like to do anything else? Enter Y or N: ";
        getline(cin, again);
        while(again != "Y" && again != "y" && again != "N" && again != "n"){
            cout << "Invalid Entry. Enter Y or N: ";
            getline(cin, again);
        }
        
    }
    return 0;
}
