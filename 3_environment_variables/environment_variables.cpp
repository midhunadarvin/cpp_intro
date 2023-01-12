/**
 * 
 * A C++ program to print environment variables
 * 
 * g++ environment_variables.cpp -o environment_variables.o
 * ./environment_variables.o abcd efgh ijkl mnop
 * 
 * Output :
 * ./environment_variables.o
 * abcd
 * efgh
 * ijkl
*/

#include<stdio.h>

int main(int argc, char** argv, char **envp)
{
    char **tempenv = envp;

    // tempenv is encoded as := "Key1=Value1\0Key2=Value2"

    while ( *(tempenv) != 0) {
        puts(*tempenv); // writing the string to stdout
        tempenv++;
    }
    
    return 0;
}
