# CS 210 Portfolio Project – Corner Grocer

## Project Summary

This project was developed for CS 210 to help the Corner Grocer analyze customer purchasing habits. The program reads a text file containing items purchased throughout the day, counts how many times each item appears, and allows the user to interact with the data using a menu interface. The user can also search for the frequency of a item, display the frequency of purchased items, view a histogram of the purchase data, and generate a backup file containing the frequency information.

The purpose of this project was to demonstrate object-oriented programming concepts in C++, file input and output, data structures, and good program design.

## What I Did Well

One of the strongest aspects of this project was organizing the code into separate files using a class based design. I separated the implementation into a header file, source file, and main program which made the code easier to understand and maintain. I also created a user friendly menu that validates input and allows the user to repeatedly perform different operations until they choose to exit.

## Areas for Improvement

If I were to continue developing this project, I would improve the UI by making it more visually appealing(or possibly create a front end for it using another language) and allowing searches that are not case sensitive. I would also add additional error handling for unexpected input and provide more detailed responses if the input file cannot be found or contains invalid data.

## Challenges and How I Overcame Them

The most challenging part of this project was reading data from a file and storing the item frequencies efficiently. Associating item names with their purchase counts was a bit challenging using a map, but reviewing course materials and C++ documentation helped me understand how maps simplify counting values that occur multiple times. I believe breaking the program into smaller functions made the project easier to develop and debug versus having all logic in the main file.

## Transferable Skills

This project thought me several skills that will be useful in future coursework and software development projects, including:

* Object-oriented programming in C++
* Reading from and writing to files
* Using maps
* Writing modular, reusable code
* Designing menu-driven applications
* Creating programs that are organized, maintainable, and easy to read

These skills provide a strong foundation for building larger and more complex software applications.

## Maintainability, Readability, and Adaptability

I made this program maintainable by separating responsibilities across multiple source files and organizing the code into functions and methods. Descriptive variable names and comments improve readability, while the use of a dedicated class makes the program easier to modify or extend in the future.
