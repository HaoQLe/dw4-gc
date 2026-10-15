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
void igShareAttrs_fieldInit();
extern char lbl_8049C3DC[];
extern char igShareAttrs_className[];
extern char igShareAttrs_vtable[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *igShareAttrs_meta;
void *igShareAttrs_getMeta();
void *igShareAttrs_vtableRead();
void igShareAttrs_registerNow();
void igShareAttrs_register();
void *igShareAttrs_getMetaCall();
}
struct UnknownGenRoot801331FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801331FC(){igObject_construct(this);}
};
struct UnknownGenObject801331FC_0 : UnknownGenRoot801331FC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801331FC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801331FC : UnknownGenObject801331FC_0 {
 UnknownGenRefMember unknown28;
 UnknownGenString unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject801331FC(){unknown00=igShareAttrs_vtable;}
};
extern "C" {
void *igShareAttrs_getMeta(){
 if(!igShareAttrs_meta || !(reinterpret_cast<unsigned int *>(igShareAttrs_meta)[0x24/4]&4)) igShareAttrs_registerNow();
 return igShareAttrs_meta;
}
void *igShareAttrs_vtableRead(){
 UnknownGenObject801331FC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igShareAttrs_vtable;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igShareAttrs_registerNow(){
 meta_registerNow((int)igShareAttrs_register);
}
void igShareAttrs_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igShareAttrs_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igShareAttrs_getMetaCall,(int)igShareAttrs_className,52,(int)igShareAttrs_vtableRead,(int)igShareAttrs_fieldInit,0,(int)lbl_8049C3DC);
}
void *igShareAttrs_getMetaCall(){return igShareAttrs_getMeta();}
}
#pragma pop
