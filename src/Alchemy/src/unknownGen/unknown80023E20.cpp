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
extern char lbl_804633D4[];
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
extern char lbl_8055D080[8];
extern char lbl_8055D088[8];
extern void *igNonRefCountedThreadList_meta;
extern void *igThreadList_meta;
extern void *igSymbolTable_meta;
extern void *igObjectList_meta;
extern void *igNonRefCountedObjectList_meta;
extern void *lbl_805621F4;
void *igNonRefCountedThreadList_getMeta();
void *igNonRefCountedThreadList_vtableRead();
void igNonRefCountedThreadList_registerNow();
void igNonRefCountedThreadList_register();
void *igNonRefCountedThreadList_getMetaCall();
void *fn_80023FDC();
void *igThreadList_getMeta();
void *igThreadList_vtableRead();
void igThreadList_registerNow();
void igThreadList_register();
void *igThreadList_getMetaCall();
void *fn_80024180();
void *igSymbolTable_getMeta();
void *igSymbolTable_vtableRead();
void igSymbolTable_registerNow();
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
void *igGamecubeThread_getMetaCall(){return igGamecubeThread_getMeta();}
void *fn_80023E40(){
 if(!igNonRefCountedThreadList_meta) igNonRefCountedThreadList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNonRefCountedThreadList_meta;
}
void *igNonRefCountedThreadList_getMeta(){
 if(!igNonRefCountedThreadList_meta || !(reinterpret_cast<unsigned int *>(igNonRefCountedThreadList_meta)[0x24/4]&4)) igNonRefCountedThreadList_registerNow();
 return igNonRefCountedThreadList_meta;
}
void *igNonRefCountedThreadList_vtableRead(){
 UnknownGenObject80023EB8_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igNonRefCountedObjectList_vtable;
 object.unknown00=lbl_80476D44;
 object.unknown00=igNonRefCountedThreadList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNonRefCountedThreadList_registerNow(){
 meta_registerNow((int)igNonRefCountedThreadList_register);
}
void igNonRefCountedThreadList_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igNonRefCountedThreadList_meta,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igNonRefCountedThreadList_getMetaCall,(int)igNonRefCountedThreadList_className,20,(int)igNonRefCountedThreadList_vtableRead,0,0,(int)lbl_8055D080);
}
void *igNonRefCountedThreadList_getMetaCall(){return igNonRefCountedThreadList_getMeta();}
void *fn_80023FDC(){return igNonRefCountedObjectList_meta;}
void *fn_80023FE4(){
 if(!igThreadList_meta) igThreadList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igThreadList_meta;
}
void *igThreadList_getMeta(){
 if(!igThreadList_meta || !(reinterpret_cast<unsigned int *>(igThreadList_meta)[0x24/4]&4)) igThreadList_registerNow();
 return igThreadList_meta;
}
void *igThreadList_vtableRead(){
 UnknownGenObject8002405C_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_80476C18;
 object.unknown00=igThreadList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igThreadList_registerNow(){
 meta_registerNow((int)igThreadList_register);
}
void igThreadList_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igThreadList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igThreadList_getMetaCall,(int)igThreadList_className,20,(int)igThreadList_vtableRead,0,0,(int)lbl_8055D088);
}
void *igThreadList_getMetaCall(){return igThreadList_getMeta();}
void *fn_80024180(){return igObjectList_meta;}
void *igSymbolTable_create(void *object){
 igSymbolTable_registerNow();
 return meta_createInstance(igSymbolTable_meta,object);
}
void *igSymbolTable_getMeta(){
 if(!igSymbolTable_meta || !(reinterpret_cast<unsigned int *>(igSymbolTable_meta)[0x24/4]&4)) igSymbolTable_registerNow();
 return igSymbolTable_meta;
}
void *igSymbolTable_vtableRead(){
 UnknownGenObject800241FC object;
 object.unknown00=igSymbolTable_vtable;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSymbolTable_registerNow(){
 meta_registerNow((int)igSymbolTable_register);
}
void igSymbolTable_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igSymbolTable_meta,(int)igObject_register,(int)fn_800237D0,(int)igSymbolTable_getMetaCall,(int)igSymbolTable_className,44,(int)igSymbolTable_vtableRead,(int)igSymbolTable_fieldInit,0,(int)lbl_804633D4);
}
void *igSymbolTable_getMetaCall(){return igSymbolTable_getMeta();}
}
#pragma pop
