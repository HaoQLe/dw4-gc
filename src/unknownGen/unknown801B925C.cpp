#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igMorphSequence_fieldInit();
void igObject_register();
extern char lbl_804AAFB8[];
extern char igMorphSequence_dependencies[];
extern char igMorphSequence_className[];
extern char igMorphSequence_vtable[];
extern void *lbl_805621F4;
extern void *lbl_80564CB4;
extern void *lbl_80564CB8;
extern void *igMorphSequence_meta;
void *igMorphSequence_getMeta();
void *igMorphSequence_vtableRead();
void igMorphSequence_arkRegister();
void igMorphSequence_register();
void *igMorphSequence_getMetaCall();
}
struct UnknownGenRoot801B936C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B936C(){igObject_construct(this);}
};
struct UnknownGenObject801B936C : UnknownGenRoot801B936C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[20];
 UnknownGenRefMember unknown24;
 char unknown28[24];
 inline ~UnknownGenObject801B936C(){unknown00=igMorphSequence_vtable;}
};
extern "C" {
void *fn_801B925C(){
 char *data=lbl_804AAFB8;
 if(!lbl_80564CB4) lbl_80564CB4=fn_800635C8(data+0x768,data+0x3730,data+0x373C,0x3);
 return lbl_80564CB4;
}
void *fn_801B92A8(){
 char *data=lbl_804AAFB8;
 if(!lbl_80564CB8) lbl_80564CB8=fn_800635C8(data+0x7A0,data+0x3754,data+0x3768,0x5);
 return lbl_80564CB8;
}
void *fn_801B92F4(){
 if(!igMorphSequence_meta) igMorphSequence_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMorphSequence_meta;
}
void *igMorphSequence_getMeta(){
 if(!igMorphSequence_meta || !(reinterpret_cast<unsigned int *>(igMorphSequence_meta)[0x24/4]&4)) igMorphSequence_arkRegister();
 return igMorphSequence_meta;
}
void *igMorphSequence_vtableRead(){
 UnknownGenObject801B936C object;
 object.unknown00=igMorphSequence_vtable;
 object.unknown0C.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMorphSequence_arkRegister(){
 meta_registerNow((int)igMorphSequence_register);
}
void igMorphSequence_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igMorphSequence_meta,(int)igObject_register,(int)fn_800237D0,(int)igMorphSequence_getMetaCall,(int)igMorphSequence_className,64,(int)igMorphSequence_vtableRead,(int)igMorphSequence_fieldInit,0,(int)igMorphSequence_dependencies);
}
void *igMorphSequence_getMetaCall(){return igMorphSequence_getMeta();}
}
#pragma pop
