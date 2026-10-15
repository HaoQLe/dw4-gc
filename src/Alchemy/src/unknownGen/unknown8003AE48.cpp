#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *igGamecubeThreadManager_getMetaCall();
void *igGamecubeThread_fieldInit();
void *igGamecubeThread_getMetaCall();
void *igThreadManager_getMetaCall();
void igThreadManager_register();
void igThread_register();
extern char igGamecubeThreadManager_className[];
extern char igGamecubeThread_className[];
extern char igGamecubeThreadManager_vtable[];
extern char igGamecubeThread_vtable[];
extern char lbl_80470C2C[];
extern char lbl_80470C94[];
extern char igNamedObject_vtable[];
extern char lbl_8055D718[8];
extern void *igThreadManager_meta;
extern void *igThread_meta;
extern void *igGamecubeThreadManager_meta;
extern void *igGamecubeThread_meta;
void *igGamecubeThreadManager_vtableRead();
void igGamecubeThreadManager_registerNow();
void igGamecubeThreadManager_register();
void *igGamecubeThreadManager_parentMeta();
void *fn_8003AF70();
void *igGamecubeThread_vtableRead();
void igGamecubeThread_registerNow();
void igGamecubeThread_register();
void *igGamecubeThread_parentMeta();
}
struct UnknownGenObject8003AE84_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8003AFC0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003AFC0(){igObject_construct(this);}
};
struct UnknownGenObject8003AFC0_0 : UnknownGenRoot8003AFC0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8003AFC0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8003AFC0_1 : UnknownGenObject8003AFC0_0 {
 inline ~UnknownGenObject8003AFC0_1(){unknown00=lbl_80470C94;}
};
struct UnknownGenObject8003AFC0 : UnknownGenObject8003AFC0_1 {
 char unknown0C[884];
 UnknownGenRefMember unknown380;
 char unknown384[12];
 inline ~UnknownGenObject8003AFC0(){unknown00=igGamecubeThread_vtable;}
};
extern "C" {
void *igGamecubeThreadManager_getMeta(){
 if(!igGamecubeThreadManager_meta || !(reinterpret_cast<unsigned int *>(igGamecubeThreadManager_meta)[0x24/4]&4)) igGamecubeThreadManager_registerNow();
 return igGamecubeThreadManager_meta;
}
void *igGamecubeThreadManager_vtableRead(){
 UnknownGenObject8003AE84_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_80470C2C;
 object.unknown00=igGamecubeThreadManager_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGamecubeThreadManager_registerNow(){
 meta_registerNow((int)igGamecubeThreadManager_register);
}
void igGamecubeThreadManager_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igGamecubeThreadManager_meta,(int)igThreadManager_register,(int)igGamecubeThreadManager_parentMeta,(int)igGamecubeThreadManager_getMetaCall,(int)igGamecubeThreadManager_className,16,(int)igGamecubeThreadManager_vtableRead,(int)fn_8003AF70,0,0);
}
void *igGamecubeThreadManager_parentMeta(){return igThreadManager_meta;}
void *fn_8003AF70(){
 void *value0=igGamecubeThreadManager_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_writeProxy=(void *)(void *)igThreadManager_getMetaCall;
 return value0;
}
void *igGamecubeThread_getMeta(){
 if(!igGamecubeThread_meta || !(reinterpret_cast<unsigned int *>(igGamecubeThread_meta)[0x24/4]&4)) igGamecubeThread_registerNow();
 return igGamecubeThread_meta;
}
void *igGamecubeThread_vtableRead(){
 UnknownGenObject8003AFC0 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_80470C94;
 object.unknown00=igGamecubeThread_vtable;
 object.unknown380.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGamecubeThread_registerNow(){
 meta_registerNow((int)igGamecubeThread_register);
}
void igGamecubeThread_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igGamecubeThread_meta,(int)igThread_register,(int)igGamecubeThread_parentMeta,(int)igGamecubeThread_getMetaCall,(int)igGamecubeThread_className,904,(int)igGamecubeThread_vtableRead,(int)igGamecubeThread_fieldInit,0,(int)lbl_8055D718);
}
void *igGamecubeThread_parentMeta(){return igThread_meta;}
}
#pragma pop
