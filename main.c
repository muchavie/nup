

#include "nup.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
    if (nup())
	printf("network is UP\n");
    else
	printf("network is down\n");
}
