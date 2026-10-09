#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_8008B264(void *);
void igMallocMemoryPool_register();
extern char lbl_80473790[];
extern void *lbl_80561FB0;
void fn_80039D6C();
}
struct UnknownGenRoot80039CC0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80039CC0(){fn_8008B264(this);}
};
struct UnknownGenObject80039CC0 : UnknownGenRoot80039CC0 {
 char unknown04[112];
 UnknownGenRefMember unknown74;
 char unknown78[28];
 UnknownGenRefMember unknown94;
 char unknown98[8];
 inline ~UnknownGenObject80039CC0(){unknown00=lbl_80473790;}
};
extern "C" {
void *igMallocMemoryPool_getMeta(){
 if(!lbl_80561FB0 || !(reinterpret_cast<unsigned int *>(lbl_80561FB0)[0x24/4]&4)) fn_80039D6C();
 return lbl_80561FB0;
}
void *fn_80039CC0(){
 UnknownGenObject80039CC0 object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80039D6C(){
 fn_80066188((int)igMallocMemoryPool_register);
}
}
#pragma pop
