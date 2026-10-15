#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char beShadow01_vtable[];
}
struct UnknownGenRoot802B9CEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B9CEC(){igObject_construct(this);}
};
struct UnknownGenObject802B9CEC_0 : UnknownGenRoot802B9CEC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802B9CEC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802B9CEC_1 : UnknownGenObject802B9CEC_0 {
 inline ~UnknownGenObject802B9CEC_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802B9CEC_2 : UnknownGenObject802B9CEC_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802B9CEC_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject802B9CEC : UnknownGenObject802B9CEC_2 {
 char unknown1C[4];
 UnknownGenRefMember unknown20;
 char unknown24[20];
 inline ~UnknownGenObject802B9CEC(){unknown00=beShadow01_vtable;}
};
extern "C" {
void *beShadow01_vtableRead(){
 UnknownGenObject802B9CEC object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=beShadow01_vtable;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
