#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033C534();
extern void *lbl_8053628C;
}
extern "C" {
void *fn_8033C3F8(void *object){
 fn_8033C534();
 return fn_8006546C(lbl_8053628C,object);
}
void *fn_8033C438(){
 if(!lbl_8053628C || !(reinterpret_cast<unsigned int *>(lbl_8053628C)[0x24/4]&4)) fn_8033C534();
 return lbl_8053628C;
}
}
#pragma pop
