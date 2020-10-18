# homework2
Homework 2 of ECE231. Due 10/3/2020 at midnight.

## Context
For this assignment, you are going to do a classic problem. Create a class for complex numbers. You are given the files `complex.hpp` which declares some methods and operator overloads for the `Complex` class. You are also given `main.cpp`, which will test the `Complex` class. You'll have to create `A cpp file that will contain your contructors, methods, and operator overloading`.

## complex.hpp
In `complex.hpp`, the class has these attributes (data members):

    double _real
    double _imag
  
You can edit `_real` and `_imag`, as long as you have two double variables to represent the real and imaginary part of a complex number. The head also has these prototypes:
    
    Default constructor (no arguments)
    Default constructor (with arguments)
    Copy constructor
    A getter method to get the real member
    A getter method to get the imaginary number
    A method to print the attributes 
    A method to subtract two complex numbers
    A method to multiply two complex numbers
    A method to get the complex conjugate
    A method to get the magnitude of a complex number
    A method to get the phase (or angle) of a complex number
    
and the operator overloading declarations:

    +
    /
    =
    <<
    >>
    
Feel free to edit the inputs, just make sure that you are being consistent with your headerfile declarations and function implementations.

Additionally, the header file is missing:
  
    A getter method to get the real member
    A getter method to get the imaginary number
    A method to add two complex numbers
    A method to divide two complex numbers
    
It is also missing these operator overloading declarations:

    -
    *
    
Your job is to fill in what is missing, and in your cpp file, you must implement all prototypes defined above. You will create a Makefile that compiles and runs your code smoothly.

To see an example of creating a class with multiple files, please see [this](https://github.com/UNMECE231Fa2020/CppClasses/tree/master/IntList).

## Rubric

|Requirement                                         |Score  |
|  :---:                                             | :---: |
|Completing the header file and prototypes           | 20%   |
|Creation of cpp files and implementation of methods | 30%   |
|Correct implementation of overloading operators     | 20%   |
|Creation of Makefile                                | 20%   |
|Clean and readable code                             | 10%   |
|Total                                               | 100%  |
