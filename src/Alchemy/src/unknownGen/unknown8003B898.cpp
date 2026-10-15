#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002C31C();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igFile_register();
void igFolder_register();
void *igGamecubeFile_fieldInit();
void *igGamecubeFile_getMetaCall();
void *igGamecubeFolder_getMetaCall();
extern char igGamecubeFolder_className[];
extern char igGamecubeFile_className[];
extern char igGamecubeFolder_vtable[];
extern char igGamecubeFile_vtable[];
extern char igFolder_vtable[];
extern char lbl_804727A4[];
extern char igNamedObject_vtable[];
extern char lbl_8055D738[8];
extern void *igFolder_meta;
extern void *igGamecubeFolder_meta;
extern void *igGamecubeFile_meta;
void *igGamecubeFolder_vtableRead();
void igGamecubeFolder_registerNow();
void igGamecubeFolder_register();
void *igGamecubeFolder_parentMeta();
void *igGamecubeFile_vtableRead();
void igGamecubeFile_registerNow();
void igGamecubeFile_register();
}
struct UnknownGenRoot8003B8D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003B8D4(){igObject_construct(this);}
};
struct UnknownGenObject8003B8D4_0 : UnknownGenRoot8003B8D4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8003B8D4_0(){unknown00=igFolder_vtable;}
};
struct UnknownGenObject8003B8D4 : UnknownGenObject8003B8D4_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8003B8D4(){unknown00=igGamecubeFolder_vtable;}
};
struct UnknownGenRoot8003BA40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003BA40(){igObject_construct(this);}
};
struct UnknownGenObject8003BA40_0 : UnknownGenRoot8003BA40 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8003BA40_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8003BA40_1 : UnknownGenObject8003BA40_0 {
 UnknownGenString unknown0C;
 char unknown10[24];
 UnknownGenString unknown28;
 inline ~UnknownGenObject8003BA40_1(){unknown00=lbl_804727A4;}
};
struct UnknownGenObject8003BA40 : UnknownGenObject8003BA40_1 {
 char unknown2C[80];
 UnknownGenRefMember unknown7C;
 char unknown80[8];
 inline ~UnknownGenObject8003BA40(){unknown00=igGamecubeFile_vtable;}
};
extern "C" {
void *igGamecubeFolder_getMeta(){
 if(!igGamecubeFolder_meta || !(reinterpret_cast<unsigned int *>(igGamecubeFolder_meta)[0x24/4]&4)) igGamecubeFolder_registerNow();
 return igGamecubeFolder_meta;
}
void *igGamecubeFolder_vtableRead(){
 UnknownGenObject8003B8D4 object;
 object.unknown00=igFolder_vtable;
 object.unknown08.value=0;
 object.unknown00=igGamecubeFolder_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGamecubeFolder_registerNow(){
 meta_registerNow((int)igGamecubeFolder_register);
}
void igGamecubeFolder_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igGamecubeFolder_meta,(int)igFolder_register,(int)igGamecubeFolder_parentMeta,(int)igGamecubeFolder_getMetaCall,(int)igGamecubeFolder_className,12,(int)igGamecubeFolder_vtableRead,0,0,0);
}
void *igGamecubeFolder_parentMeta(){return igFolder_meta;}
void *igGamecubeFile_getMeta(){
 if(!igGamecubeFile_meta || !(reinterpret_cast<unsigned int *>(igGamecubeFile_meta)[0x24/4]&4)) igGamecubeFile_registerNow();
 return igGamecubeFile_meta;
}
void *igGamecubeFile_vtableRead(){
 UnknownGenObject8003BA40 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804727A4;
 object.unknown0C.value=0;
 object.unknown28.value=0;
 object.unknown00=igGamecubeFile_vtable;
 object.unknown7C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGamecubeFile_registerNow(){
 meta_registerNow((int)igGamecubeFile_register);
}
void igGamecubeFile_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igGamecubeFile_meta,(int)igFile_register,(int)fn_8002C31C,(int)igGamecubeFile_getMetaCall,(int)igGamecubeFile_className,132,(int)igGamecubeFile_vtableRead,(int)igGamecubeFile_fieldInit,0,(int)lbl_8055D738);
}
}
#pragma pop
