#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "load.h"
int main()
{
	srand(time(NULL));
	int i = 0, j = 0;
	char menu = 0;
	printf("put menu value = ");
	do {
		menu = getchar();
		switch (menu)
		{
			case '1' : LoadRun("libmas.dll"); break;
			case '2' : LoadRun("libmes.dll"); break;
		}
	}  while(menu != '1' && menu != '2');
	system("pause");
	return 0;
}
