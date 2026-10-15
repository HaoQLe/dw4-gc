#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_801308D0();
void igOptBase_register();
void igPromoteAttrs_fieldInit();
extern char lbl_8049D0D4[];
extern char igPromoteAttrs_className[];
extern char igPromoteAttrs_vtable[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *igPromoteAttrs_meta;
void *igPromoteAttrs_getMeta();
void *igPromoteAttrs_vtableRead();
void igPromoteAttrs_registerNow();
void igPromoteAttrs_register();
void *igPromoteAttrs_getMetaCall();
}
struct UnknownGenRoot80138348 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80138348(){igObject_construct(this);}
};
struct UnknownGenObject80138348_0 : UnknownGenRoot80138348 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80138348_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80138348 : UnknownGenObject80138348_0 {
 UnknownGenRefMember unknown28;
 UnknownGenString unknown2C;
 UnknownGenRefMember unknown30;
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 char unknown3C[12];
 inline ~UnknownGenObject80138348(){unknown00=igPromoteAttrs_vtable;}
};
extern "C" {
void *igPromoteAttrs_getMeta(){
 if(!igPromoteAttrs_meta || !(reinterpret_cast<unsigned int *>(igPromoteAttrs_meta)[0x24/4]&4)) igPromoteAttrs_registerNow();
 return igPromoteAttrs_meta;
}
void *igPromoteAttrs_vtableRead(){
 UnknownGenObject80138348 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igPromoteAttrs_vtable;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPromoteAttrs_registerNow(){
 meta_registerNow((int)igPromoteAttrs_register);
}
void igPromoteAttrs_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igPromoteAttrs_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igPromoteAttrs_getMetaCall,(int)igPromoteAttrs_className,60,(int)igPromoteAttrs_vtableRead,(int)igPromoteAttrs_fieldInit,0,(int)lbl_8049D0D4);
}
void *igPromoteAttrs_getMetaCall(){return igPromoteAttrs_getMeta();}
}
#pragma pop
