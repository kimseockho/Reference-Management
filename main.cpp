/*
---------------------------------
BibTeX File Parsing Module v2.0
---------------------------------
Decription:		This program reads a BibTeX text file and extracts each element and tag line by line.
Author:			Shahzad Ali
Email:			shahzadali@knu.ac.kr
Date Created:	Wed, 18 April 2018
Last Modified:	Tue, 24 April 2018

*/

#include "bibtex.h"

using namespace std;

void main(void)
{
	bibtex b("ref3.txt");
	b.reader();

	system("pause");
}