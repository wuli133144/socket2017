


#include <stdio.h>

#include "type.h"
#include <stdarg.h>



// enum{
//     _MODEA;
//     _MODEB;
//     _MAX_MODE;
// };

// const char *const MODESTR[_MAX_MODE]={"A","B"};

// typedef  int (*pcheckparam)(int ,char **);

// int g_chk_paramA(int ,char **);
// int g_chk_paramB(int ,char **);

// static const pcheckparam const chkparam[_MAX_MODE]={"g_chk_paramA","g_chk_paramB"};


// int g_chk_paramA(int argc ,char **argv){
//     printf("is mode A %s",argv[0]);
//     return 0;
// }

// int g_chk_paramB(int argc ,char **argv){
//     printf("is mode B %s",argv[0]);
//     return 0;
// }

enum{
    #define ENUM_INFO
    #include "param.h"
    _MAX_MODE_
};



// #define _T  _i32
// #define __FUNC_TEMPLATE_ADD add 
// #include "functemplate.h"



// #define __FUNC_TEMPLATE_SUB
// #include "functemplate.h"


int main(int argc,char **argv){

//_error(argc<2,_main_End,"param_check %d",argc);

print(_MAX_MODE_);

_main_End:
return 0;
    
}



















