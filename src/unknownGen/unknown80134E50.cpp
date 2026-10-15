#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013467C();
void igHierarchyChangedEvent_register();
void igReplacedChildEvent_fieldInit();
extern char igReplacedChildEvent_className[];
extern char lbl_804A6460[];
extern char igReplacedChildEvent_vtable[];
extern char igHierarchyChangedEvent_vtable[];
extern char igMessageBase_vtable[];
extern char lbl_804AAF48[];
extern char igReplacedChildEvent_dependencies[8];
extern void *igReplacedChildEvent_meta;
void *igReplacedChildEvent_getMeta();
void *igReplacedChildEvent_vtableRead();
void igReplacedChildEvent_arkRegister();
void igReplacedChildEvent_register();
void *igReplacedChildEvent_getMetaCall();
}
struct UnknownGenRoot80134EC4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80134EC4(){igObject_construct(this);}
};
struct UnknownGenObject80134EC4 : UnknownGenRoot80134EC4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject80134EC4(){unknown00=igReplacedChildEvent_vtable;}
};
extern "C" {
void *igReplacedChildEvent_create(void *object){
 igReplacedChildEvent_arkRegister();
 return meta_createInstance(igReplacedChildEvent_meta,object);
}
void *igReplacedChildEvent_getMeta(){
 if(!igReplacedChildEvent_meta || !(reinterpret_cast<unsigned int *>(igReplacedChildEvent_meta)[0x24/4]&4)) igReplacedChildEvent_arkRegister();
 return igReplacedChildEvent_meta;
}
void *igReplacedChildEvent_vtableRead(){
 UnknownGenObject80134EC4 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=igMessageBase_vtable;
 object.unknown00=igHierarchyChangedEvent_vtable;
 object.unknown00=igReplacedChildEvent_vtable;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igReplacedChildEvent_arkRegister(){
 meta_registerNow((int)igReplacedChildEvent_register);
}
void igReplacedChildEvent_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igReplacedChildEvent_meta,(int)igHierarchyChangedEvent_register,(int)fn_8013467C,(int)igReplacedChildEvent_getMetaCall,(int)igReplacedChildEvent_className,44,(int)igReplacedChildEvent_vtableRead,(int)igReplacedChildEvent_fieldInit,0,(int)igReplacedChildEvent_dependencies);
}
void *igReplacedChildEvent_getMetaCall(){return igReplacedChildEvent_getMeta();}
}
#pragma pop
