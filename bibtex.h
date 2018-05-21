
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <ctime>
#include <time.h>
#include "idate.h"

using namespace std;

class bibtex
{
private:
	string const d1 = "={", d2 = "}";								// delimiters to identify the start and end
	string filename = " ", line = " ", content = " ", tag = " ";	// holds BibTex filename, line and parsed content/tag 
	char* time;														// stores reference creation/modification time
	idate td1;

	int str_parse();
	void str_UpperCase();
	void str_delSpaces();

public:
	
	bibtex(string s);
	~bibtex();
	void reader();

};

