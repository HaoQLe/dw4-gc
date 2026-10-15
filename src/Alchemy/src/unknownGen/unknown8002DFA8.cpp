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
void *__internalNonRefCountedObjectList_getMeta(){
 if(!__internalNonRefCountedObjectList_meta || !(reinterpret_cast<unsigned int *>(__internalNonRefCountedObjectList_meta)[0x24/4]&4)) __internalNonRefCountedObjectList_arkRegister();
 return __internalNonRefCountedObjectList_meta;
}
void *fn_8002E020(){
 UnknownGenObject8002E020_0 object;
 fn_800536F8(&object);
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void __internalNonRefCountedObjectList_arkRegister(){
 meta_registerNow((int)__internalNonRefCountedObjectList_register);
}
}
#pragma pop
