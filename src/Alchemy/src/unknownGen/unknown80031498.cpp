#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80031584();
void fn_80046FD8(void *);
void fn_80066188(int);
extern char lbl_80471914[];
extern char lbl_804758E4[];
extern void *lbl_80561C30;
void fn_8003155C();
}
struct UnknownGenRoot800314D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800314D4(){fn_80046FD8(this);}
};
struct UnknownGenObject800314D4_0 : UnknownGenRoot800314D4 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject800314D4_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject800314D4 : UnknownGenObject800314D4_0 {
 char unknown10[48];
 inline ~UnknownGenObject800314D4(){unknown00=lbl_804758E4;}
};
extern "C" {
void *fn_80031498(){
 if(!lbl_80561C30 || !(reinterpret_cast<unsigned int *>(lbl_80561C30)[0x24/4]&4)) fn_8003155C();
 return lbl_80561C30;
}
void *fn_800314D4(){
 UnknownGenObject800314D4 object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8003155C(){
 fn_80066188((int)fn_80031584);
}
}
#pragma pop
