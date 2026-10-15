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
void *__internalObjectList_getMeta(){
 if(!__internalObjectList_meta || !(reinterpret_cast<unsigned int *>(__internalObjectList_meta)[0x24/4]&4)) __internalObjectList_arkRegister();
 return __internalObjectList_meta;
}
void *fn_8002DCE4(){
 UnknownGenObject8002DCE4_0 object;
 fn_80053CF4(&object);
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void __internalObjectList_arkRegister(){
 meta_registerNow((int)__internalObjectList_register);
}
}
#pragma pop
