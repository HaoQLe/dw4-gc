#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013E6F0();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForTimeTransform_className[];
extern char igObjectPropertyForTimeTransform_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F888[8];
extern void *igObjectPropertyForTimeTransform_meta;
void *igObjectPropertyForTimeTransform_getMeta();
void *igObjectPropertyForTimeTransform_vtableRead();
void igObjectPropertyForTimeTransform_registerNow();
void igObjectPropertyForTimeTransform_register();
void *igObjectPropertyForTimeTransform_getMetaCall();
}
struct UnknownGenRoot8013E568 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013E568(){igObject_construct(this);}
};
struct UnknownGenObject8013E568_0 : UnknownGenRoot8013E568 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013E568_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013E568_1 : UnknownGenObject8013E568_0 {
 inline ~UnknownGenObject8013E568_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013E568 : UnknownGenObject8013E568_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013E568(){unknown00=igObjectPropertyForTimeTransform_vtable;}
};
extern "C" {
void *igObjectPropertyForTimeTransform_getMeta(){
 if(!igObjectPropertyForTimeTransform_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForTimeTransform_meta)[0x24/4]&4)) igObjectPropertyForTimeTransform_registerNow();
 return igObjectPropertyForTimeTransform_meta;
}
void *igObjectPropertyForTimeTransform_vtableRead(){
 UnknownGenObject8013E568 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForTimeTransform_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForTimeTransform_registerNow(){
 meta_registerNow((int)igObjectPropertyForTimeTransform_register);
}
void igObjectPropertyForTimeTransform_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForTimeTransform_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForTimeTransform_getMetaCall,(int)igObjectPropertyForTimeTransform_className,44,(int)igObjectPropertyForTimeTransform_vtableRead,(int)fn_8013E6F0,0,(int)lbl_8055F888);
}
void *igObjectPropertyForTimeTransform_getMetaCall(){return igObjectPropertyForTimeTransform_getMeta();}
}
#pragma pop
