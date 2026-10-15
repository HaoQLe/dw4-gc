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
void igDefaultManager_arkRegister();
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
void igDynamicLock_arkRegister();
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
void *fn_8014C1F8(){return igInstanceLock_meta;}
}
#pragma pop
