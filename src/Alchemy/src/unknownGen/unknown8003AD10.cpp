#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igQueue_register();
void *igStandardQueue_fieldInit();
void *igStandardQueue_getMetaCall();
extern char igStandardQueue_className[];
extern char igStandardQueue_vtable[];
extern char lbl_8047156C[];
extern char igStandardQueue_dependencies[8];
extern void *igQueue_meta;
extern void *igStandardQueue_meta;
void *igStandardQueue_vtableRead();
void igStandardQueue_arkRegister();
void igStandardQueue_register();
void *igStandardQueue_parentMeta();
}
struct UnknownGenRoot8003AB24 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003AB24(){igObject_construct(this);}
};
struct UnknownGenObject8003AB24_0 : UnknownGenRoot8003AB24 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8003AB24_0(){unknown00=lbl_8047156C;}
};
struct UnknownGenObject8003AB24 : UnknownGenObject8003AB24_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[32];
 inline ~UnknownGenObject8003AB24(){unknown00=igStandardQueue_vtable;}
};
extern "C" {
void *igStandardQueue_parentMeta(){return igQueue_meta;}
}
#pragma pop
