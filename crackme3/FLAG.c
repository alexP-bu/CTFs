#include <stdio.h>
#include <stdlib.h>

__declspec(dllexport) void __stdcall CheckYourImportsBro() {
    printf("Cracked! \n");
    exit(0);
}