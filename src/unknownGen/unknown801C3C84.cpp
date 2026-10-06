#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_801C3D40(void *,short);
void fn_801C3EF4(void *);
void fn_801C4004();
extern void *lbl_805650BC;
}
struct UnknownGenObject801C3CF8 {
 void *unknown00;
 char unknown04[524];
};
extern "C" {
void *fn_801C3C84(void *object){
 fn_801C4004();
 return fn_8006546C(lbl_805650BC,object);
}
void *fn_801C3CBC(){
 if(!lbl_805650BC || !(reinterpret_cast<unsigned int *>(lbl_805650BC)[0x24/4]&4)) fn_801C4004();
 return lbl_805650BC;
}
void *fn_801C3CF8(){
 UnknownGenObject801C3CF8 object;
 fn_801C3EF4(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801C3D40(&object,-1);
 return result;
}
}
#pragma pop
