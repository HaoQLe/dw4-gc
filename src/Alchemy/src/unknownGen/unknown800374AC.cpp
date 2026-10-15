#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80023FDC();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igContext_fieldInit();
void igNonRefCountedObjectList_register();
void igObject_register();
extern char igContextExt_className[];
extern char igContextList_className[];
extern char lbl_80467704[];
extern char igContext_className[];
extern char igDataList_vtable[];
extern char igContextList_vtable[];
extern char lbl_80474170[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_8055D658[8];
extern void *igContextExt_meta;
extern void *igContextList_meta;
extern void *igContext_meta;
void *igContextExt_getMeta();
void igContextExt_registerNow();
void igContextExt_register();
void *igContextExt_getMetaCall();
void *fn_80037594();
void *igContextList_getMeta();
void *igContextList_vtableRead();
void igContextList_registerNow();
void igContextList_register();
void *igContextList_getMetaCall();
void *igContext_getMeta();
void igContext_registerNow();
void igContext_register();
void *igContext_getMetaCall();
}
struct UnknownGenObject80037610_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igContextExt_getMeta(){
 if(!igContextExt_meta || !(reinterpret_cast<unsigned int *>(igContextExt_meta)[0x24/4]&4)) igContextExt_registerNow();
 return igContextExt_meta;
}
void igContextExt_registerNow(){
 meta_registerNow((int)igContextExt_register);
}
void igContextExt_register(){
 fn_80021B94();
 meta_registerClass(1,(int)&igContextExt_meta,(int)igContext_register,(int)fn_80037594,(int)igContextExt_getMetaCall,(int)igContextExt_className,20,0,0,0,0);
}
void *igContextExt_getMetaCall(){return igContextExt_getMeta();}
void *fn_80037594(){return igContext_meta;}
void *igContextList_create(void *object){
 igContextList_registerNow();
 return meta_createInstance(igContextList_meta,object);
}
void *igContextList_getMeta(){
 if(!igContextList_meta || !(reinterpret_cast<unsigned int *>(igContextList_meta)[0x24/4]&4)) igContextList_registerNow();
 return igContextList_meta;
}
void *igContextList_vtableRead(){
 UnknownGenObject80037610_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igNonRefCountedObjectList_vtable;
 object.unknown00=lbl_80474170;
 object.unknown00=igContextList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igContextList_registerNow(){
 meta_registerNow((int)igContextList_register);
}
void igContextList_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igContextList_meta,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igContextList_getMetaCall,(int)igContextList_className,20,(int)igContextList_vtableRead,0,0,(int)lbl_8055D658);
}
void *igContextList_getMetaCall(){return igContextList_getMeta();}
void *igContext_getMeta(){
 if(!igContext_meta || !(reinterpret_cast<unsigned int *>(igContext_meta)[0x24/4]&4)) igContext_registerNow();
 return igContext_meta;
}
void igContext_registerNow(){
 meta_registerNow((int)igContext_register);
}
void igContext_register(){
 fn_80021B94();
 meta_registerClass(1,(int)&igContext_meta,(int)igObject_register,(int)fn_800237D0,(int)igContext_getMetaCall,(int)igContext_className,20,0,(int)igContext_fieldInit,0,(int)lbl_80467704);
}
void *igContext_getMetaCall(){return igContext_getMeta();}
}
#pragma pop
