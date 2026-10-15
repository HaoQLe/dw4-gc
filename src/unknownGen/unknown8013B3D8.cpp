#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_80182E70();
void igInterface_register();
void igOptInterface_fieldInit();
extern char igOptInterface_dependencies[];
extern char igOptInterface_className[];
extern char igOptInterface_vtable[];
extern char lbl_804A6460[];
extern char igInterface_vtable[];
extern void *lbl_805621F4;
extern void *igOptInterface_meta;
extern void *igInterface_meta;
void *igOptInterface_getMeta();
void *igOptInterface_vtableRead();
void igOptInterface_arkRegister();
void igOptInterface_register();
void *igOptInterface_getMetaCall();
void *fn_8013B680();
}
struct UnknownGenRoot8013B470 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013B470(){igObject_construct(this);}
};
struct UnknownGenObject8013B470 : UnknownGenRoot8013B470 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenString unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8013B470(){unknown00=igOptInterface_vtable;}
};
extern "C" {
void *fn_8013B3D8(){return fn_80182E70();}
void *fn_8013B3F8(){
 if(!igOptInterface_meta) igOptInterface_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igOptInterface_meta;
}
void *igOptInterface_getMeta(){
 if(!igOptInterface_meta || !(reinterpret_cast<unsigned int *>(igOptInterface_meta)[0x24/4]&4)) igOptInterface_arkRegister();
 return igOptInterface_meta;
}
void *igOptInterface_vtableRead(){
 UnknownGenObject8013B470 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=igInterface_vtable;
 object.unknown00=igOptInterface_vtable;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igOptInterface_arkRegister(){
 meta_registerNow((int)igOptInterface_register);
}
void igOptInterface_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igOptInterface_meta,(int)igInterface_register,(int)fn_8013B680,(int)igOptInterface_getMetaCall,(int)igOptInterface_className,48,(int)igOptInterface_vtableRead,(int)igOptInterface_fieldInit,0,(int)igOptInterface_dependencies);
}
void *igOptInterface_getMetaCall(){return igOptInterface_getMeta();}
void *fn_8013B680(){return igInterface_meta;}
}
#pragma pop
