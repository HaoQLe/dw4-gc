#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8002C410(void *);
void *fn_800607F4(void *);
extern void *lbl_80562150;
extern void *lbl_805621F0;
}
extern "C" {
void igMemoryDirEntry_virtual74(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+48)=value;}
int igMemoryDirEntry_virtual78(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+48);}
void fn_800584BC(){
 void *value0=fn_800607F4(lbl_805621F0);
 void *value1=fn_8002C410(value0);
 lbl_80562150=value1;
}
}
#pragma pop
