#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804AA9B0[];
}
struct UnknownGenRoot80131A5C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80131A5C(){fn_8006665C(this);}
};
struct UnknownGenObject80131A5C : UnknownGenRoot80131A5C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject80131A5C(){unknown00=lbl_804AA9B0;}
};
extern "C" {
void *fn_80131A5C(){
 UnknownGenObject80131A5C object;
 object.unknown00=lbl_804AA9B0;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
