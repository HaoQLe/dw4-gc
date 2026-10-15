#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void *fn_800D5128();
void fn_800D575C();
void *igCustomMatrixState_getMeta();
void igCustomMatrixState_vtableRead();
void igCustomState_register();
void igObject_register();
extern char igCustomMatrixState_className[];
extern char igClut_vtable[];
extern char lbl_8055ECE8[4];
extern char lbl_8055ECEC[4];
extern char lbl_8055ECF0[4];
extern char lbl_8055ECF4[4];
extern char lbl_8055ECF8[7];
extern void *lbl_805621F4;
extern void *igCustomMatrixState_meta;
extern void *igClut_meta;
void igCustomMatrixState_register();
void *igCustomMatrixState_getMetaCall();
void igCustomMatrixState_fieldInit();
void *igClut_getMeta();
void *igClut_vtableRead();
void igClut_registerNow();
void igClut_register();
void *igClut_getMetaCall();
}
struct UnknownGenObject800D5668_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void igCustomMatrixState_registerNow(){
 meta_registerNow((int)igCustomMatrixState_register);
}
void igCustomMatrixState_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igCustomMatrixState_meta,(int)igCustomState_register,(int)fn_800D5128,(int)igCustomMatrixState_getMetaCall,(int)igCustomMatrixState_className,76,(int)igCustomMatrixState_vtableRead,(int)igCustomMatrixState_fieldInit,0,0);
}
void *igCustomMatrixState_getMetaCall(){return igCustomMatrixState_getMeta();}
void igCustomMatrixState_fieldInit(){
 void *value0=igCustomMatrixState_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055ECE8,1);
 fn_800659C0(value0,lbl_8055ECEC,lbl_8055ECF0,lbl_8055ECF4,value1);
}
void *igClut_create(void *object){
 igClut_registerNow();
 return meta_createInstance(igClut_meta,object);
}
void *fn_800D55F0(){
 if(!igClut_meta) igClut_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igClut_meta;
}
void *igClut_getMeta(){
 if(!igClut_meta || !(reinterpret_cast<unsigned int *>(igClut_meta)[0x24/4]&4)) igClut_registerNow();
 return igClut_meta;
}
void *igClut_vtableRead(){
 UnknownGenObject800D5668_0 object;
 fn_8006665C(&object);
 object.unknown00=igClut_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igClut_registerNow(){
 meta_registerNow((int)igClut_register);
}
void igClut_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igClut_meta,(int)igObject_register,(int)fn_800237D0,(int)igClut_getMetaCall,(int)lbl_8055ECF8,32,(int)igClut_vtableRead,(int)fn_800D575C,0,0);
}
void *igClut_getMetaCall(){return igClut_getMeta();}
}
#pragma pop
