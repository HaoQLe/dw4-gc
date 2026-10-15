#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013DF88();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForGeometry_className[];
extern char igObjectPropertyForGeometry_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F870[8];
extern void *igObjectPropertyForGeometry_meta;
void *igObjectPropertyForGeometry_getMeta();
void *igObjectPropertyForGeometry_vtableRead();
void igObjectPropertyForGeometry_registerNow();
void igObjectPropertyForGeometry_register();
void *igObjectPropertyForGeometry_getMetaCall();
}
struct UnknownGenRoot8013DE00 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013DE00(){igObject_construct(this);}
};
struct UnknownGenObject8013DE00_0 : UnknownGenRoot8013DE00 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013DE00_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013DE00_1 : UnknownGenObject8013DE00_0 {
 inline ~UnknownGenObject8013DE00_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013DE00 : UnknownGenObject8013DE00_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013DE00(){unknown00=igObjectPropertyForGeometry_vtable;}
};
extern "C" {
void *igObjectPropertyForGeometry_getMeta(){
 if(!igObjectPropertyForGeometry_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForGeometry_meta)[0x24/4]&4)) igObjectPropertyForGeometry_registerNow();
 return igObjectPropertyForGeometry_meta;
}
void *igObjectPropertyForGeometry_vtableRead(){
 UnknownGenObject8013DE00 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForGeometry_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForGeometry_registerNow(){
 meta_registerNow((int)igObjectPropertyForGeometry_register);
}
void igObjectPropertyForGeometry_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForGeometry_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForGeometry_getMetaCall,(int)igObjectPropertyForGeometry_className,44,(int)igObjectPropertyForGeometry_vtableRead,(int)fn_8013DF88,0,(int)lbl_8055F870);
}
void *igObjectPropertyForGeometry_getMetaCall(){return igObjectPropertyForGeometry_getMeta();}
}
#pragma pop
