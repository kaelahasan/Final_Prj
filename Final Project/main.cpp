#include <iostream>
#include <fstream>
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

ofstream fout; //file output


template <class universal>
void print(ostream &os1, ostream &os2, universal x){
    os1 << x;
    os2 << x;
}

int main() {
    fout.open("calculator.txt");
    print(cout, fout, "Hello. This is an advanced calculator.\n");
    string again = "Y";
    while (again == "Y" || again == "y"){
        cout << "1: Basic Arithmetic\n";
        cout << "2: Advanced Calculations\n";
        cout << "3: Fractions\n";
        cout << "4: Complex Numbers\n";
        cout << "5: Factors\n";
        cout << "6: Multiples\n";
        cout << "7: Matrices\n";
        string category;
        cout << "Please enter the number corresponding to the category you would like to choose: ";
        getline(cin, category);
        print(cout, fout, "\n");
        if(category == "1"){ //Basic Arithmetic
            string c1;
            cout << "1: Addition\n";
            cout << "2: Subtraction\n";
            cout << "3: Multiplication\n";
            cout << "4: Division\n";
            cout << "Please enter the number corresponding to the category you would like to choose: ";
            getline(cin, c1);
            print <string> (cout, fout, "\n");
            if (c1 == "1" || c1 == "2" || c1 == "3" || c1 == "4" ){ //Addition
                double n1;
                double n2;
                double sum = 0.0;
                double diff = 0.0;
                double mult = 0.0;
                double div = 0.0;
                string another = "y";
                if(c1 == "1") print <string> (cout, fout, "You chose addition\n");
                else if(c1 == "2") print <string> (cout, fout, "You chose subtraction\n");
                else if(c1 == "3") print <string> (cout, fout, "You chose multiplication\n");
                else if(c1 == "4") print <string> (cout, fout, "You chose division\n");
                cout << "Please enter your first number: ";
                cin >> n1;
                cout << "Please enter your next number: ";
                cin >> n2;
                print <string> (cout, fout, "\n");
                if(c1 == "1") sum = n1+n2;
                else if(c1 == "2") diff = n1-n2;
                else if(c1 == "3") mult = n1*n2;
                else if(c1 == "4") div = n1/n2;
                print <double> (cout, fout, n1);
                if(c1 == "1") print <string> (cout, fout, " + ");
                else if(c1 == "2") print <string> (cout, fout, " - ");
                else if(c1 == "3") print <string> (cout, fout, " * ");
                else if(c1 == "4") print <string> (cout, fout, " / ");
                print <double> (cout, fout, n2);
                print <string> (cout, fout, " = ");
                if(c1 == "1") print <double> (cout, fout, sum);
                else if(c1 == "2") print <double> (cout, fout, diff);
                else if(c1 == "3") print <double> (cout, fout, mult);
                else if(c1 == "5") print <double> (cout, fout, div);
                cout << endl << "Would you like to ";
                if(c1 == "1") cout << "add";
                else if(c1 == "2") cout << "subtract";
                else if(c1 == "3") cout << "multiply by";
                else if(c1 == "4") cout << "divide by";
                cout << " another number? Enter Y or N: ";
                cin >> another;
                double n;
                while(another == "Y" || another == "y"){ //user can continue to add numbers
                    
                    cout << "Please enter your next number: ";
                    cin >> n;
                    if(c1 == "1"){
                        sum+=n;
                        cout << "Your sum is: " << sum << endl;
                    }
                    else if(c1 == "2"){
                        diff-=n;
                        cout << "Your difference is: " << diff << endl;
                    }
                    else if(c1 == "3"){
                        mult*=n;
                        cout << "Your product is: " << mult << endl;
                    }
                    else if(c1 == "4"){
                        div/=n;
                        cout << "Your quotient is: " << div << endl;
                    }
                    
                    cout << "Would you like to add another number? Enter Y or N: ";
                    cin >> another;
                    while(another != "Y" && another != "y" && another != "N" && another != "n"){
                        cout << "Invalid Entry. Enter Y or N: ";
                        cin >> another;
                    }
                }
                if(c1 == "1") fout << "\nYour final sum is: " << sum << endl;
                else if(c1 == "2") fout << "\nYour final difference is: " << diff << endl;
                else if(c1 == "3") fout << "\nYour final product is: " << mult << endl;
                else if(c1 == "4") fout << "\nYour final quotient is: " << div << endl;
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
                print <string> (cout, fout, "You chose raising to a power.\n");
                cout << "To calculate b^x: " << endl;
                cout << "Enter the base b: ";
                cin >> b;
                cout << endl << "Enter the power x: ";
                cin >> x;
                
                cout << b << "^" << x << " = " << power(b, x);
                fout << b << "^" << x << " = " << power(b, x);
            }
            else if(c2 == "2"){ //square root (taken from cmath library)
                double s;
                print <string> (cout, fout, "You chose square root.\n");
                cout << "Enter the number you would like to square root: ";
                cin >> s;
                while(s<0){
                    cout << "Outside the domain of the square root function. " << endl;
                    cout << "Enter a positive number: ";
                    cin >> s;
                }
                cout << endl << "The square root of " << s << " is: " << sqrt(s);
                fout << endl << "The square root of " << s << " is: " << sqrt(s);
                
            }
            else if(c2 == "3"){ //factorial
                print <string> (cout, fout, "You chose factorial.\n");
                int n;
                cout << "To calculation n!: " << endl;
                cout << "Enter n: ";
                cin >> n;
                cout << endl << n << "! is: " << factorial(n);
                fout << endl << n << "! is: " << factorial(n);
            }
            else if(c2 == "4"){ //combination
                int n;
                int r;
                print <string> (cout, fout, "You chose combination.\n");
                cout << "To calculate C(n,r): " << endl;
                cout << "Enter n: ";
                cin >> n;
                cout  << "Enter r: ";
                cin >> r;
                cout << endl << "C(n,r) = " << combination(n, r);
                fout << endl << "C(n,r) = " << combination(n, r);
                
            }
            else if(c2 == "5"){ //permutation
                print <string> (cout, fout, "You chose permutation.\n");
                int n;
                int r;
                cout << "To calculate P(n,r): " << endl;
                cout << "Enter n: ";
                cin >> n;
                cout << "Enter r: ";
                cin >> r;
                cout << endl << "P(n,r) = " << permutation(n, r);
                fout << endl << "P(n,r) = " << permutation(n, r);
    
            }
            else if(c2 == "6"){ //absolute value
                print <string> (cout, fout, "You chose absolute value.\n");
                double x;
                cout << "To calculate |x|, enter x: ";
                cin >> x;
                cout << "|x| = " << absolute_value(x) << endl;
                fout << "|x| = " << absolute_value(x) << endl;
            }
            print(cout, fout, "\n");
        
        }
        else if(category == "3"){ //Fractions
            string c3;
            cout << "1: Addition" <<  endl
                 << "2: Subtraction" << endl
                 << "3: Multiplication" << endl
                 << "4: Division" << endl;
            cout << "Please enter the number corresponding to the category you would like to choose: ";
            getline(cin, c3);
            if(c3 == "1" || c3 == "2" || c3 == "3" || c3 == "4"){ //Addition
                if(c3 == "1") print <string> (cout, fout, "You chose adding fractions.\n");
                else if(c3 == "2") print <string> (cout, fout, "You chose subtracting fractions.\n");
                else if(c3 == "3") print <string> (cout, fout, "You chose multiplying fractions.\n");
                else if(c3 == "4") print <string> (cout, fout, "You chose dividing fractions.\n");
                int n1;
                int n2;
                int d1;
                int d2;
                fraction sum;
                fraction diff;
                fraction mult;
                fraction div;
                string another = "y";
                cout << "To calculate (n1/d1) ";
                if(c3 == "1") cout << " + ";
                else if(c3 == "2") cout << " - ";
                else if(c3 == "3") cout << " * ";
                else if(c3 == "4") cout << " / ";
                cout << " (n2/d2): " << endl;
                cout << "Enter the first numerator n1: ";
                cin >> n1;
                cout << "Enter the first denominator d1: ";
                cin >> d1;
                fraction f1(n1, d1);
                cout << endl << "Enter the second numerator n2: ";
                cin >> n2;
                cout << "Enter the second denominator d2: ";
                cin >> d2;
                fraction f2(n2, d2);
                if(c3 == "1") sum = f1+f2;
                else if(c3 == "2") diff = f1-f2;
                else if(c3 == "3") mult = f1*f2;
                else if(c3 == "4") div = f1/f2;
                cout << n1 << "/" << d1;
                fout << n1 << "/" <<d1;
                if(c3 == "1") print <string> (cout, fout, " + ");
                else if(c3 == "2") print <string> (cout, fout, " - ");
                else if(c3 == "3") print <string> (cout, fout, " * ");
                else if(c3 == "4") print <string> (cout, fout, " / ");
                cout << n2 << "/" << d2 << " = ";
                fout << n2 << "/" << d2 << " = ";
                if(c3 == "1") sum.print_both(fout);
                else if(c3 == "2") diff.print_both(fout);
                else if(c3 == "3") mult.print_both(fout);
                else if(c3 == "4") div.print_both(fout);
                
                cout << endl << "Would you like to ";
                if(c3 == "1") cout << "add";
                else if(c3 == "2") cout << "subtract";
                else if(c3 == "3") cout << "multiply by";
                else if(c3 == "5") cout << "divide by";
                    
                cout << " another fraction? Enter Y or N: ";
                cin >> another;
                int num;
                int denom;
                while(another == "Y" || another == "y"){ //user can continue to add numbers
                    
                    cout << "Please enter your next numerator: ";
                    cin >> num;
                    cout << "Please enter your next denominator: ";
                    cin >> denom;
                    fraction f3(num, denom);
                    if(c3 == "1"){
                        sum= sum+f3;
                        cout << "Your sum is: ";
                        sum.print();
                    }
                    else if(c3 == "2"){
                        diff= diff-f3;
                        cout << "Your difference is: ";
                        diff.print();
                    }
                    else if(c3 == "3"){
                        mult= mult*f3;
                        cout << "Your product is: ";
                        mult.print();
                    }
                    else if(c3 == "4"){
                        div= div/f3;
                        cout << "Your quotient is: ";
                        div.print();
                    }
                    
                    cout << endl << "Would you like to add another number? Enter Y or N: ";
                    cin >> another;
                    while(another != "Y" && another != "y" && another != "N" && another != "n"){
                        cout << "Invalid Entry. Enter Y or N: ";
                        cin >> another;
                    }
                }
                if(c3 == "1"){
                    fout << "\nYour final sum is: ";
                    sum.f_print(fout);
                    }
                else if(c3 == "2"){
                    fout << "\nYour final difference is: ";
                    diff.f_print(fout);
                }
                else if(c3 == "3"){
                    fout << "\nYour final product is: ";
                    mult.f_print(fout);
                }
                else if(c3 == "4"){
                    fout << "\nYour final quotient is: ";
                    div.f_print(fout);
                }
                print(cout, fout, "\n");
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
            if(c4 == "1" || c4 == "2" || c4 == "3" || c4 == "4"){
                double a;
                double b;
                double c;
                double d;
                complex_number sum;
                complex_number diff;
                complex_number mult;
                complex_number div;
                string another = "y";
                cout << "To calculate a+bi";
                if(c4 == "1") cout << " + ";
                else if(c4 == "2") cout << " - ";
                else if(c4 == "3") cout << " * ";
                else if(c4 ==  "4") cout << " / ";
                cout << "c+di: " << endl;
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
                if(c4 == "1") sum = c1 + c2;
                else if(c4 == "2") diff = c1 - c2;
                else if(c4 == "3") mult = c1 * c2;
                else if(c4 ==  "4") div = c1 / c2;
                
                c1.print();
                
                if(c4 == "1") cout << " + ";
                else if(c4 == "2") cout << " - ";
                else if(c4 == "3") cout << " * ";
                else if(c4 ==  "4") cout << " / ";
                
                c2.print();
                cout << " = ";
                if(c4 == "1") sum.print();
                else if(c4 == "2") diff.print();
                else if(c4 == "3") mult.print();
                else if(c4 ==  "4") div.print();
                
                cout << endl << "Would you like to ";
                if(c4 == "1") cout << "add";
                else if(c4 == "2") cout << "subtract";
                else if(c4 == "3") cout << "multiply by";
                else if(c4 ==  "4") cout << "divide by";
                cout << " another complex number? Enter Y or N: ";
                cin >> another;
                double real;
                double imag;
                while(another == "Y" || another == "y"){ //user can continue to add numbers
                    
                    cout << "Enter the real part of the number a: ";
                    cin >> real;
                    cout << "Enter the imaginary part of the number b: ";
                    cin >> imag;
                    complex_number c3(real ,imag);
                    if(c4 == "1"){
                        sum = sum + c3;
                        cout << "Your sum is: ";
                        sum.print();
                    }
                    else if(c4 == "2"){
                        diff = diff - c3;
                        cout << "Your difference is: ";
                        diff.print();
                    }
                    else if(c4 == "3"){
                        mult = mult * c3;
                        cout << "Your product is: ";
                        mult.print();
                    }
                    else if(c4 ==  "4"){
                        div = div / c3;
                        cout << "Your quotient is: ";
                        div.print();
                    }
                    cout << endl << "Would you like to add another complex number? Enter Y or N: ";
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
                cout << endl << "The factors of " << n << " are:";
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
            cout << "2: Least Common Multiple (LCM)" << endl;
            cout << "Please enter the number corresponding to the category you would like to choose: ";
            getline(cin, c6);
            cout << endl;
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
                cout << endl;
            }
            else if(c6 == "2"){
                int n1;
                int n2;
                cout << "Enter your first number: ";
                cin >> n1;
                cout << endl << "Enter your second number: ";
                cin >> n2;
                multiple m1(n1, 10);
                int lcm = m1.lcm(n2);
                cout << "The LCM of " << n1 << " and " << n2 << " is " << lcm << endl;
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
            if(c7 == "1" || c7 == "2"){
                int m;
                int n;
                cout << "Note, in order to ";
                if (c7 == "1"){
                    cout << "add";
                }
                else if(c7 == "2"){
                    cout << "subtract";
                }
                cout << "matrices they must have the same dimensions" << endl;
                cout << "To construct a m by n matrix: " << endl;
                cout << "Enter number of rows m: ";
                cin >> m;
                cout << "Enter number of columns n: ";
                cin >> n;
                
                vector<vector<double>> m1;
                vector<vector<double>> m2;
                cout << "We will now construct the first matrix: " << endl;
                for(int k =0; k<n; k++){
                    m1.push_back(vector<double> (m));
                }
                for (int i = 0; i < n; i++){
                    cout << "Enter all elements in row " << i+1 << " seperated by a space: ";
                    for(int j = 0; j < m; j++){
                        cin >> m1[i][j];
                    }
                }
                matrix m_1(m, n, m1);
                for(int l =0; l < n; l++){
                    m2.push_back(vector<double> (m));
                }
                cout<< "We will now construct the second matrix: " << endl;
                for (int i = 0; i < n; i++){
                    cout << "Enter all elements in row " << i+1 << " seperated by a space: ";
                    for(int j = 0; j < m; j++){
                            cin >> m2[i][j];
                        }
                
                }
                matrix m_2(m, n, m2);
                matrix sum = m_1 + m_2;
                matrix diff = m_1 - m_2;
                m_1.print();
                cout << endl << endl << "         ";
                if(c7 == "1"){
                    cout << "+";
                }
                else if(c7 == "2"){
                    cout << "-";
                }
                cout << "         " << endl;
                m_2.print();
                cout << endl << endl << "          =         " << endl;
                if(c7 == "1"){
                    sum.print();
                }
                else if(c7 == "2"){
                    diff.print();
                }
                cout << endl;
            }
            else if(c7 == "3"){
                int m;
                int n;
                int p;
                cout << "Note, in order to multiply matrices the column dimension of the first matrix must match the row dimension of the second matrix: (m x n) X (n x p) = n x p" << endl;
                cout << "To construct the first m by n matrix: " << endl;
                cout << "Enter number of rows m: ";
                cin >> m;
                cout << "Enter number of columns n: ";
                cin >> n;
                vector<vector<double>> m1;
                vector<vector<double>> m2;
                cout << "We will now construct the first matrix: " << endl;
                for(int k =0; k<n; k++){
                    m1.push_back(vector<double> (m));
                }
                for (int i = 0; i < n; i++){
                    cout << "Enter all elements in row " << i+1 << " seperated by a space: ";
                    for(int j = 0; j < m; j++){
                        cin >> m1[i][j];
                    }
                }
                matrix m_1(m, n, m1);
    
                for(int l =0; l < n; l++){
                    m2.push_back(vector<double> (m));
                }
                cout<< "We will now construct the second matrix: " << endl;
                cout << "To construct an m x p matrix, enter the number of columns p: ";
                cin >> p;
                
                for (int i = 0; i < p; i++){
                    cout << "Enter all elements in row " << i+1 << " seperated by a space: ";
                    for(int j = 0; j < m; j++){
                            cin >> m2[i][j];
                        }
                    
                }
                matrix m_2(m, n, m2);
                matrix product = m_1 * m_2;
                m_1.print();
                cout << endl << endl << "          *         " << endl;
                m_2.print();
                cout << endl << endl << "          =         " << endl;
                product.print();
                cout << endl;
            }
            else if(c7 == "4"){
                int n;
                int m;
                cout << "We will take the transpose of an m by n matrix: " << endl;
                cout << "Enter number of rows m: ";
                cin >> m;
                cout << "Enter number of columns n: ";
                cin >> n;
                vector<vector<double>> m1;
                cout << "We will now construct the matrix by row: " << endl;
                for(int k =0; k<n; k++){
                    m1.push_back(vector<double> (m));
                }
                for (int i = 0; i < n; i++){
                    cout << "Enter all elements in row " << i+1 << " seperated by a space: ";
                    for(int j = 0; j < m; j++){
                        cin >> m1[i][j];
                    }
                }
                matrix mat(m,n, m1);
                matrix transpose = mat.transpose();
                
                cout << "The transpose of: " << endl << endl;
                mat.print();
                cout << endl << endl << "is" << endl << endl;
                transpose.print();
                cout << endl;
            }
            else if(c7 == "5" || c7 == "6"){ //needs fixing - bad access for determinant and inverse
                cout << "To calculate the ";
                if (c7 == "5"){
                    cout << "determinant";
                }
                else if (c7 == "6"){
                    cout << "inverse";
                }
                cout << " of a 2 by 2 matrix: " << endl;
                vector<vector<double>> m1;
                cout << "We will now construct the matrix by row: " << endl;
                for(int k =0; k<2; k++){
                    m1.push_back(vector<double> (2));
                }
                for (int i = 0; i < 2; i++){
                    cout << "Enter all elements in row " << i+1 << " seperated by a space: ";
                    for(int j = 0; j < 2; j++){
                        cin >> m1[i][j];
                    }
                }
                matrix mat(2,2, m1);
                if (c7 =="5"){
                    cout << "The determinant of: ";
                }
                else if(c7 == "6"){
                    cout << "The inverse of :";
                }
                cout << endl << endl;
                mat.print();
                cout << endl << endl << "is" << endl << endl;
                if(c7 == "5"){
                    cout << mat.determinant(); //NEEDS FIXING
                }
                else if(c7 == "6"){
                    matrix inverse = mat.inverse();
                    inverse.print();
                }
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
    fout.close();
    return 0;
}
