#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013F0D0();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForSegment_className[];
extern char igObjectPropertyForSegment_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F8A8[8];
extern void *igObjectPropertyForSegment_meta;
void *igObjectPropertyForSegment_getMeta();
void *igObjectPropertyForSegment_vtableRead();
void igObjectPropertyForSegment_registerNow();
void igObjectPropertyForSegment_register();
void *igObjectPropertyForSegment_getMetaCall();
}
struct UnknownGenRoot8013EF48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013EF48(){igObject_construct(this);}
};
struct UnknownGenObject8013EF48_0 : UnknownGenRoot8013EF48 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013EF48_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013EF48_1 : UnknownGenObject8013EF48_0 {
 inline ~UnknownGenObject8013EF48_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013EF48 : UnknownGenObject8013EF48_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013EF48(){unknown00=igObjectPropertyForSegment_vtable;}
};
extern "C" {
void *igObjectPropertyForSegment_getMeta(){
 if(!igObjectPropertyForSegment_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForSegment_meta)[0x24/4]&4)) igObjectPropertyForSegment_registerNow();
 return igObjectPropertyForSegment_meta;
}
void *igObjectPropertyForSegment_vtableRead(){
 UnknownGenObject8013EF48 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForSegment_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForSegment_registerNow(){
 meta_registerNow((int)igObjectPropertyForSegment_register);
}
void igObjectPropertyForSegment_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForSegment_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForSegment_getMetaCall,(int)igObjectPropertyForSegment_className,44,(int)igObjectPropertyForSegment_vtableRead,(int)fn_8013F0D0,0,(int)lbl_8055F8A8);
}
void *igObjectPropertyForSegment_getMetaCall(){return igObjectPropertyForSegment_getMeta();}
}
#pragma pop
