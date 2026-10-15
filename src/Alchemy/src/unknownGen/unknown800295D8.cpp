#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_80029724();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igDataList_register();
extern char igNonRefCountedObjectList_className[];
extern char igDataList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern void *igNonRefCountedObjectList_meta;
void *igNonRefCountedObjectList_getMeta();
void *igNonRefCountedObjectList_vtableRead();
void igNonRefCountedObjectList_arkRegister();
void igNonRefCountedObjectList_register();
void *igNonRefCountedObjectList_getMetaCall();
}
struct UnknownGenObject80029614_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igNonRefCountedObjectList_getMeta(){
 if(!igNonRefCountedObjectList_meta || !(reinterpret_cast<unsigned int *>(igNonRefCountedObjectList_meta)[0x24/4]&4)) igNonRefCountedObjectList_arkRegister();
 return igNonRefCountedObjectList_meta;
}
void *igNonRefCountedObjectList_vtableRead(){
 UnknownGenObject80029614_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igNonRefCountedObjectList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNonRefCountedObjectList_arkRegister(){
 meta_registerNow((int)igNonRefCountedObjectList_register);
}
void igNonRefCountedObjectList_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igNonRefCountedObjectList_meta,(int)igDataList_register,(int)fn_80024D1C,(int)igNonRefCountedObjectList_getMetaCall,(int)igNonRefCountedObjectList_className,20,(int)igNonRefCountedObjectList_vtableRead,(int)fn_80029724,0,0);
}
void *igNonRefCountedObjectList_getMetaCall(){return igNonRefCountedObjectList_getMeta();}
}
#pragma pop
