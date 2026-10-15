#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __internalObjectList_register();
void *meta_newMetaObject(void *);
void fn_80053CF4(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
extern void *__internalObjectList_meta;
extern void *lbl_805621F4;
void __internalObjectList_arkRegister();
}
struct UnknownGenObject8002DCE4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8002DC6C(){
 if(!__internalObjectList_meta) __internalObjectList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return __internalObjectList_meta;
}
}
#pragma pop
