//         file: nup.h
//       author: Peter Ogilvie code@ogilvie.us.com
//creation date: 06-17-2014
//     requires: GNU/Linux 3.13
//      version: 1/20140617
//      returns: 0 network is down or some other errror
//               1 network is up as far as nup is concerned
//        build: gcc main.c -l nup
//          use:
//              #include <nup.h>
//              #include <stdio.h>
//              int main(int argc, char *argv[])
//              {
//                   if (nup())
//	                  printf("network is UP\n");
//                   else
//	                  printf("network is down\n");
//              }
int nup();
