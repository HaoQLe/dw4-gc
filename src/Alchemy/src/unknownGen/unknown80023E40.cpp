#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *igGamecubeThread_getMeta();
void igNonRefCountedObjectList_register();
void igObjectList_register();
void igObject_register();
void igSymbolTable_fieldInit();
extern char igNonRefCountedThreadList_className[];
extern char igThreadList_className[];
extern char igSymbolTable_dependencies[];
extern char igSymbolTable_className[];
extern char igSymbolTable_vtable[];
extern char igDataList_vtable[];
extern char igThreadList_vtable[];
extern char lbl_80476C18[];
extern char igObjectList_vtable[];
extern char igNonRefCountedThreadList_vtable[];
extern char lbl_80476D44[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igNonRefCountedThreadList_dependencies[8];
extern char igThreadList_dependencies[8];
extern void *igNonRefCountedThreadList_meta;
extern void *igThreadList_meta;
extern void *igSymbolTable_meta;
extern void *igObjectList_meta;
extern void *igNonRefCountedObjectList_meta;
extern void *lbl_805621F4;
void *igNonRefCountedThreadList_getMeta();
void *igNonRefCountedThreadList_vtableRead();
void igNonRefCountedThreadList_arkRegister();
void igNonRefCountedThreadList_register();
void *igNonRefCountedThreadList_getMetaCall();
void *fn_80023FDC();
void *igThreadList_getMeta();
void *igThreadList_vtableRead();
void igThreadList_arkRegister();
void igThreadList_register();
void *igThreadList_getMetaCall();
void *fn_80024180();
void *igSymbolTable_getMeta();
void *igSymbolTable_vtableRead();
void igSymbolTable_arkRegister();
void igSymbolTable_register();
void *igSymbolTable_getMetaCall();
}
struct UnknownGenObject80023EB8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8002405C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800241FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800241FC(){igObject_construct(this);}
};
struct UnknownGenObject800241FC : UnknownGenRoot800241FC {
 char unknown04[24];
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject800241FC(){unknown00=igSymbolTable_vtable;}
};
extern "C" {
void *fn_80023E40(){
 if(!igNonRefCountedThreadList_meta) igNonRefCountedThreadList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNonRefCountedThreadList_meta;
}
}
#pragma pop
