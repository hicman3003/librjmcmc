#include <iostream>
#include <string>

class RJMCMC_BuildingsDetectionThread
{
public :
	void *Entry();
};

#define USE_IHM 0
#include "RJMCMC_BuildingsDetectionThread.hpp"


int main (int argc, char **argv)
{
	if (!BuildingsDetectorParametersSingleton::Instance()->ParseCmdLine(argc, argv))
		return -1;
	
	RJMCMC_BuildingsDetectionThread rien;
	rien.Entry();
	return 0;
}