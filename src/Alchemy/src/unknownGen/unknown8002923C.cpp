#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80471744[];
extern char lbl_80472EF4[];
extern char lbl_8047650C[];
}
struct UnknownGenRoot8002923C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002923C(){fn_8006665C(this);}
};
struct UnknownGenObject8002923C_0 : UnknownGenRoot8002923C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002923C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8002923C_1 : UnknownGenObject8002923C_0 {
 inline ~UnknownGenObject8002923C_1(){unknown00=lbl_80472EF4;}
};
struct UnknownGenObject8002923C : UnknownGenObject8002923C_1 {
 char unknown0C[16];
 UnknownGenRefMember unknown1C;
 UnknownGenString unknown20;
 char unknown24[20];
 inline ~UnknownGenObject8002923C(){unknown00=lbl_80471744;}
};
extern "C" {
void *fn_8002923C(){
 UnknownGenObject8002923C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472EF4;
 object.unknown00=lbl_80471744;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
