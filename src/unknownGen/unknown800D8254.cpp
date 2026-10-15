#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void fn_800D842C();
void *igGamecubeMultiTextureExt_getMetaCall();
void igMultiTextureExt_register();
extern char lbl_80473000[];
extern char igGamecubeMultiTextureExt_className[];
extern char igGamecubeMultiTextureExt_vtable[];
extern char lbl_80492CD4[];
extern char lbl_80493EEC[];
extern char lbl_8055EE00[8];
extern void *igMultiTextureExt_meta;
extern void *igGamecubeMultiTextureExt_meta;
void *igGamecubeMultiTextureExt_vtableRead();
void igGamecubeMultiTextureExt_registerNow();
void igGamecubeMultiTextureExt_register();
void *igGamecubeMultiTextureExt_parentMeta();
}
struct UnknownGenRoot800D8290 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D8290(){igObject_construct(this);}
};
struct UnknownGenObject800D8290_0 : UnknownGenRoot800D8290 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject800D8290_0(){unknown00=lbl_80473000;}
};
struct UnknownGenObject800D8290_1 : UnknownGenObject800D8290_0 {
 inline ~UnknownGenObject800D8290_1(){unknown00=lbl_80493EEC;}
};
struct UnknownGenObject800D8290_2 : UnknownGenObject800D8290_1 {
 inline ~UnknownGenObject800D8290_2(){unknown00=lbl_80492CD4;}
};
struct UnknownGenObject800D8290 : UnknownGenObject800D8290_2 {
 char unknown14[140];
 inline ~UnknownGenObject800D8290(){unknown00=igGamecubeMultiTextureExt_vtable;}
};
extern "C" {
void *igGamecubeMultiTextureExt_getMeta(){
 if(!igGamecubeMultiTextureExt_meta || !(reinterpret_cast<unsigned int *>(igGamecubeMultiTextureExt_meta)[0x24/4]&4)) igGamecubeMultiTextureExt_registerNow();
 return igGamecubeMultiTextureExt_meta;
}
void *igGamecubeMultiTextureExt_vtableRead(){
 UnknownGenObject800D8290 object;
 object.unknown00=lbl_80473000;
 object.unknown08.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_80493EEC;
 object.unknown00=lbl_80492CD4;
 object.unknown00=igGamecubeMultiTextureExt_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGamecubeMultiTextureExt_registerNow(){
 meta_registerNow((int)igGamecubeMultiTextureExt_register);
}
void igGamecubeMultiTextureExt_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igGamecubeMultiTextureExt_meta,(int)igMultiTextureExt_register,(int)igGamecubeMultiTextureExt_parentMeta,(int)igGamecubeMultiTextureExt_getMetaCall,(int)igGamecubeMultiTextureExt_className,152,(int)igGamecubeMultiTextureExt_vtableRead,(int)fn_800D842C,0,(int)lbl_8055EE00);
}
void *igGamecubeMultiTextureExt_parentMeta(){return igMultiTextureExt_meta;}
}
#pragma pop
