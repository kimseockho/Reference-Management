# REFERENCE MANAGEMENT SYSTEM

Aim of this Program
-------------------------
To facilate a user to import bibtext files, maintain a repository of imported references, and export them in a particular style like IEEE, APA, and MLA etc.


Description of the Files
-------------------------

1) main.cpp: 
It is the main file to be executed for parsing a given BibTeX file. The three text files (ref1, ref2, and ref3) are provided as a sample input.

2) bibtex.cpp and bibtex.h: 
These files are the core of this program and are used to implement the functions like reading an input file line by line, parsing each line of string datatype, converting a string to uppercase, and deleting blank spaces in a string.

3) idate.cpp, idate.h: 
These are responsible for the timestamping and called when 1) file is read for the first time, 2) any update is made to a previously read file.


History
-------------------------

v2.0: Object orientated approach is used to implement the string parsing module. Some bugs during the parsing are fixed; timestamping is implemented, output is generated in the form of (tag, content) pair e.g. (year, 2018)

v1.0: It reads a bibtex file and parse the strings
