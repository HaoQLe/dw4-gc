#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80025404();
void fn_80066188(int);
void fn_80071E44(void *);
extern char lbl_80471384[];
extern char lbl_80471914[];
extern char lbl_8047693C[];
extern void *lbl_805615B4;
void fn_800253DC();
}
struct UnknownGenObject80025348 {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject80025348(){unknown00=lbl_8047693C;unknown00=lbl_80471384;unknown00=lbl_80471914;}
};
extern "C" {
void *fn_8002530C(){
 if(!lbl_805615B4 || !(reinterpret_cast<unsigned int *>(lbl_805615B4)[0x24/4]&4)) fn_800253DC();
 return lbl_805615B4;
}
void *fn_80025348(){
 UnknownGenObject80025348 object;
 fn_80071E44(&object);
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800253DC(){
 fn_80066188((int)fn_80025404);
}
}
#pragma pop
