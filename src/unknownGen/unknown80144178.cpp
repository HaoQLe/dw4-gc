#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_80143FCC();
void igIterateGraph_fieldInit();
void igIterator_register();
extern char igIterateGraph_dependencies[];
extern char igIterateGraph_className[];
extern char igIterateGraph_vtable[];
extern char lbl_804A9C44[];
extern void *lbl_805621F4;
extern void *igIterateGraph_meta;
void *igIterateGraph_getMeta();
void *igIterateGraph_vtableRead();
void igIterateGraph_arkRegister();
void igIterateGraph_register();
void *igIterateGraph_getMetaCall();
}
struct UnknownGenRoot801441F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801441F0(){igObject_construct(this);}
};
struct UnknownGenObject801441F0 : UnknownGenRoot801441F0 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801441F0(){unknown00=igIterateGraph_vtable;}
};
extern "C" {
void *fn_80144178(){
 if(!igIterateGraph_meta) igIterateGraph_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igIterateGraph_meta;
}
void *igIterateGraph_getMeta(){
 if(!igIterateGraph_meta || !(reinterpret_cast<unsigned int *>(igIterateGraph_meta)[0x24/4]&4)) igIterateGraph_arkRegister();
 return igIterateGraph_meta;
}
void *igIterateGraph_vtableRead(){
 UnknownGenObject801441F0 object;
 object.unknown00=lbl_804A9C44;
 object.unknown00=igIterateGraph_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igIterateGraph_arkRegister(){
 meta_registerNow((int)igIterateGraph_register);
}
void igIterateGraph_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igIterateGraph_meta,(int)igIterator_register,(int)fn_80143FCC,(int)igIterateGraph_getMetaCall,(int)igIterateGraph_className,20,(int)igIterateGraph_vtableRead,(int)igIterateGraph_fieldInit,0,(int)igIterateGraph_dependencies);
}
void *igIterateGraph_getMetaCall(){return igIterateGraph_getMeta();}
}
#pragma pop
