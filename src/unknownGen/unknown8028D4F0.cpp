#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8028C93C();
void igCollisionGridHelper_fieldInit();
void igObject_register();
extern char lbl_804CC8E0[];
extern char igCollisionGridHelper_className[];
extern char igCollisionGridHelper_vtable[];
extern void *igCollisionGridHelper_meta;
void *igCollisionGridHelper_getMeta();
void *igCollisionGridHelper_vtableRead();
void igCollisionGridHelper_registerNow();
void igCollisionGridHelper_register();
void *igCollisionGridHelper_getMetaCall();
}
struct UnknownGenRoot8028D52C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028D52C(){igObject_construct(this);}
};
struct UnknownGenObject8028D52C : UnknownGenRoot8028D52C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject8028D52C(){unknown00=igCollisionGridHelper_vtable;}
};
extern "C" {
void *igCollisionGridHelper_getMeta(){
 if(!igCollisionGridHelper_meta || !(reinterpret_cast<unsigned int *>(igCollisionGridHelper_meta)[0x24/4]&4)) igCollisionGridHelper_registerNow();
 return igCollisionGridHelper_meta;
}
void *igCollisionGridHelper_vtableRead(){
 UnknownGenObject8028D52C object;
 object.unknown00=igCollisionGridHelper_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollisionGridHelper_registerNow(){
 meta_registerNow((int)igCollisionGridHelper_register);
}
void igCollisionGridHelper_register(){
 fn_8028C93C();
 meta_registerClass(0,(int)&igCollisionGridHelper_meta,(int)igObject_register,(int)fn_800237D0,(int)igCollisionGridHelper_getMetaCall,(int)igCollisionGridHelper_className,16,(int)igCollisionGridHelper_vtableRead,(int)igCollisionGridHelper_fieldInit,0,(int)lbl_804CC8E0);
}
void *igCollisionGridHelper_getMetaCall(){return igCollisionGridHelper_getMeta();}
}
#pragma pop
