# Study notes
This is the path of my c learning!
I am leaning C with the book "**C Programming Language, 2nd Edition**"

## Linux command:

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

