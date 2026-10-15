#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013CE40();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForBillboard_className[];
extern char igObjectPropertyForBillboard_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F838[8];
extern void *igObjectPropertyForBillboard_meta;
void *igObjectPropertyForBillboard_getMeta();
void *igObjectPropertyForBillboard_vtableRead();
void igObjectPropertyForBillboard_registerNow();
void igObjectPropertyForBillboard_register();
void *igObjectPropertyForBillboard_getMetaCall();
}
struct UnknownGenRoot8013CCB8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013CCB8(){igObject_construct(this);}
};
struct UnknownGenObject8013CCB8_0 : UnknownGenRoot8013CCB8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013CCB8_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013CCB8_1 : UnknownGenObject8013CCB8_0 {
 inline ~UnknownGenObject8013CCB8_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013CCB8 : UnknownGenObject8013CCB8_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013CCB8(){unknown00=igObjectPropertyForBillboard_vtable;}
};
extern "C" {
void *igObjectPropertyForBillboard_getMeta(){
 if(!igObjectPropertyForBillboard_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForBillboard_meta)[0x24/4]&4)) igObjectPropertyForBillboard_registerNow();
 return igObjectPropertyForBillboard_meta;
}
void *igObjectPropertyForBillboard_vtableRead(){
 UnknownGenObject8013CCB8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForBillboard_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForBillboard_registerNow(){
 meta_registerNow((int)igObjectPropertyForBillboard_register);
}
void igObjectPropertyForBillboard_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForBillboard_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForBillboard_getMetaCall,(int)igObjectPropertyForBillboard_className,44,(int)igObjectPropertyForBillboard_vtableRead,(int)fn_8013CE40,0,(int)lbl_8055F838);
}
void *igObjectPropertyForBillboard_getMetaCall(){return igObjectPropertyForBillboard_getMeta();}
}
#pragma pop
