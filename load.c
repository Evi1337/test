#include "load.h"
#include "ghj.h"
#include <stdio.h>
void LoadRun(const char * const s)
{
	void * lib;
	void (*fun)(void);
    lib = LoadLibrary(s);
 	if (!lib)
	{
		printf("cannot open library '%s'\n", s);
	 	return;
	}
	fun = (void (*)(void))GetProcAddress((HINSTANCE)lib, "mesim");
	if (fun == NULL)
	{
		printf("cannot load function mesim\n", s);
	}
	else
	{
		fun();
	}
	FreeLibrary((HINSTANCE)lib);
}
