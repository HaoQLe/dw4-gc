#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void igInterfaced_fieldInit();
void igObject_register();
void igOptVisitObject_register();
extern char igInternalizeShader_className[];
extern char lbl_8049E7CC[];
extern char igInterfaced_className[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char igInternalizeShader_vtable[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *igInternalizeShader_meta;
extern void *igInterfaced_meta;
void *igInternalizeShader_getMeta();
void *igInternalizeShader_vtableRead();
void igInternalizeShader_registerNow();
void igInternalizeShader_register();
void *igInternalizeShader_getMetaCall();
void *igInterfaced_getMeta();
void igInterfaced_registerNow();
void igInterfaced_register();
void *igInterfaced_getMetaCall();
}
struct UnknownGenRoot801463A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801463A8(){igObject_construct(this);}
};
struct UnknownGenObject801463A8_0 : UnknownGenRoot801463A8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801463A8_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801463A8_1 : UnknownGenObject801463A8_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801463A8_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject801463A8 : UnknownGenObject801463A8_1 {
 char unknown2C[12];
 inline ~UnknownGenObject801463A8(){unknown00=igInternalizeShader_vtable;}
};
extern "C" {
void *igInternalizeShader_getMeta(){
 if(!igInternalizeShader_meta || !(reinterpret_cast<unsigned int *>(igInternalizeShader_meta)[0x24/4]&4)) igInternalizeShader_registerNow();
 return igInternalizeShader_meta;
}
void *igInternalizeShader_vtableRead(){
 UnknownGenObject801463A8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igInternalizeShader_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igInternalizeShader_registerNow(){
 meta_registerNow((int)igInternalizeShader_register);
}
void igInternalizeShader_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igInternalizeShader_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igInternalizeShader_getMetaCall,(int)igInternalizeShader_className,44,(int)igInternalizeShader_vtableRead,0,0,0);
}
void *igInternalizeShader_getMetaCall(){return igInternalizeShader_getMeta();}
void *igInterfaced_getMeta(){
 if(!igInterfaced_meta || !(reinterpret_cast<unsigned int *>(igInterfaced_meta)[0x24/4]&4)) igInterfaced_registerNow();
 return igInterfaced_meta;
}
void igInterfaced_registerNow(){
 meta_registerNow((int)igInterfaced_register);
}
void igInterfaced_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igInterfaced_meta,(int)igObject_register,(int)fn_800237D0,(int)igInterfaced_getMetaCall,(int)igInterfaced_className,32,0,(int)igInterfaced_fieldInit,0,(int)lbl_8049E7CC);
}
void *igInterfaced_getMetaCall(){return igInterfaced_getMeta();}
}
#pragma pop
