#include "bibtex.h"

bibtex::bibtex(string s)
{
	filename = s;
}

bibtex::~bibtex()
{
}

void bibtex::reader()
{
	ifstream bibtext;											// to read the BibTeX document
	bibtext.open(filename);
	bibtext.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	// loop until there is not any line or no tag is found
	while (getline(bibtext, line) && str_parse())
	{
		// delete blank spaces and then convert every tag to the upper case
		str_delSpaces();
		str_UpperCase();

		// skip the tag if content is missing from the BibTeX document line
		if(content != "")
			cout << "<" << tag << "> " << content << endl;
	}
	
	// Timestamping
	td1.set_time();
	time = td1.get_time();
	cout << endl << ">> Action sucessfully completed at "<< time << endl;

	// Closing the input BibTeX document
	bibtext.close();
}

int bibtex::str_parse()
{
	unsigned d1_idxS = 0, d1_idxE = 0, d2_idxS = 0;				// to store Start and End indices of d1 and d2

	// Find the start of first delimiter (d1)
	d1_idxS = line.find(d1);

	// identify "tag" and "content" when start of the first delimiter (d1) is found
	if (d1_idxS != string::npos)
	{
		tag = line.substr(0, d1_idxS);
		d1_idxE = d1_idxS + d1.length();
		d2_idxS = line.find(d2);

		content = line.substr(d1_idxE, d2_idxS - d1_idxE);
	}

	// End function call when no delimiter is found
	else return 0;
}

void bibtex::str_UpperCase()
{
	std::transform(tag.begin(), tag.end(), tag.begin(), ::toupper);
}

void bibtex::str_delSpaces()
{
	tag.erase(std::remove(tag.begin(), tag.end(), ' '), tag.end());
}
