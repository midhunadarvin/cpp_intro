# Intro to C++ 

Reference : https://github.com/praseedpai/CD_Learn
### Helpful commands 
**Compile and assemble to [Object file](https://www.geeksforgeeks.org/types-of-c-files-after-its-compilation/) ( Does not link )**

    g++ -c hello_world.cpp 
    
**Compile and link to [exe file](https://www.geeksforgeeks.org/types-of-c-files-after-its-compilation/#:~:text=Binary%20executables%20file(.exe))**

    g++ -o hello_world.exe hello_world.cpp


**Create static library**

    ar cru libArith.a external_module_1.o external_module_2.o

**Linking external static libraries**
    
    g++ -o hello_world.exe hello_world.cpp libArith.a
    
**Execute program**

    ./hello_world.exe
    
**Creating a shared object under linux**

    g++ -shared -fPIC -o libArith.so external_module_1.o external_module_2.o