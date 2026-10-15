#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igHashedUserInfo_arkRegister();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igHeapableList_className[];
extern char igHeapable_className[];
extern char igHeap_vtable[];
extern char igHeapableList_vtable[];
extern char lbl_804B755C[];
extern char igHeapable_vtable[];
extern char igHeap_dependencies[8];
extern char lbl_805605A8[7];
extern char igHeap_fieldTypes[4];
extern char igHeap_fieldNames[4];
extern char igHeap_fieldStorage[4];
extern char igHeap_fieldOffsets[4];
extern char igHeapableList_dependencies[8];
extern char igHeapable_fieldTypes[8];
extern char igHeapable_fieldNames[8];
extern char igHeapable_fieldStorage[8];
extern char igHeapable_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igHeap_meta;
extern void *igHeapableList_meta;
extern void *igHeapable_meta;
extern void *igHashedUserInfo_meta;
void *igHeap_getMeta();
void *igHeap_vtableRead();
void igHeap_arkRegister();
void igHeap_register();
void *igHeap_getMetaCall();
void igHeap_fieldInit();
void *fn_801BF030();
void *igHeapableList_getMeta();
void *igHeapableList_vtableRead();
void igHeapableList_arkRegister();
void igHeapableList_register();
void *igHeapableList_getMetaCall();
void *igHeapable_getMeta();
void *igHeapable_vtableRead();
void igHeapable_arkRegister();
void igHeapable_register();
void *igHeapable_getMetaCall();
void igHeapable_fieldInit();
}
struct UnknownGenRoot801BEE68 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BEE68(){igObject_construct(this);}
};
struct UnknownGenObject801BEE68 : UnknownGenRoot801BEE68 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801BEE68(){unknown00=igHeap_vtable;}
};
struct UnknownGenObject801BF0A8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801BF208_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igHashedUserInfo_getMeta(){
 if(!igHashedUserInfo_meta || !(reinterpret_cast<unsigned int *>(igHashedUserInfo_meta)[0x24/4]&4)) igHashedUserInfo_arkRegister();
 return igHashedUserInfo_meta;
}
}
#pragma pop
