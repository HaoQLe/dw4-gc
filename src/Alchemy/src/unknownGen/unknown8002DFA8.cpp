#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __internalNonRefCountedObjectList_register();
void *meta_newMetaObject(void *);
void fn_800536F8(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
extern void *__internalNonRefCountedObjectList_meta;
extern void *lbl_805621F4;
void __internalNonRefCountedObjectList_arkRegister();
}
struct UnknownGenObject8002E020_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8002DFA8(){
 if(!__internalNonRefCountedObjectList_meta) __internalNonRefCountedObjectList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return __internalNonRefCountedObjectList_meta;
}
}
#pragma pop
