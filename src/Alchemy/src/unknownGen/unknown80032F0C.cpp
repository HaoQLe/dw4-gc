#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igDependencyOrderedList_fieldInit();
void igObject_register();
extern char lbl_8046737C[];
extern char igDependencyOrderedList_className[];
extern char igDependencyOrderedList_vtable[];
extern void *igDependencyOrderedList_meta;
void *igDependencyOrderedList_getMeta();
void *igDependencyOrderedList_vtableRead();
void igDependencyOrderedList_registerNow();
void igDependencyOrderedList_register();
void *igDependencyOrderedList_getMetaCall();
}
struct UnknownGenRoot80032F48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032F48(){fn_8006665C(this);}
};
struct UnknownGenObject80032F48 : UnknownGenRoot80032F48 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[16];
 inline ~UnknownGenObject80032F48(){unknown00=igDependencyOrderedList_vtable;}
};
extern "C" {
void *igDependencyOrderedList_getMeta(){
 if(!igDependencyOrderedList_meta || !(reinterpret_cast<unsigned int *>(igDependencyOrderedList_meta)[0x24/4]&4)) igDependencyOrderedList_registerNow();
 return igDependencyOrderedList_meta;
}
void *igDependencyOrderedList_vtableRead(){
 UnknownGenObject80032F48 object;
 object.unknown00=igDependencyOrderedList_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDependencyOrderedList_registerNow(){
 meta_registerNow((int)igDependencyOrderedList_register);
}
void igDependencyOrderedList_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igDependencyOrderedList_meta,(int)igObject_register,(int)fn_800237D0,(int)igDependencyOrderedList_getMetaCall,(int)igDependencyOrderedList_className,28,(int)igDependencyOrderedList_vtableRead,(int)igDependencyOrderedList_fieldInit,0,(int)lbl_8046737C);
}
void *igDependencyOrderedList_getMetaCall(){return igDependencyOrderedList_getMeta();}
}
#pragma pop
