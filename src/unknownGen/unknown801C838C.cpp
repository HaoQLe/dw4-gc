#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800CB530();
void fn_801AA6DC();
void *fn_801D3BDC();
void fn_801D3C28(int);
void igAttrStack_fieldInit();
void igNonRefCountedObjectStack_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igNonRefCountedObjectStack_vtable[];
extern char lbl_80480B58[];
extern char igAttrStackList_className[];
extern char lbl_804B1830[];
extern char igAttrStack_className[];
extern char igAttrStack_vtable[];
extern char lbl_804B6A70[];
extern char igAttrStackList_vtable[];
extern char lbl_804B6B34[];
extern char lbl_80560860[8];
extern void *lbl_805621F4;
extern void *igAttrStackList_meta;
extern void *igAttrStack_meta;
void *igAttrStackList_getMeta();
void *igAttrStackList_vtableRead();
void igAttrStackList_registerNow();
void igAttrStackList_register();
void *igAttrStackList_getMetaCall();
void *igAttrStack_getMeta();
void *igAttrStack_vtableRead();
void igAttrStack_registerNow();
void igAttrStack_register();
void *igAttrStack_getMetaCall();
}
struct UnknownGenObject801C844C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C85E4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C85E4(){igObject_construct(this);}
};
struct UnknownGenObject801C85E4 : UnknownGenRoot801C85E4 {
 char unknown04[16];
 UnknownGenRefMember unknown14;
 char unknown18[40];
 inline ~UnknownGenObject801C85E4(){unknown00=igAttrStack_vtable;}
};
extern "C" {
void fn_801C838C(){
 fn_80065DBC((int)fn_801D3C28);
}
void *fn_801C83B4(){return fn_801D3BDC();}
void *fn_801C83D4(){
 if(!igAttrStackList_meta) igAttrStackList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAttrStackList_meta;
}
void *igAttrStackList_getMeta(){
 if(!igAttrStackList_meta || !(reinterpret_cast<unsigned int *>(igAttrStackList_meta)[0x24/4]&4)) igAttrStackList_registerNow();
 return igAttrStackList_meta;
}
void *igAttrStackList_vtableRead(){
 UnknownGenObject801C844C_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B6B34;
 object.unknown00=igAttrStackList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAttrStackList_registerNow(){
 meta_registerNow((int)igAttrStackList_register);
}
void igAttrStackList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAttrStackList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAttrStackList_getMetaCall,(int)igAttrStackList_className,20,(int)igAttrStackList_vtableRead,0,0,(int)lbl_80560860);
}
void *igAttrStackList_getMetaCall(){return igAttrStackList_getMeta();}
void *igAttrStack_create(void *object){
 igAttrStack_registerNow();
 return meta_createInstance(igAttrStack_meta,object);
}
void *igAttrStack_getMeta(){
 if(!igAttrStack_meta || !(reinterpret_cast<unsigned int *>(igAttrStack_meta)[0x24/4]&4)) igAttrStack_registerNow();
 return igAttrStack_meta;
}
void *igAttrStack_vtableRead(){
 UnknownGenObject801C85E4 object;
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80480B58;
 object.unknown00=igNonRefCountedObjectStack_vtable;
 object.unknown00=lbl_804B6A70;
 object.unknown00=igAttrStack_vtable;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAttrStack_registerNow(){
 meta_registerNow((int)igAttrStack_register);
}
void igAttrStack_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAttrStack_meta,(int)igNonRefCountedObjectStack_register,(int)fn_800CB530,(int)igAttrStack_getMetaCall,(int)igAttrStack_className,52,(int)igAttrStack_vtableRead,(int)igAttrStack_fieldInit,0,(int)lbl_804B1830);
}
void *igAttrStack_getMetaCall(){return igAttrStack_getMeta();}
}
#pragma pop
