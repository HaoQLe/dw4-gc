#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void fn_8014C2F4(void *,short);
void igDefaultManager_registerNow();
void igInstanceLock_register();
extern char igDynamicLock_className[];
extern char lbl_804A6460[];
extern char lbl_804A6564[];
extern char igDynamicLock_vtable[];
extern char igDefaultManager_vtable[];
extern char lbl_804AA8E4[];
extern void *igInstanceLock_meta;
extern void *igDynamicLock_meta;
extern void *igDefaultManager_meta;
void *igDynamicLock_getMeta();
void *igDynamicLock_vtableRead();
void igDynamicLock_registerNow();
void igDynamicLock_register();
void *igDynamicLock_getMetaCall();
void *fn_8014C1F8();
}
struct UnknownGenObject8014C0E4_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenObject8014C274 {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 int unknown0C;
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 int unknown28;
 int unknown2C;
};
extern "C" {
void *igDynamicLock_getMeta(){
 if(!igDynamicLock_meta || !(reinterpret_cast<unsigned int *>(igDynamicLock_meta)[0x24/4]&4)) igDynamicLock_registerNow();
 return igDynamicLock_meta;
}
void *igDynamicLock_vtableRead(){
 UnknownGenObject8014C0E4_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA8E4;
 object.unknown00=lbl_804A6564;
 object.unknown00=igDynamicLock_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDynamicLock_registerNow(){
 meta_registerNow((int)igDynamicLock_register);
}
void igDynamicLock_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igDynamicLock_meta,(int)igInstanceLock_register,(int)fn_8014C1F8,(int)igDynamicLock_getMetaCall,(int)igDynamicLock_className,32,(int)igDynamicLock_vtableRead,0,0,0);
}
void *igDynamicLock_getMetaCall(){return igDynamicLock_getMeta();}
void *fn_8014C1F8(){return igInstanceLock_meta;}
void *igDefaultManager_create(void *object){
 igDefaultManager_registerNow();
 return meta_createInstance(igDefaultManager_meta,object);
}
void *igDefaultManager_getMeta(){
 if(!igDefaultManager_meta || !(reinterpret_cast<unsigned int *>(igDefaultManager_meta)[0x24/4]&4)) igDefaultManager_registerNow();
 return igDefaultManager_meta;
}
void *igDefaultManager_vtableRead(){
 UnknownGenObject8014C274 object;
 igObject_construct(&object);
 object.unknown00=igDefaultManager_vtable;
 object.unknown08=0;
 object.unknown0C=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown20=0;
 object.unknown24=0;
 object.unknown28=0;
 object.unknown2C=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_8014C2F4(&object,-1);
 return result;
}
}
#pragma pop
