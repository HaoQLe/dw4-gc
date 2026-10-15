#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80284294();
void igFilterMessageDispatcher_fieldInit();
void igMessageDispatcher_register();
extern char igFilterMessageDispatcher_className[];
extern char lbl_804CB0C0[];
extern char lbl_804CB728[];
extern char igFilterMessageDispatcher_vtable[];
extern void *igFilterMessageDispatcher_meta;
extern void *igMessageDispatcher_meta;
void *igFilterMessageDispatcher_getMeta();
void *igFilterMessageDispatcher_vtableRead();
void igFilterMessageDispatcher_registerNow();
void igFilterMessageDispatcher_register();
void *igFilterMessageDispatcher_getMetaCall();
void *igFilterMessageDispatcher_parentMeta();
}
struct UnknownGenRoot802853D0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802853D0(){fn_8006665C(this);}
};
struct UnknownGenObject802853D0 : UnknownGenRoot802853D0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802853D0(){unknown00=igFilterMessageDispatcher_vtable;}
};
extern "C" {
void *igFilterMessageDispatcher_getMeta(){
 if(!igFilterMessageDispatcher_meta || !(reinterpret_cast<unsigned int *>(igFilterMessageDispatcher_meta)[0x24/4]&4)) igFilterMessageDispatcher_registerNow();
 return igFilterMessageDispatcher_meta;
}
void *igFilterMessageDispatcher_vtableRead(){
 UnknownGenObject802853D0 object;
 object.unknown00=lbl_804CB728;
 object.unknown00=igFilterMessageDispatcher_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igFilterMessageDispatcher_registerNow(){
 meta_registerNow((int)igFilterMessageDispatcher_register);
}
void igFilterMessageDispatcher_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igFilterMessageDispatcher_meta,(int)igMessageDispatcher_register,(int)igFilterMessageDispatcher_parentMeta,(int)igFilterMessageDispatcher_getMetaCall,(int)igFilterMessageDispatcher_className,16,(int)igFilterMessageDispatcher_vtableRead,(int)igFilterMessageDispatcher_fieldInit,0,(int)lbl_804CB0C0);
}
void *igFilterMessageDispatcher_getMetaCall(){return igFilterMessageDispatcher_getMeta();}
void *igFilterMessageDispatcher_parentMeta(){return igMessageDispatcher_meta;}
}
#pragma pop
