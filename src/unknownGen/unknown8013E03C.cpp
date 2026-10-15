#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013E200();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForTimeSwitch_className[];
extern char igObjectPropertyForTimeSwitch_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F878[8];
extern void *igObjectPropertyForTimeSwitch_meta;
void *igObjectPropertyForTimeSwitch_getMeta();
void *igObjectPropertyForTimeSwitch_vtableRead();
void igObjectPropertyForTimeSwitch_registerNow();
void igObjectPropertyForTimeSwitch_register();
void *igObjectPropertyForTimeSwitch_getMetaCall();
}
struct UnknownGenRoot8013E078 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013E078(){igObject_construct(this);}
};
struct UnknownGenObject8013E078_0 : UnknownGenRoot8013E078 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013E078_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013E078_1 : UnknownGenObject8013E078_0 {
 inline ~UnknownGenObject8013E078_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013E078 : UnknownGenObject8013E078_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013E078(){unknown00=igObjectPropertyForTimeSwitch_vtable;}
};
extern "C" {
void *igObjectPropertyForTimeSwitch_getMeta(){
 if(!igObjectPropertyForTimeSwitch_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForTimeSwitch_meta)[0x24/4]&4)) igObjectPropertyForTimeSwitch_registerNow();
 return igObjectPropertyForTimeSwitch_meta;
}
void *igObjectPropertyForTimeSwitch_vtableRead(){
 UnknownGenObject8013E078 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForTimeSwitch_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForTimeSwitch_registerNow(){
 meta_registerNow((int)igObjectPropertyForTimeSwitch_register);
}
void igObjectPropertyForTimeSwitch_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForTimeSwitch_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForTimeSwitch_getMetaCall,(int)igObjectPropertyForTimeSwitch_className,44,(int)igObjectPropertyForTimeSwitch_vtableRead,(int)fn_8013E200,0,(int)lbl_8055F878);
}
void *igObjectPropertyForTimeSwitch_getMetaCall(){return igObjectPropertyForTimeSwitch_getMeta();}
}
#pragma pop
