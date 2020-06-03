#include <iostream>
#include <string>
#include <vector>
#include <cmath> //only used for sqrt function
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
             << "7: Matrices" << endl;
        string category;
        cout << "Please enter the number corresponding to the category you would like to choose: "; 
        getline(cin, category);
        cout << endl;
        if(category == "1"){ //Basic Arithmetic
            string c1;
            cout << "1: Addition" <<  endl
                 << "2: Subtraction" << endl
                 << "3: Multiplication" << endl
                 << "4: Division" << endl;
            cout << "Please enter the number corresponding to the category you would like to choose: ";
            getline(cin, c1);
            cout << endl;
            if (c1 == "1"){ //Addition
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
                while(another == "Y" || another == "y"){ //user can continue to add numbers
                    
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
            else if(c1 == "2"){ //Subtraction
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
                while(another == "Y" || another == "y"){ //user can continue to subtract numbers
                    
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
            else if(c1 == "3"){ //mutliplication
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
                while(another == "Y" || another == "y"){ //user can continue to multiply numbers
                    
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
            else if(c1 == "4"){ //division
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
                while(another == "Y" || another == "y"){ //user can continue to divide numbers
                    
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
            if(c2 == "1"){ //raising to a power
                double b;
                double x;
                cout << "To calculate b^x: " << endl;
                cout << "Enter the base b: ";
                cin >> b;
                cout << endl << "Enter the power x: ";
                cin >> x;
                
                cout << b << "^" << x << " = " << power(b, x) << endl;
            }
            else if(c2 == "2"){ //square root (taken from cmath library)
                double s;
                
                cout << "Enter the number you would like to square root: ";
                cin >> s;
                while(s<0){
                    cout << "Outside the domain of the square root function. " << endl;
                    cout << "Enter a positive number: ";
                    cin >> s;
                }
                cout << endl << "The square root of " << s << " is: " << sqrt(s) << endl;
                
            }
            else if(c2 == "3"){ //factorial
                int n;
                cout << "To calculation n!: " << endl;
                cout << "Enter n ";
                cin >> n;
                cout << endl << n << "! is: " << factorial(n) << endl;
            }
            else if(c2 == "4"){ //combination
                int n;
                int r;
                cout << "To calculate C(n,r): " << endl;
                cout << "Enter n: ";
                cin >> n;
                cout << endl << "Enter r: ";
                cin >> r;
                cout << "C(n,r) = " << combination(n, r) << endl;
                
            }
            else if(c2 == "5"){ //permutation
                int n;
                int r;
                cout << "To calculate P(n,r): " << endl;
                cout << "Enter n: ";
                cin >> n;
                cout << endl << "Enter r: ";
                cin >> r;
                cout << "P(n,r) = " << permutation(n, r) << endl;
    
            }
            else if(c2 == "6"){ //absolute value
                double x;
                cout << "To calculate |x|, enter x: ";
                cin >> x;
                cout << "|x| = " << absolute_value(x) << endl;
            }
            
        
        }
        else if(category == "3"){ //Fractions
            string c3;
            cout << "1: Addition" <<  endl
                 << "2: Subtraction" << endl
                 << "3: Multiplication" << endl
                 << "4: Division" << endl;
            cout << "Please enter the number corresponding to the category you would like to choose: ";
            getline(cin, c3);
            if(c3 == "1"){ //Addition
                int n1;
                int n2;
                int d1;
                int d2;
                string another = "y";
                cout << "To calculate (n1/d1) + (n2/d2): " << endl;
                cout << "Enter the first numerator n1: ";
                cin >> n1;
                cout << endl << "Enter the first denominator d1: ";
                cin >> d1;
                fraction f1(n1, d1);
                cout << endl << "Enter the second numerator n2: ";
                cin >> n2;
                cout << endl << "Enter the second denominator d2: ";
                cin >> d2;
                fraction f2(n2, d2);
                fraction sum = f1+f2;
                cout << n1 << "/" << d1 << " + " << n2 << "/" << d2 << " = ";
                sum.print();
                
                
                cout << endl << "Would you like to add another fraction? Enter Y or N: ";
                cin >> another;
                int num;
                int denom;
                while(another == "Y" || another == "y"){ //user can continue to add numbers
                    
                    cout << "Please enter your next numerator: ";
                    cin >> num;
                    cout << "Please enter your next denominator: ";
                    cin >> denom;
                    fraction f3(num, denom);
                    sum= sum+f3;
                    cout << "Your sum is: ";
                    sum.print();
                    cout << endl << "Would you like to add another number? Enter Y or N: ";
                    cin >> another;
                    while(another != "Y" && another != "y" && another != "N" && another != "n"){
                        cout << "Invalid Entry. Enter Y or N: ";
                        cin >> another;
                    }
                
                cout << endl;
                }
            }
            else if(c3 == "2"){
                int n1;
                int n2;
                int d1;
                int d2;
                string another = "y";
                cout << "To calculate (n1/d1) - (n2/d2): " << endl;
                cout << "Enter the first numerator n1: ";
                cin >> n1;
                cout << endl << "Enter the first denominator d1: ";
                cin >> d1;
                fraction f1(n1, d1);
                cout << endl << "Enter the second numerator n2: ";
                cin >> n2;
                cout << endl << "Enter the second denominator d2: ";
                cin >> d2;
                fraction f2(n2, d2);
                fraction diff = f1-f2;
                cout << n1 << "/" << d1 << " - " << n2 << "/" << d2 << " = ";
                diff.print();
                
                cout << endl << "Would you like to subtract another fraction? Enter Y or N: ";
                cin >> another;
                int num;
                int denom;
                while(another == "Y" || another == "y"){ //user can continue to add numbers
                    
                    cout << "Please enter your next numerator: ";
                    cin >> num;
                    cout << "Please enter your next denominator: ";
                    cin >> denom;
                    fraction f3(num, denom);
                    diff= diff-f3;
                    cout << "Your difference is: ";
                    diff.print();
                    cout << endl << "Would you like to add another number? Enter Y or N: ";
                    cin >> another;
                    while(another != "Y" && another != "y" && another != "N" && another != "n"){
                        cout << "Invalid Entry. Enter Y or N: ";
                        cin >> another;
                    }
                
                cout << endl;
                }
            }
            else if(c3 == "3"){
                int n1;
                int n2;
                int d1;
                int d2;
                string another = "y";
                cout << "To calculate (n1/d1) * (n2/d2): " << endl;
                cout << "Enter the first numerator n1: ";
                cin >> n1;
                cout << endl << "Enter the first denominator d1: ";
                cin >> d1;
                fraction f1(n1, d1);
                cout << endl << "Enter the second numerator n2: ";
                cin >> n2;
                cout << endl << "Enter the second denominator d2: ";
                cin >> d2;
                fraction f2(n2, d2);
                fraction product = f1*f2;
                cout << n1 << "/" << d1 << " * " << n2 << "/" << d2 << " = ";
                product.print();
                
                cout << endl << "Would you like to multiply by another fraction? Enter Y or N: ";
                cin >> another;
                int num;
                int denom;
                while(another == "Y" || another == "y"){ //user can continue to add numbers
                    
                    cout << "Please enter your next numerator: ";
                    cin >> num;
                    cout << "Please enter your next denominator: ";
                    cin >> denom;
                    fraction f3(num, denom);
                    product= product+f3;
                    cout << "Your sum is: ";
                    product.print();
                    cout << endl << "Would you like to add another number? Enter Y or N: ";
                    cin >> another;
                    while(another != "Y" && another != "y" && another != "N" && another != "n"){
                        cout << "Invalid Entry. Enter Y or N: ";
                        cin >> another;
                    }
                
                cout << endl;
                }
            }
            else if(c3 == "4"){
                int n1;
                int n2;
                int d1;
                int d2;
                string another = "y";
                cout << "To calculate (n1/d1) / (n2/d2): " << endl;
                cout << "Enter the first numerator n1: ";
                cin >> n1;
                cout << endl << "Enter the first denominator d1: ";
                cin >> d1;
                fraction f1(n1, d1);
                cout << endl << "Enter the second numerator n2: ";
                cin >> n2;
                cout << endl << "Enter the second denominator d2: ";
                cin >> d2;
                fraction f2(n2, d2);
                fraction quot = f1+f2;
                cout << n1 << "/" << d1 << " / " << n2 << "/" << d2 << " = ";
                quot.print();
                
                cout << endl << "Would you like to divide by another fraction? Enter Y or N: ";
                cin >> another;
                int num;
                int denom;
                while(another == "Y" || another == "y"){ //user can continue to add numbers
                    
                    cout << "Please enter your next numerator: ";
                    cin >> num;
                    cout << "Please enter your next denominator: ";
                    cin >> denom;
                    fraction f3(num, denom);
                    quot= quot+f3;
                    cout << "Your quotient is: ";
                    quot.print();
                    cout << endl << "Would you like to add another number? Enter Y or N: ";
                    cin >> another;
                    while(another != "Y" && another != "y" && another != "N" && another != "n"){
                        cout << "Invalid Entry. Enter Y or N: ";
                        cin >> another;
                    }
                
                cout << endl;
                }
            }

        }
        else if(category == "4"){
            string c4;
            cout << "1: Addition" <<  endl
                 << "2: Subtraction" << endl
                 << "3: Multiplication" << endl
            << "4: Division" << endl << endl;
            cout << "Please enter the number corresponding to the category you would like to choose: ";
            getline(cin, c4);
            if(c4 == "1"){
                double a;
                double b;
                double c;
                double d;
                string another = "y";
                cout << "To calculate a+bi + c+di: " << endl;
                cout << "Enter the real part of the first number a: ";
                cin >> a;
                cout << "Enter the imaginary part of the first number b: ";
                cin >> b;
                complex_number c1(a, b);
                cout << endl << "Enter the real part of the second number c: ";
                cin >> c;
                cout << "Enter the imaginary part of the second number d: ";
                cin >> d;
                complex_number c2(c,d);
                complex_number sum = c1 + c2;
                
                c1.print();
                cout << " + ";
                c2.print();
                cout << " = ";
                sum.print();
                
                cout << endl << "Would you like to add another complex number? Enter Y or N: ";
                cin >> another;
                double real;
                double imag;
                while(another == "Y" || another == "y"){ //user can continue to add numbers
                    
                    cout << "Enter the real part of the number a: ";
                    cin >> real;
                    cout << "Enter the imaginary part of the number b: ";
                    cin >> imag;
                    complex_number c3(real ,imag);
                    sum= sum+c3;
                    cout << "Your sum is: ";
                    sum.print();
                    cout << endl << "Would you like to add another complex number? Enter Y or N: ";
                    cin >> another;
                    while(another != "Y" && another != "y" && another != "N" && another != "n"){
                        cout << "Invalid Entry. Enter Y or N: ";
                        cin >> another;
                    }
                }
                cout << endl;
            }
            else if(c4 == "2"){
                double a;
                double b;
                double c;
                double d;
                string another = "y";
                cout << "To calculate a+bi - c+di: " << endl;
                cout << "Enter the real part of the first number a: ";
                cin >> a;
                cout << "Enter the imaginary part of the first number b: ";
                cin >> b;
                complex_number c1(a, b);
                cout << endl << "Enter the real part of the second number c: ";
                cin >> c;
                cout << "Enter the imaginary part of the second number d: ";
                cin >> d;
                complex_number c2(c,d);
                complex_number diff = c1 - c2;
                
                c1.print();
                cout << " - ";
                c2.print();
                cout << " = ";
                diff.print();
                cout << endl << "Would you like to subtract another complex number? Enter Y or N: ";
                cin >> another;
                double real;
                double imag;
                while(another == "Y" || another == "y"){ //user can continue to add numbers
                    
                    cout << "Enter the real part of the number a: ";
                    cin >> real;
                    cout << "Enter the imaginary part of the number b: ";
                    cin >> imag;
                    complex_number c3(real ,imag);
                    diff= diff-c3;
                    cout << "Your difference is: ";
                    diff.print();
                    cout << endl << "Would you like to subtract another complex number? Enter Y or N: ";
                    cin >> another;
                    while(another != "Y" && another != "y" && another != "N" && another != "n"){
                        cout << "Invalid Entry. Enter Y or N: ";
                        cin >> another;
                    }
                }
                cout << endl;
            }
            else if(c4 == "3"){
                double a;
                double b;
                double c;
                double d;
                string another = "y";
                cout << "To calculate (a+bi) * (c+di): " << endl;
                cout << "Enter the real part of the first number a: ";
                cin >> a;
                cout << "Enter the imaginary part of the first number b: ";
                cin >> b;
                complex_number c1(a, b);
                cout << endl << "Enter the real part of the second number c: ";
                cin >> c;
                cout << "Enter the imaginary part of the second number d: ";
                cin >> d;
                complex_number c2(c,d);
                complex_number product = c1 * c2;
                
                c1.print();
                cout << " * ";
                c2.print();
                cout << " = ";
                product.print();
                
                cout << endl << "Would you like to multiply by another complex number? Enter Y or N: ";
                cin >> another;
                double real;
                double imag;
                while(another == "Y" || another == "y"){ //user can continue to add numbers
                    
                    cout << "Enter the real part of the number a: ";
                    cin >> real;
                    cout << "Enter the imaginary part of the number b: ";
                    cin >> imag;
                    complex_number c3(real ,imag);
                    product= product*c3;
                    cout << "Your sum is: ";
                    product.print();
                    cout << endl << "Would you like to multiply by another complex number? Enter Y or N: ";
                    cin >> another;
                    while(another != "Y" && another != "y" && another != "N" && another != "n"){
                        cout << "Invalid Entry. Enter Y or N: ";
                        cin >> another;
                    }
                }
                cout << endl;
            }
            else if(c4 == "4"){
                double a;
                double b;
                double c;
                double d;
                string another = "y";
                cout << "To calculate (a+bi)/(c+di): " << endl;
                cout << "Enter the real part of the first number a: ";
                cin >> a;
                cout << "Enter the imaginary part of the first number b: ";
                cin >> b;
                complex_number c1(a, b);
                cout << endl << "Enter the real part of the second number c: ";
                cin >> c;
                cout << "Enter the imaginary part of the second number d: ";
                cin >> d;
                complex_number c2(c,d);
                complex_number quot = c1 / c2;
                
                c1.print();
                cout << " / ";
                c2.print();
                cout << " = ";
                quot.print();
                
                cout << endl << "Would you like to divide by another complex number? Enter Y or N: ";
                cin >> another;
                double real;
                double imag;
                while(another == "Y" || another == "y"){ //user can continue to add numbers
                    
                    cout << "Enter the real part of the number a: ";
                    cin >> real;
                    cout << "Enter the imaginary part of the number b: ";
                    cin >> imag;
                    complex_number c3(real ,imag);
                    quot= quot/c3;
                    cout << "Your quotient is: ";
                    quot.print();
                    cout << endl << "Would you like to divide by another complex number? Enter Y or N: ";
                    cin >> another;
                    while(another != "Y" && another != "y" && another != "N" && another != "n"){
                        cout << "Invalid Entry. Enter Y or N: ";
                        cin >> another;
                    }
                }
                cout << endl;
            }
        }
        else if(category == "5"){
            string c5;
            cout << "1: Factors" << endl;
            cout << "2: Greatest Common Factor (GCF)" << endl;
            cout << "Please enter the number corresponding to the category you would like to choose: ";
            getline(cin, c5);
            if(c5 == "1"){
                int n;
                cout << "Enter a number: ";
                cin >> n;
                factor f = factor(n);
                vector<int> factors = f.get_factors();
                cout << endl << "The factors of " << n << "are:";
                for(int i = 0; i < factors.size(); i++){
                    cout << " " << factors[i];
                    if(i != factors.size()-1){
                        cout << ",";
                    }
                }
                cout << endl;
            }
            else if(c5 == "2"){
                int n1;
                int n2;
                cout << "Enter your first number: ";
                cin >> n1;
                cout << endl << "Enter your second number: ";
                cin >> n2;
                factor f1 = factor(n1);
                factor f2 = factor(n2);
                int gcf = f1.gcf(f2);
                cout << "The GCF of " << n1 << " and " << n2 << " is " << gcf << endl;
            }
        }
        else if(category == "6"){
            string c6;
            cout << "1: Multiples" << endl;
            cout << "2: Least Common Multiple (LCM)";
            cout << "Please enter the number corresponding to the category you would like to choose: ";
            getline(cin, c6);
            if(c6 == "1"){
                int n;
                int x;
                cout << "To find n multiples of a number x: " << endl;
                cout << "Enter a number x: ";
                cin >> x;
                cout << endl << "Enter the number of multiples n: ";
                cin >> n;
                multiple m = multiple(x,n);
                cout << "The first " << n << " multiples of " << x << " are: ";
                vector<int> mult = m.get_multiples();
                for(int i = 0; i < mult.size(); i++){
                    cout << " " << mult[i];
                    if(i != mult.size()-1){
                        cout << ",";
                    }
                }
                
            }
        
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
            if(c7 == "1"){
                int m;
                int n;
                cout << "Note, in order to add matrices they must have the same dimensions" << endl;
                cout << "To construct a m by n matrix: " << endl;
                cout << "Enter number of rows m: ";
                cin >> m;
                cout << "Enter number of columns n: ";
                cin >> n;
                
                double r1;
                double r2;
                vector<vector<double>> m1;
                vector<vector<double>> m2;
                cout << "We will now construct the first matrix: " << endl;
                for (int i = 0; i < n; i++){
                    cout << "Enter all elements in column " << i+1 << " seperated by a space: ";
                    for(int j = 0; j < n; j++){
                        cin >> r1;
                        m1[i][j] = r1;
                    }
                }
                matrix m_1(m, n, m1);
                
                cout<< "We will now construct the second matrix: " << endl;
                for (int i = 0; i < n; i++){
                    cout << "Enter all elements in column " << i << " seperated by a space: ";
                    for(int j = 0; j < n; j++){
                        cin >> r2;
                        m2[i][j] = r2;
                    }
                
                }
                matrix m_2(m, n, m2);
                matrix sum = m_1 + m_2;
                m_1.print();
                cout << endl << endl << "          +         ";
                m_2.print();
                cout << endl << endl << "          =         ";
                sum.print();
                cout << endl;
            }
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
