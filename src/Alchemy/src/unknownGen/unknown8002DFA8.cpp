#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __internalNonRefCountedObjectList_register();
void *fn_80029E64(void *);
void fn_800536F8(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
extern void *lbl_805619D4;
extern void *lbl_805621F4;
void fn_8002E054();
}
struct UnknownGenObject8002E020_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8002DFA8(){
 if(!lbl_805619D4) lbl_805619D4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805619D4;
}
void *__internalNonRefCountedObjectList_getMeta(){
 if(!lbl_805619D4 || !(reinterpret_cast<unsigned int *>(lbl_805619D4)[0x24/4]&4)) fn_8002E054();
 return lbl_805619D4;
}
void *fn_8002E020(){
 UnknownGenObject8002E020_0 object;
 fn_800536F8(&object);
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002E054(){
 fn_80066188((int)__internalNonRefCountedObjectList_register);
}
}
#pragma pop
