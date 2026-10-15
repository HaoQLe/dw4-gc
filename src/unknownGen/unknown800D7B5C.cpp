#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void fn_800D7D34();
void *igGamecubeScissorExt_getMetaCall();
void igScissorExt_register();
extern char lbl_80473000[];
extern char igGamecubeScissorExt_className[];
extern char igGamecubeScissorExt_vtable[];
extern char lbl_80492D58[];
extern char lbl_80493EEC[];
extern char igGamecubeScissorExt_dependencies[8];
extern void *igScissorExt_meta;
extern void *igGamecubeScissorExt_meta;
void *igGamecubeScissorExt_vtableRead();
void igGamecubeScissorExt_arkRegister();
void igGamecubeScissorExt_register();
void *igGamecubeScissorExt_parentMeta();
}
struct UnknownGenRoot800D7B98 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D7B98(){igObject_construct(this);}
};
struct UnknownGenObject800D7B98_0 : UnknownGenRoot800D7B98 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject800D7B98_0(){unknown00=lbl_80473000;}
};
struct UnknownGenObject800D7B98_1 : UnknownGenObject800D7B98_0 {
 inline ~UnknownGenObject800D7B98_1(){unknown00=lbl_80493EEC;}
};
struct UnknownGenObject800D7B98_2 : UnknownGenObject800D7B98_1 {
 inline ~UnknownGenObject800D7B98_2(){unknown00=lbl_80492D58;}
};
struct UnknownGenObject800D7B98 : UnknownGenObject800D7B98_2 {
 char unknown14[28];
 inline ~UnknownGenObject800D7B98(){unknown00=igGamecubeScissorExt_vtable;}
};
extern "C" {
void *igGamecubeScissorExt_getMeta(){
 if(!igGamecubeScissorExt_meta || !(reinterpret_cast<unsigned int *>(igGamecubeScissorExt_meta)[0x24/4]&4)) igGamecubeScissorExt_arkRegister();
 return igGamecubeScissorExt_meta;
}
void *igGamecubeScissorExt_vtableRead(){
 UnknownGenObject800D7B98 object;
 object.unknown00=lbl_80473000;
 object.unknown08.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_80493EEC;
 object.unknown00=lbl_80492D58;
 object.unknown00=igGamecubeScissorExt_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGamecubeScissorExt_arkRegister(){
 meta_registerNow((int)igGamecubeScissorExt_register);
}
void igGamecubeScissorExt_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igGamecubeScissorExt_meta,(int)igScissorExt_register,(int)igGamecubeScissorExt_parentMeta,(int)igGamecubeScissorExt_getMetaCall,(int)igGamecubeScissorExt_className,44,(int)igGamecubeScissorExt_vtableRead,(int)fn_800D7D34,0,(int)igGamecubeScissorExt_dependencies);
}
void *igGamecubeScissorExt_parentMeta(){return igScissorExt_meta;}
}
#pragma pop
