/* 
---------------------------------
BibTeX File Parsing Module v1.0
---------------------------------
Decription:		This program reads a BibTeX text file and extracts the information and corresponding tags line by line.
Author:			Shahzad Ali
Date Created:	Wed, 18 April 2018
Date Modified:	Thu, 19 April 2018

*/

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

string str_parser(const string &s, string &tag)
{
	string const d1 = "={", d2 = "},";
	unsigned d1_idxS = 0, d1_idxE = 0, d2_idxS = 0;
	
	d1_idxS = s.find(d1);

	if (d1_idxS != string::npos)
	{
		tag = s.substr(0, d1_idxS);
		d1_idxE = d1_idxS + d1.length();
		d2_idxS = s.find(d2);

		return s.substr(d1_idxE, d2_idxS - d1_idxE);
	}
	else
		return " ";
}

void  toUpperCase(string& str)
{
	std::transform(str.begin(), str.end(), str.begin(), ::toupper);
}

void delSpaces(string& str)
{
	str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
}

void main(void)
{

	string line = " ", info = " ", tag = " ";
	ifstream bibtext;

	bibtext.open("ref1.txt");

	while (getline(bibtext, line))
	{
		info = str_parser(line, tag);
		delSpaces(tag);
		toUpperCase(tag);

		cout << "<" << tag << "> "<< info << endl;
	}

	bibtext.close();

	system("pause");
}
