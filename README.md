# Advanced Calculator
## Table of Contents
* [Proposal](#Proposal)
* [Process](#Process)
* [Functionality](#Functionality) 

## Proposal 
* For my final project I will create an advanced calculator. 
* I would like to implement matrix operations and study the math behind different functions in order to implement them. 
* I will keep adding different operations throughout the remaining quarter with increasing difficulty. In addition to basic operations, I hope to implement matrix multiplication and perhaps determinants of matrices. 
* Depending on how much Qt material we get through in the class, I would like to use Qt to create a visual interface for the calculator. 

## Process
### Matrices 
* To begin, I decided to start working on the matrix class. I decided to implement a matrix as a 2D vector, where we know the row size and column size prior to formation. I then thought about which matrix operations would be helpful. I knew that matrix addition and subtraction is fairly straightforward because it is done element wise. Matrix multiplication is a bit more difficult but I though that it was possible, same with transposes. Determinants and Inverses are very complex operations for large matrices, however there are special calculations that can be used for 2 by 2 matrices so I decided to restrict these calculations for 2 by 2 cases. 
* I created an experimental branch to test work on matrix operations in particular. I had a lot of difficulty figuring out how to read in values from the user into a matrix. It turns out I wasn’t initializing the 2d vector properly. I though about using an input iterator that tracks the end of the stream to read in values, but found that the way I set it up worked fine. 
* After a lot of trial and error I managed to implement most of the matrix operations with matrix multiplications being the most complicated. Unfortunately, the determinant and inverse functions do not work due to bad access that I did not manage to fix. 
### Factors
* I then created a factor class that can return the factors of a number, and calculate the GCF. 
### Advanced Calculation
* I also created an advanced calculations class that contained functions I made such as power, factorial, permutation, combination, and absolute value functions. 
### Multiples
* Since I had already created a factor class, I decided to add a multiples class. A user can find the first n multiples of a given number, and can also find the LCM of two inputted numbers. 
### Fractions 
* I also implemented a fraction class that overloaded the +, - , *, / operators. I implemented fail safes to avoid crashing when having a non-zero denominator, and made sure the fractions was always in simplified form. I tried to overload the << operator to be able to output to the console and file but I found that a print function actually worked better in this case. I made it so that this print function printed both to the console and the output file. 
### Complex Numbers 
* The complex numbers class behaves similar to the fractions class. I wanted a clean ouput look so I decided that whenever something had a+0i it would display as a, and when something had a+-bi it would display as a-bi, I also inplememnted a+1i as a+i. 
### Main Routine 
* By the time I was ready to start working on how the calculator would operate, I had a lot of different functions, and a very basic understanding of Qt. I felt that I would be able to achieve a better functioning and cleaner look by just using regular c++ as opposed to the GUI of Qt. 
* I decided that an option menu approach was the best way for the user to navigate the advanced calculator. I implemented this by uses a series of if/else if runs. Initially each category and subcategory had its on if condition, but I noticed there was a lot of repeat so I condensed some of the options. 
* The user first chooses which of the following categories they would like to start with: Basic Arithmetic, Advanced Calculations, Fractions, Complex Numbers, Factors, Multiples, Matrices
* Once they choose an initial category, another option menu corresponding to specific operations appears and the user chooses their next option. 
* For example, if I wanted to multiply complex numbers, I would enter 4 (to choose 4: Complex Numbers) from the main menu, and then 3 (to choose 3: Multiplication) from the complex numbers menu.
* For basic arithmetic, fractions, and complex numbers the user can continue to +, -, *, / numbers and the total will appear after each iteration. 
* After each run the user is asked if they would like to do anything else, if they indicate yes, they are taken back to the original menu list and can start over. The entire run is recorded in the “calculator.txt” output file. 
### File Output 
* In order to be able to output to the console and screen at the same time, I decided to create a template to be able to print to two streams at once. I used this function mostly when I needed to print text (strings) to the screen and file, but in cases when I outputting something that involves a lot of mixed types, the normal cout and fout was actually quicker. 
* Most of the print functions I wrote for my classes passed the fsteam fout by reference so that it printed both to the console and file at the same time. 
* I organized the file output such that the user will be able to see which option they picked and what the answer is at each step. I did not want to include too much information in the file. 

## Functionality
* In order to be able to better understand the capabilities of the advanced calculator I screen recorded a sample run which can be found here: https://youtu.be/faWfRCknpTg 
