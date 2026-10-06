#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047C960[];
extern char lbl_8047D578[];
}
struct UnknownGenRoot800B7988 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B7988(){fn_8006665C(this);}
};
struct UnknownGenObject800B7988 : UnknownGenRoot800B7988 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B7988(){unknown00=lbl_8047C960;}
};
extern "C" {
void *fn_800B7988(){
 UnknownGenObject800B7988 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047C960;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
