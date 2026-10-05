#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80027704();
void fn_80066188(int);
void fn_8006C4B8(void *);
extern char lbl_80471384[];
extern char lbl_80471914[];
extern char lbl_80476630[];
extern void *lbl_80561694;
void fn_800276DC();
}
struct UnknownGenObject80027648 {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject80027648(){unknown00=lbl_80476630;unknown00=lbl_80471384;unknown00=lbl_80471914;}
};
extern "C" {
void *fn_8002760C(){
 if(!lbl_80561694 || !(reinterpret_cast<unsigned int *>(lbl_80561694)[0x24/4]&4)) fn_800276DC();
 return lbl_80561694;
}
void *fn_80027648(){
 UnknownGenObject80027648 object;
 fn_8006C4B8(&object);
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800276DC(){
 fn_80066188((int)fn_80027704);
}
}
#pragma pop
