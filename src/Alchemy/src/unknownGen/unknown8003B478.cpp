#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *meta_newMetaObject(void *);
void *fn_8002C31C();
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igFile_register();
void igGamecubeHostFile_fieldInit();
void *igGamecubeLongTimer_getMetaCall();
void igLongTimer_register();
extern char igGamecubeLongTimer_className[];
extern char igGamecubeHostFile_className[];
extern char igGamecubeLongTimer_vtable[];
extern char igGamecubeHostFile_vtable[];
extern char lbl_804727A4[];
extern char lbl_80473354[];
extern char lbl_804733EC[];
extern char igNamedObject_vtable[];
extern void *igLongTimer_meta;
extern void *igGamecubeLongTimer_meta;
extern void *igGamecubeHostFile_meta;
extern void *lbl_805621F4;
void *igGamecubeLongTimer_vtableRead();
void igGamecubeLongTimer_registerNow();
void igGamecubeLongTimer_register();
void *igGamecubeLongTimer_parentMeta();
void *igGamecubeHostFile_getMeta();
void *igGamecubeHostFile_vtableRead();
void igGamecubeHostFile_registerNow();
void igGamecubeHostFile_register();
void *igGamecubeHostFile_getMetaCall();
}
struct UnknownGenObject8003B4B4_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot8003B61C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003B61C(){igObject_construct(this);}
};
struct UnknownGenObject8003B61C_0 : UnknownGenRoot8003B61C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8003B61C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8003B61C_1 : UnknownGenObject8003B61C_0 {
 UnknownGenString unknown0C;
 char unknown10[24];
 UnknownGenString unknown28;
 inline ~UnknownGenObject8003B61C_1(){unknown00=lbl_804727A4;}
};
struct UnknownGenObject8003B61C : UnknownGenObject8003B61C_1 {
 char unknown2C[12];
 inline ~UnknownGenObject8003B61C(){unknown00=igGamecubeHostFile_vtable;}
};
extern "C" {
void *igGamecubeLongTimer_getMeta(){
 if(!igGamecubeLongTimer_meta || !(reinterpret_cast<unsigned int *>(igGamecubeLongTimer_meta)[0x24/4]&4)) igGamecubeLongTimer_registerNow();
 return igGamecubeLongTimer_meta;
}
void *igGamecubeLongTimer_vtableRead(){
 UnknownGenObject8003B4B4_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804733EC;
 object.unknown00=lbl_80473354;
 object.unknown00=igGamecubeLongTimer_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGamecubeLongTimer_registerNow(){
 meta_registerNow((int)igGamecubeLongTimer_register);
}
void igGamecubeLongTimer_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igGamecubeLongTimer_meta,(int)igLongTimer_register,(int)igGamecubeLongTimer_parentMeta,(int)igGamecubeLongTimer_getMetaCall,(int)igGamecubeLongTimer_className,40,(int)igGamecubeLongTimer_vtableRead,0,0,0);
}
void *igGamecubeLongTimer_parentMeta(){return igLongTimer_meta;}
void *fn_8003B5A4(){
 if(!igGamecubeHostFile_meta) igGamecubeHostFile_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGamecubeHostFile_meta;
}
void *igGamecubeHostFile_getMeta(){
 if(!igGamecubeHostFile_meta || !(reinterpret_cast<unsigned int *>(igGamecubeHostFile_meta)[0x24/4]&4)) igGamecubeHostFile_registerNow();
 return igGamecubeHostFile_meta;
}
void *igGamecubeHostFile_vtableRead(){
 UnknownGenObject8003B61C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804727A4;
 object.unknown0C.value=0;
 object.unknown28.value=0;
 object.unknown00=igGamecubeHostFile_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGamecubeHostFile_registerNow(){
 meta_registerNow((int)igGamecubeHostFile_register);
}
void igGamecubeHostFile_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igGamecubeHostFile_meta,(int)igFile_register,(int)fn_8002C31C,(int)igGamecubeHostFile_getMetaCall,(int)igGamecubeHostFile_className,56,(int)igGamecubeHostFile_vtableRead,(int)igGamecubeHostFile_fieldInit,0,0);
}
void *igGamecubeHostFile_getMetaCall(){return igGamecubeHostFile_getMeta();}
}
#pragma pop
