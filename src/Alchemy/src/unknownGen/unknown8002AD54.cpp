#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800632A4(void *);
void fn_80066188(int);
void igMemoryRefMetaField_register();
extern char lbl_80471384[];
extern char lbl_80471914[];
extern char lbl_80476088[];
extern void *lbl_80561818;
void fn_8002AE84();
}
struct UnknownGenRoot8002AD90 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002AD90(){fn_800632A4(this);}
};
struct UnknownGenObject8002AD90_0 : UnknownGenRoot8002AD90 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002AD90_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002AD90_1 : UnknownGenObject8002AD90_0 {
 inline ~UnknownGenObject8002AD90_1(){unknown00=lbl_80471384;}
};
struct UnknownGenObject8002AD90 : UnknownGenObject8002AD90_1 {
 char unknown10[56];
 UnknownGenRefMember unknown48;
 UnknownGenString unknown4C;
 inline ~UnknownGenObject8002AD90(){unknown00=lbl_80476088;}
};
extern "C" {
void *igMemoryRefMetaField_getMeta(){
 if(!lbl_80561818 || !(reinterpret_cast<unsigned int *>(lbl_80561818)[0x24/4]&4)) fn_8002AE84();
 return lbl_80561818;
}
void *fn_8002AD90(){
 UnknownGenObject8002AD90 object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002AE84(){
 fn_80066188((int)igMemoryRefMetaField_register);
}
}
#pragma pop
