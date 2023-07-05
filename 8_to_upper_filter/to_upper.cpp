/**
 *
 * Copy the contents for a file to a new file
 *
 * Useage :
 * g++ -o to_upper.exe to_upper.cpp
 *
 * ./to_upper.exe < {file_name} > {new_file_name}
 *
 * Eg. ./to_upper.exe < sample.txt > output.txt
 */

#include <stdio.h>
// The ctype.h header file of the C Standard Library declares several functions that are useful for testing and mapping characters.
#include <ctype.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF)
        putchar(toupper(c));

    return 0;
}