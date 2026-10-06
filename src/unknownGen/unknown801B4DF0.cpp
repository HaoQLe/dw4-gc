#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801B4EB0(void *,short);
void fn_801B5514(void *);
void fn_801B55F4();
extern void *lbl_805621F4;
extern void *lbl_80564A78;
}
struct UnknownGenObject801B4E68 {
 void *unknown00;
 char unknown04[236];
};
extern "C" {
void *fn_801B4DF0(){
 if(!lbl_80564A78) lbl_80564A78=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564A78;
}
void *fn_801B4E2C(){
 if(!lbl_80564A78 || !(reinterpret_cast<unsigned int *>(lbl_80564A78)[0x24/4]&4)) fn_801B55F4();
 return lbl_80564A78;
}
void *fn_801B4E68(){
 UnknownGenObject801B4E68 object;
 fn_801B5514(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801B4EB0(&object,-1);
 return result;
}
}
#pragma pop
