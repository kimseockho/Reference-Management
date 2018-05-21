#define __STDC_WANT_LIB_EXT1__ 1

#include<iostream>
#include<ctime>

using namespace std;

class idate
{
private:
	char s[64];
	time_t t;

public:
	idate();
	~idate();
	void set_time();
	char* get_time();
};

