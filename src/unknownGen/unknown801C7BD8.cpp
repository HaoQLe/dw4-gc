#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801C7E6C(void *,short);
void igAttrStackManager_registerNow();
void igNonRefCountedObjectList_register();
extern char igDataList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igNonRefCountedAttrStackManagerList_className[];
extern char igAttrStackManager_vtable[];
extern char igNonRefCountedAttrStackManagerList_vtable[];
extern char lbl_804B6BFC[];
extern char lbl_80560858[8];
extern void *lbl_805621F4;
extern void *igNonRefCountedAttrStackManagerList_meta;
extern void *igAttrStackManager_meta;
void *igNonRefCountedAttrStackManagerList_getMeta();
void *igNonRefCountedAttrStackManagerList_vtableRead();
void igNonRefCountedAttrStackManagerList_registerNow();
void igNonRefCountedAttrStackManagerList_register();
void *igNonRefCountedAttrStackManagerList_getMetaCall();
}
struct UnknownGenObject801C7C4C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801C7DE8 {
 void *unknown00;
 char unknown04[12];
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 int unknown28;
 int unknown2C;
 char unknown30[4];
 int unknown34;
 int unknown38;
 char unknown3C[4];
 int unknown40;
 char unknown44[12];
};
extern "C" {
void *igNonRefCountedAttrStackManagerList_create(void *object){
 igNonRefCountedAttrStackManagerList_registerNow();
 return meta_createInstance(igNonRefCountedAttrStackManagerList_meta,object);
}
void *igNonRefCountedAttrStackManagerList_getMeta(){
 if(!igNonRefCountedAttrStackManagerList_meta || !(reinterpret_cast<unsigned int *>(igNonRefCountedAttrStackManagerList_meta)[0x24/4]&4)) igNonRefCountedAttrStackManagerList_registerNow();
 return igNonRefCountedAttrStackManagerList_meta;
}
void *igNonRefCountedAttrStackManagerList_vtableRead(){
 UnknownGenObject801C7C4C_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igNonRefCountedObjectList_vtable;
 object.unknown00=lbl_804B6BFC;
 object.unknown00=igNonRefCountedAttrStackManagerList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNonRefCountedAttrStackManagerList_registerNow(){
 meta_registerNow((int)igNonRefCountedAttrStackManagerList_register);
}
void igNonRefCountedAttrStackManagerList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igNonRefCountedAttrStackManagerList_meta,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igNonRefCountedAttrStackManagerList_getMetaCall,(int)igNonRefCountedAttrStackManagerList_className,20,(int)igNonRefCountedAttrStackManagerList_vtableRead,0,0,(int)lbl_80560858);
}
void *igNonRefCountedAttrStackManagerList_getMetaCall(){return igNonRefCountedAttrStackManagerList_getMeta();}
void *fn_801C7D70(){
 if(!igAttrStackManager_meta) igAttrStackManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAttrStackManager_meta;
}
void *igAttrStackManager_getMeta(){
 if(!igAttrStackManager_meta || !(reinterpret_cast<unsigned int *>(igAttrStackManager_meta)[0x24/4]&4)) igAttrStackManager_registerNow();
 return igAttrStackManager_meta;
}
void *igAttrStackManager_vtableRead(){
 UnknownGenObject801C7DE8 object;
 fn_8006665C(&object);
 object.unknown00=igAttrStackManager_vtable;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown20=0;
 object.unknown24=0;
 object.unknown28=0;
 object.unknown2C=0;
 object.unknown34=0;
 object.unknown38=0;
 object.unknown40=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801C7E6C(&object,-1);
 return result;
}
}
#pragma pop
