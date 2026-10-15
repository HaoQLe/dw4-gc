#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010E6DC();
void igActiveComponentsObserver_fieldInit();
void igView_register();
extern char igActiveComponentsObserver_className[];
extern char lbl_80495AD8[];
extern char igActiveComponentsObserver_vtable[];
extern char lbl_8055F08C[8];
extern void *igActiveComponentsObserver_meta;
void *igActiveComponentsObserver_getMeta();
void *igActiveComponentsObserver_vtableRead();
void igActiveComponentsObserver_registerNow();
void igActiveComponentsObserver_register();
void *igActiveComponentsObserver_getMetaCall();
}
struct UnknownGenRoot801104A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801104A0(){igObject_construct(this);}
};
struct UnknownGenObject801104A0 : UnknownGenRoot801104A0 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject801104A0(){unknown00=igActiveComponentsObserver_vtable;}
};
extern "C" {
void *igActiveComponentsObserver_create(void *object){
 igActiveComponentsObserver_registerNow();
 return meta_createInstance(igActiveComponentsObserver_meta,object);
}
void *igActiveComponentsObserver_getMeta(){
 if(!igActiveComponentsObserver_meta || !(reinterpret_cast<unsigned int *>(igActiveComponentsObserver_meta)[0x24/4]&4)) igActiveComponentsObserver_registerNow();
 return igActiveComponentsObserver_meta;
}
void *igActiveComponentsObserver_vtableRead(){
 UnknownGenObject801104A0 object;
 object.unknown00=lbl_80495AD8;
 object.unknown00=igActiveComponentsObserver_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igActiveComponentsObserver_registerNow(){
 meta_registerNow((int)igActiveComponentsObserver_register);
}
void igActiveComponentsObserver_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igActiveComponentsObserver_meta,(int)igView_register,(int)fn_8010E6DC,(int)igActiveComponentsObserver_getMetaCall,(int)igActiveComponentsObserver_className,24,(int)igActiveComponentsObserver_vtableRead,(int)igActiveComponentsObserver_fieldInit,0,(int)lbl_8055F08C);
}
void *igActiveComponentsObserver_getMetaCall(){return igActiveComponentsObserver_getMeta();}
}
#pragma pop
