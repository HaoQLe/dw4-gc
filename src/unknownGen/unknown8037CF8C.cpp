#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80069128();
}
extern "C" {
void *fn_8037CF8C(){return fn_80069128();}
int fn_8037CFAC(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+0);}
void fn_8037CFB4(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+8)=value;}
void fn_8037CFBC(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+40)=value;}
void *fn_8037CFC4(){return fn_80069128();}
int fn_8037CFE4(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+0);}
}
#pragma pop
