#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80216620();
void igObject_register();
extern char igBoolObject_className[];
extern char igBoolObject_vtable[];
extern char lbl_80560C98[4];
extern char lbl_80560C9C[4];
extern char lbl_80560CA0[4];
extern char lbl_80560CA4[4];
extern void *igBoolObject_meta;
void *igBoolObject_getMeta();
void *igBoolObject_vtableRead();
void igBoolObject_registerNow();
void igBoolObject_register();
void *igBoolObject_getMetaCall();
void igBoolObject_fieldInit();
}
struct UnknownGenObject8021968C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igBoolObject_getMeta(){
 if(!igBoolObject_meta || !(reinterpret_cast<unsigned int *>(igBoolObject_meta)[0x24/4]&4)) igBoolObject_registerNow();
 return igBoolObject_meta;
}
void *igBoolObject_vtableRead(){
 UnknownGenObject8021968C_0 object;
 igObject_construct(&object);
 object.unknown00=igBoolObject_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBoolObject_registerNow(){
 meta_registerNow((int)igBoolObject_register);
}
void igBoolObject_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igBoolObject_meta,(int)igObject_register,(int)fn_800237D0,(int)igBoolObject_getMetaCall,(int)igBoolObject_className,12,(int)igBoolObject_vtableRead,(int)igBoolObject_fieldInit,0,0);
}
void *igBoolObject_getMetaCall(){return igBoolObject_getMeta();}
void igBoolObject_fieldInit(){
 void *value0=igBoolObject_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_80560C98,1);
 meta_setupFields(value0,lbl_80560C9C,lbl_80560CA0,lbl_80560CA4,value1);
}
}
#pragma pop
