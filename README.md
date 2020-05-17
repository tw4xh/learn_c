# Study notes
This is the path of my c learning!
I am leaning C with the book "**C Programming Language, 2nd Edition**"

## Useful Linux command:

1. mkdir: create folder
2. touch: create file
3. vim: edit file
4. :x : save and close the file
5. cc xxx.c: compile the c file. The output file will be "a.out"
6. ./a.out: run the compiled file

## 1 - Hello world:
1. The program begins executing at the beginning of main
2. **"\n"** is for newline
3. **printf** is a library function that prints output 

## 2 - Fahrenheit_Celsius_table:
1. %d: print as integer
2. \t: print tab
3. %nd: print the number right-justified
4. 5.0/9.0 gives a floating-point value
5. %6.1f: print the number at least 6 characters wide, with 1 digit after the decimal point
6. for statement: for(i = 0; i<= max; i = i+step){};

## 3 - File copying
1. getchar(): reads teh next input character from a text stream and returns that as its value
2. putchar(c): prints a character each time it is called
3. EOF is an integer defined in <stdio.h>, usually it is -1
4. c = getchar() is an expression and has a value, which is the value of the left hand side after the assignment
5. The precedence of != is higher than that of =

## 4 - Character counting

## 5 - Line counting
1. '\n' is a single character and it is 10 in ASCII

## 6 - Word counting
1. nl = nw = nc = 0; sets all three variables to zero. The sequence is from right to left
2. || is OR, && is AND. AND has higher precedence than OR. Expressions connected by && or || are evaluated left to right, and it is guaranteed that evaluation will stop as soon as the truth or falsehood is known
3. How would you test the word count program? What kinds of input are most likely to uncover bugs if there are any?
Testing the word count program involves, giving three kinds of inputs.

Valid Inputs.
Boundary Condition Inputs.
Invalid Inputs.

For Valid Inputs, it could be any stream of space separate text. It has valid space, newline and tab characters. 
For Boundary conditions, a file entirely consisting of n, or a file entirely consisting of t character or a empty file.
For invalid Inputs, an unclosed file which does not have EOF, which is tricky to provide can be given to this program. A unicode character file can be given and see if getchar() handles it properly. We tested it and it works.
http://www.learntosolveit.com/cprogramming/Ex_1.11_test_word_count.html














