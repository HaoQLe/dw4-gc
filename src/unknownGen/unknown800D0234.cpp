#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D05CC();
void igContextExt_register();
void *igGamecubeScissorExt_getMeta();
void igPrimLengthArray_register();
extern char igUserUCodeExt_className[];
extern char igScissorExt_className[];
extern char igPrimLengthArray1_1_className[];
extern char lbl_80491C58[];
extern char igPrimLengthArray1_1_vtable[];
extern void *igContextExt_meta;
extern void *lbl_805621F4;
extern void *igUserUCodeExt_meta;
extern void *igScissorExt_meta;
extern void *igPrimLengthArray1_1_meta;
extern void *igPrimLengthArray_meta;
void *igUserUCodeExt_getMeta();
void igUserUCodeExt_registerNow();
void igUserUCodeExt_register();
void *igUserUCodeExt_getMetaCall();
void *fn_800D031C();
void *igScissorExt_getMeta();
void igScissorExt_registerNow();
void igScissorExt_register();
void *igScissorExt_getMetaCall();
void *fn_800D0450();
void *igGamecubeScissorExt_getMetaCall();
void *igPrimLengthArray1_1_getMeta();
void *igPrimLengthArray1_1_vtableRead();
void igPrimLengthArray1_1_registerNow();
void igPrimLengthArray1_1_register();
void *igPrimLengthArray1_1_getMetaCall();
void *igPrimLengthArray1_1_parentMeta();
}
struct UnknownGenObject800D04C0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igUserUCodeExt_getMeta(){
 if(!igUserUCodeExt_meta || !(reinterpret_cast<unsigned int *>(igUserUCodeExt_meta)[0x24/4]&4)) igUserUCodeExt_registerNow();
 return igUserUCodeExt_meta;
}
void igUserUCodeExt_registerNow(){
 meta_registerNow((int)igUserUCodeExt_register);
}
void igUserUCodeExt_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igUserUCodeExt_meta,(int)igContextExt_register,(int)fn_800D031C,(int)igUserUCodeExt_getMetaCall,(int)igUserUCodeExt_className,20,0,0,0,0);
}
void *igUserUCodeExt_getMetaCall(){return igUserUCodeExt_getMeta();}
void *fn_800D031C(){return igContextExt_meta;}
void *fn_800D0324(){
 if(!igScissorExt_meta) igScissorExt_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igScissorExt_meta;
}
void *igScissorExt_getMeta(){
 if(!igScissorExt_meta || !(reinterpret_cast<unsigned int *>(igScissorExt_meta)[0x24/4]&4)) igScissorExt_registerNow();
 return igScissorExt_meta;
}
void igScissorExt_registerNow(){
 meta_registerNow((int)igScissorExt_register);
}
void igScissorExt_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igScissorExt_meta,(int)igContextExt_register,(int)fn_800D031C,(int)igScissorExt_getMetaCall,(int)igScissorExt_className,20,0,(int)fn_800D0450,0,0);
}
void *igScissorExt_getMetaCall(){return igScissorExt_getMeta();}
void *fn_800D0450(){
 void *value0=igScissorExt_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igGamecubeScissorExt_getMetaCall;
 return value0;
}
void *igGamecubeScissorExt_getMetaCall(){return igGamecubeScissorExt_getMeta();}
void *igPrimLengthArray1_1_getMeta(){
 if(!igPrimLengthArray1_1_meta || !(reinterpret_cast<unsigned int *>(igPrimLengthArray1_1_meta)[0x24/4]&4)) igPrimLengthArray1_1_registerNow();
 return igPrimLengthArray1_1_meta;
}
void *igPrimLengthArray1_1_vtableRead(){
 UnknownGenObject800D04C0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80491C58;
 object.unknown00=igPrimLengthArray1_1_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPrimLengthArray1_1_registerNow(){
 meta_registerNow((int)igPrimLengthArray1_1_register);
}
void igPrimLengthArray1_1_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igPrimLengthArray1_1_meta,(int)igPrimLengthArray_register,(int)igPrimLengthArray1_1_parentMeta,(int)igPrimLengthArray1_1_getMetaCall,(int)igPrimLengthArray1_1_className,20,(int)igPrimLengthArray1_1_vtableRead,(int)fn_800D05CC,0,0);
}
void *igPrimLengthArray1_1_getMetaCall(){return igPrimLengthArray1_1_getMeta();}
void *igPrimLengthArray1_1_parentMeta(){return igPrimLengthArray_meta;}
}
#pragma pop
