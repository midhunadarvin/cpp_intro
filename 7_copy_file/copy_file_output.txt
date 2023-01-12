/**
 *
 * Copy the contents for a file to a new file
 *
 * Useage :
 * g++ -o copy_file.exe copy_file.cpp
 *
 * ./copy_file.exe < {file_name} > {new_file_name}
 *
 * Eg.
 */

#include <stdio.h>
// The ctype.h header file of the C Standard Library declares several functions that are useful for testing and mapping characters.
#include <ctype.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);

    return 0;
}