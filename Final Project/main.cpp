#include <iostream>
#include <string>
#include "complex_number.h"
#include "advanced_calculations.h"
#include "fraction.h"
#include "matrix.h"
#include "factors.h"
#include "multiples.h"
using namespace std;


int main() {
    cout << "Hello. This is an advanced calculator." << endl;
    string again = "Y";
    while (again == "Y" || again == "y"){
        cout << "1: Basic Arithmetic" <<  endl
             << "2: Adanced Calculations" << endl
             << "3: Fractions" << endl
             << "4: Complex Numbers" << endl
             << "5: Factors" << endl
             << "6: Multiples" << endl
             << "7: Matrices" << endl << endl;
        string category;
        cout << "Please enter the number corresponding to the category you would like to choose: "; 
        getline(cin, category);
        if(category == "1"){
            string c1;
            cout << "1: Addition" <<  endl
                 << "2: Subtraction" << endl
                 << "3: Multiplication" << endl
                 << "4: Division" << endl;
            cout << "Please enter the number corresponding to the category you would like to choose: ";
            getline(cin, c1);
            if (c1 == "1"){
                double n1;
                double n2;
                string another = "y";
                cout << "Please enter your first number: ";
                cin >> n1;
                cout << endl;
                cout << "Please enter your next number: ";
                cin >> n2;
                cout << endl;
                double sum = n1+n2;
                cout << n1 << " + " << n2 << " = " << sum << endl;
                cout << "Would you like to add another number? Enter Y or N: ";
                cin >> another;
                double n;
                while(another == "Y" || another == "y"){
                    
                    cout << "Please enter your next number: ";
                    cin >> n;
                    sum+=n;
                    cout << "Your sum is: " << sum << endl;
                    cout << "Would you like to add another number? Enter Y or N: ";
                    cin >> another;
                    while(another != "Y" && another != "y" && another != "N" && another != "n"){
                        cout << "Invalid Entry. Enter Y or N: ";
                        cin >> another;
                    }
                }
            }
            else if(c1 == "2"){
                double n1;
                double n2;
                string another = "y";
                cout << "Please enter your first number: ";
                cin >> n1;
                cout << endl;
                cout << "Please enter your next number: ";
                cin >> n2;
                cout << endl;
                double diff = n1-n2;
                cout << n1 << " - " << n2 << " = " << diff << endl;
                cout << "Would you like to subtract another number? Enter Y or N: ";
                cin >> another;
                double n;
                while(another == "Y" || another == "y"){
                    
                    cout << "Please enter your next number: ";
                    cin >> n;
                    diff-=n;
                    cout << "Your difference is: " << diff << endl;
                    cout << "Would you like to subtract another number? Enter Y or N: ";
                    cin >> another;
                    while(another != "Y" && another != "y" && another != "N" && another != "n"){
                        cout << "Invalid Entry. Enter Y or N: ";
                        cin >> another;
                    }
                }
            }
            else if(c1 == "3"){
                double n1;
                double n2;
                string another = "y";
                cout << "Please enter your first number: ";
                cin >> n1;
                cout << endl;
                cout << "Please enter your next number: ";
                cin >> n2;
                cout << endl;
                double mult = n1*n2;
                cout << n1 << " * " << n2 << " = " << mult << endl;
                cout << "Would you like to multiply another number? Enter Y or N: ";
                cin >> another;
                double n;
                while(another == "Y" || another == "y"){
                    
                    cout << "Please enter your next number: ";
                    cin >> n;
                    mult*=n;
                    cout << "Your product is: " << mult << endl;
                    cout << "Would you like to multiply another number? Enter Y or N: ";
                    cin >> another;
                    while(another != "Y" && another != "y" && another != "N" && another != "n"){
                        cout << "Invalid Entry. Enter Y or N: ";
                        cin >> another;
                    }
                }
            }
            else if(c1 == "4"){
                double n1;
                double n2;
                string another = "y";
                cout << "Please enter your first number: ";
                cin >> n1;
                cout << endl;
                cout << "Please enter your next number: ";
                cin >> n2;
                cout << endl;
                double div = n1/n2;
                cout << n1 << " / " << n2 << " = " << div << endl;
                cout << "Would you like to divide by another number? Enter Y or N: ";
                cin >> another;
                double n;
                while(another == "Y" || another == "y"){
                    
                    cout << "Please enter your next number: ";
                    cin >> n;
                    div/=n;
                    cout << "Your quotient is: " << div << endl;
                    cout << "Would you like to divide by another number? Enter Y or N: ";
                    cin >> another;
                    while(another != "Y" && another != "y" && another != "N" && another != "n"){
                        cout << "Invalid Entry. Enter Y or N: ";
                        cin >> another;
                    }
                }
            }
            
        }
        else if(category == "2"){
            string c2;
            cout << "1: Raising to a power" <<  endl
                 << "2: Square root" << endl
                 << "3: Factorial" << endl
                 << "4: Combination" << endl
                 << "5: Permutation" << endl
                 << "6: Absolute value" << endl;
            cout << "Enter the number corresponding to the category you would like to choose: ";
            getline(cin, c2);
            if(c2 == "1"){
                double b;
                double x;
                cout << "To calculate b^x: " << endl;
                cout << "Enter the base b: ";
                cin >> b;
                cout << endl << "Enter the power x: ";
                cin >> x;
                
                cout << b << "^" << x << " = " << power(b, x) << endl;
            }
            else if(c2 == "2"){
                double s;
                
                cout << "Enter the number you would like to square root: ";
                cin >> s;
                //add cmath sqrt function
                
            }
            else if(c2 == "3"){
                int n;
                cout << "To calculation n!: " << endl;
                cout << "Enter n ";
                cin >> n;
                cout << endl << n << "! is: " << factorial(n) << endl;
            }
            else if(c2 == "4"){
                int n;
                int r;
                cout << "To calculate C(n,r): " << endl;
                cout << "Enter n: ";
                cin >> n;
                cout << endl << "Enter r: ";
                cin >> r;
                cout << "C(n,r) = " << combination(n, r) << endl;
                
            }
            else if(c2 == "5"){
                int n;
                int r;
                cout << "To calculate P(n,r): " << endl;
                cout << "Enter n: ";
                cin >> n;
                cout << endl << "Enter r: ";
                cin >> r;
                cout << "P(n,r) = " << permutation(n, r) << endl;
    
            }
            else if(c2 == "6"){
                double x;
                cout << "To calculate |x|, enter x: ";
                cin >> x;
                cout << "|x| = " << absolute_value(x) << endl;
            }
            
        
        }
        else if(category == "3"){
            string c3;
            cout << "1: Addition" <<  endl
                 << "2: Subtraction" << endl
                 << "3: Multiplication" << endl
                 << "4: Division" << endl;
            cout << "Please enter the number corresponding to the category you would like to choose: ";
            getline(cin, c3);

        }
        else if(category == "4"){
            string c4;
            cout << "1: Addition" <<  endl
                 << "2: Subtraction" << endl
                 << "3: Multiplication" << endl
                 << "4: Division" << endl;
            cout << "Please enter the number corresponding to the category you would like to choose: ";
            getline(cin, c4);
        }
        else if(category == "5"){
            string c5;
            cout << "1: Factors" << endl;
            cout << "2: Greatest Common Factor (GCF)";
            cout << "Please enter the number corresponding to the category you would like to choose: ";
            getline(cin, c5);
        }
        else if(category == "6"){
            string c6;
            cout << "1: Multiples" << endl;
            cout << "2: Least Common Multiple (LCM)";
            cout << "Please enter the number corresponding to the category you would like to choose: ";
            getline(cin, c6);
        
        }
        else if(category == "7"){
            string c7;
            cout << "1: Addition" <<  endl
                 << "2: Subtraction" << endl
                 << "3: Multiplication" << endl
                 << "4: Transpose" << endl
                 << "5: Determinant (Only 2 by 2 matrices)" << endl
                 << "6: Inverse (Only 2 by 2 matrices)" << endl;
            cout << "Please enter the number corresponding to the category you would like to choose: ";
            getline(cin, c7);
        }
        else{
            cout << "Invalid Entry. Enter a number from 1-7 corresponding th othe above categories: ";
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
