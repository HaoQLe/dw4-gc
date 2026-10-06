#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_801C0640(void *,short);
void fn_801C0C50(void *);
void fn_801C0D64();
void *fn_801E9C84();
extern void *lbl_80564EFC;
}
struct UnknownGenObject801C05F8 {
 void *unknown00;
 char unknown04[556];
};
extern "C" {
void *fn_801C0564(){return fn_801E9C84();}
void *fn_801C0584(void *object){
 fn_801C0D64();
 return fn_8006546C(lbl_80564EFC,object);
}
void *fn_801C05BC(){
 if(!lbl_80564EFC || !(reinterpret_cast<unsigned int *>(lbl_80564EFC)[0x24/4]&4)) fn_801C0D64();
 return lbl_80564EFC;
}
void *fn_801C05F8(){
 UnknownGenObject801C05F8 object;
 fn_801C0C50(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801C0640(&object,-1);
 return result;
}
}
#pragma pop
