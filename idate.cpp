#include "idate.h"

void idate::set_time()
{
	t = time(NULL);
}

char* idate::get_time()
{
	errno_t e = ctime_s(s, 64, &t);
	//cout << endl << ">> Action sucessfully completed at "<< s << endl;

	return s;
}

idate::idate()
{	
}

idate::~idate()
{
}