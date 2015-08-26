#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>

const char *RouteFilePath = "/proc/net/route";
char       buffer[1<<20];

int nup()
{
    int fd, br;
    char *p;

    fd = open(RouteFilePath, O_RDONLY);
    if (fd < 0)
    {
	printf("failed to open (%s) error (%d)\n", RouteFilePath, errno);
	return(0);
    }
    br = read(fd, buffer, sizeof(buffer));
    if (br < 0 )
    {
	printf("Read of file (%s) failed error (%d)\n", RouteFilePath, errno);
	return(0);
    }

    p = buffer;
    while (*p++ != '\n');
    return ((int)*p == 0) ? 0 : 1;
}
