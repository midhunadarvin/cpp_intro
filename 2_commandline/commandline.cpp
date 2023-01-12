/**
 * A C++ program to print command line arguments
 * 
 * g++ commandline.cpp                      => output a.out executable file
 * g++ commandline.cpp -o commandline.exe   => output commandline.exe executable file 
 * 
 * ./commandline.exe                        => Execute commandline.exe
*/
#include <stdio.h>

int main( int argc , char **argv ) {

  if ( argc == 1 ) {
    printf("No command Line Argument\n");
    //
    // argc will be at least 1 in the case of C/C++ Programs
    // argv[0] will contain the executable name
    return 0;
  }

  //---------------- Print the Executable name
  printf("%s\n", argv[0] );
  
  //------------- Spit the rest of the arguments
  for( int i = 1; i < argc ; i++ )
    puts(argv[i]);

}

