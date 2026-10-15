#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CAEE0();
void *igGamecubeController_getMeta();
void *igGamecubeWindow_fieldInit();
void *igGamecubeWindow_getMetaCall();
void igWindow_register();
extern char igGamecubeWindow_className[];
extern char igGamecubeWindow_vtable[];
extern char lbl_80480690[];
extern char lbl_80480E60[];
extern char lbl_8055E9B0[8];
extern void *igWindow_meta;
extern void *igGamecubeWindow_meta;
void *igGamecubeWindow_vtableRead();
void igGamecubeWindow_registerNow();
void igGamecubeWindow_register();
void *igGamecubeWindow_parentMeta();
}
struct UnknownGenRoot800CBCD8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CBCD8(){igObject_construct(this);}
};
struct UnknownGenObject800CBCD8 : UnknownGenRoot800CBCD8 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 char unknown1C[8];
 UnknownGenString unknown24;
 char unknown28[8];
 inline ~UnknownGenObject800CBCD8(){unknown00=igGamecubeWindow_vtable;}
};
extern "C" {
void *igGamecubeController_getMetaCall(){return igGamecubeController_getMeta();}
void *igGamecubeWindow_getMeta(){
 if(!igGamecubeWindow_meta || !(reinterpret_cast<unsigned int *>(igGamecubeWindow_meta)[0x24/4]&4)) igGamecubeWindow_registerNow();
 return igGamecubeWindow_meta;
}
void *igGamecubeWindow_vtableRead(){
 UnknownGenObject800CBCD8 object;
 object.unknown00=lbl_80480E60;
 object.unknown00=lbl_80480690;
 object.unknown00=igGamecubeWindow_vtable;
 object.unknown18.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGamecubeWindow_registerNow(){
 meta_registerNow((int)igGamecubeWindow_register);
}
void igGamecubeWindow_register(){
 fn_800CAEE0();
 meta_registerClass(0,(int)&igGamecubeWindow_meta,(int)igWindow_register,(int)igGamecubeWindow_parentMeta,(int)igGamecubeWindow_getMetaCall,(int)igGamecubeWindow_className,48,(int)igGamecubeWindow_vtableRead,(int)igGamecubeWindow_fieldInit,0,(int)lbl_8055E9B0);
}
void *igGamecubeWindow_parentMeta(){return igWindow_meta;}
}
#pragma pop
