#include "load.h"
#include "fun.h"
#include <stdio.h>
#include <dlfcn.h>
void LoadRun(const char * const s) {
void * lib;
void (*fun)(void);
lib = dlopen(s, RTLD_LAZY); 
if (!lib) {
printf("cannot open library '%s'\n", s);
return;
}
fun = (void (*)(void))dlsym(lib, "run") ;
if (fun == NULL) {
printf("cannot load function func\n");
} else {
fun();
}
dlclose(lib);
}
