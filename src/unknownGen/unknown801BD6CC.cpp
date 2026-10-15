#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void fn_801BDB1C();
void igIntersectTraversal_fieldInit();
void igTraversal_register();
extern char lbl_804AF1D0[];
extern char igIntersectTraversal_className[];
extern char igTraversal_vtable[];
extern char igIntersectTraversal_vtable[];
extern void *lbl_805621F4;
extern void *igTraversal_meta;
extern void *igIntersectTraversal_meta;
void *igIntersectTraversal_getMeta();
void *igIntersectTraversal_vtableRead();
void igIntersectTraversal_registerNow();
void igIntersectTraversal_register();
void *igIntersectTraversal_getMetaCall();
void *fn_801BD9C8();
}
struct UnknownGenRoot801BD744 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BD744(){igObject_construct(this);}
};
struct UnknownGenObject801BD744_0 : UnknownGenRoot801BD744 {
 char unknown04[24];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801BD744_0(){unknown00=igTraversal_vtable;}
};
struct UnknownGenObject801BD744 : UnknownGenObject801BD744_0 {
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[8];
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 inline ~UnknownGenObject801BD744(){unknown00=igIntersectTraversal_vtable;}
};
extern "C" {
void *fn_801BD6CC(){
 if(!igIntersectTraversal_meta) igIntersectTraversal_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igIntersectTraversal_meta;
}
void *igIntersectTraversal_getMeta(){
 if(!igIntersectTraversal_meta || !(reinterpret_cast<unsigned int *>(igIntersectTraversal_meta)[0x24/4]&4)) igIntersectTraversal_registerNow();
 return igIntersectTraversal_meta;
}
void *igIntersectTraversal_vtableRead(){
 UnknownGenObject801BD744 object;
 object.unknown00=igTraversal_vtable;
 object.unknown1C.value=0;
 object.unknown00=igIntersectTraversal_vtable;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igIntersectTraversal_registerNow(){
 meta_registerNow((int)igIntersectTraversal_register);
}
void igIntersectTraversal_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igIntersectTraversal_meta,(int)igTraversal_register,(int)fn_801BD9C8,(int)igIntersectTraversal_getMetaCall,(int)igIntersectTraversal_className,64,(int)igIntersectTraversal_vtableRead,(int)igIntersectTraversal_fieldInit,(int)fn_801BDB1C,(int)lbl_804AF1D0);
}
void *igIntersectTraversal_getMetaCall(){return igIntersectTraversal_getMeta();}
void *fn_801BD9C8(){return igTraversal_meta;}
}
#pragma pop
