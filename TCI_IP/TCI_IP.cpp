// TCI_IP.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Management of signal \n");
	printf("--------------------");
    #if 0
        #include <signal.h>
	signal()
		raise()
#endif

#if 0
		void(*signal(int sig, void(*func)(int)) (int);
	typedef void(*handler_t)(int);
	handler_t signal(int sig, handler_t func);
#endif
	system("pause");
    return 0;
}


