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
void igHashedUserInfo_registerNow();
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
extern char lbl_805605A0[8];
extern char lbl_805605A8[7];
extern char lbl_805605B0[4];
extern char lbl_805605BC[4];
extern char lbl_805605C0[4];
extern char lbl_805605C4[4];
extern char lbl_805605C8[8];
extern char lbl_805605D0[8];
extern char lbl_805605D8[8];
extern char lbl_805605E0[8];
extern char lbl_805605E8[8];
extern void *lbl_805621F4;
extern void *igHeap_meta;
extern void *igHeapableList_meta;
extern void *igHeapable_meta;
extern void *igHashedUserInfo_meta;
void *igHeap_getMeta();
void *igHeap_vtableRead();
void igHeap_registerNow();
void igHeap_register();
void *igHeap_getMetaCall();
void igHeap_fieldInit();
void *fn_801BF030();
void *igHeapableList_getMeta();
void *igHeapableList_vtableRead();
void igHeapableList_registerNow();
void igHeapableList_register();
void *igHeapableList_getMetaCall();
void *igHeapable_getMeta();
void *igHeapable_vtableRead();
void igHeapable_registerNow();
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
void *igHeap_getMeta(){
 if(!igHeap_meta || !(reinterpret_cast<unsigned int *>(igHeap_meta)[0x24/4]&4)) igHeap_registerNow();
 return igHeap_meta;
}
void *igHeap_vtableRead(){
 UnknownGenObject801BEE68 object;
 object.unknown00=igHeap_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igHeap_registerNow(){
 meta_registerNow((int)igHeap_register);
}
void igHeap_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igHeap_meta,(int)igObject_register,(int)fn_800237D0,(int)igHeap_getMetaCall,(int)lbl_805605A8,12,(int)igHeap_vtableRead,(int)igHeap_fieldInit,0,(int)lbl_805605A0);
}
void *igHeap_getMetaCall(){return igHeap_getMeta();}
void igHeap_fieldInit(){
 void *value0=igHeap_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_805605B0,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801BF030();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_805605BC,lbl_805605C0,lbl_805605C4,value1);
}
void *fn_801BF030(){
 if(!igHeapableList_meta) igHeapableList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igHeapableList_meta;
}
void *igHeapableList_getMeta(){
 if(!igHeapableList_meta || !(reinterpret_cast<unsigned int *>(igHeapableList_meta)[0x24/4]&4)) igHeapableList_registerNow();
 return igHeapableList_meta;
}
void *igHeapableList_vtableRead(){
 UnknownGenObject801BF0A8_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B755C;
 object.unknown00=igHeapableList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igHeapableList_registerNow(){
 meta_registerNow((int)igHeapableList_register);
}
void igHeapableList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igHeapableList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igHeapableList_getMetaCall,(int)igHeapableList_className,20,(int)igHeapableList_vtableRead,0,0,(int)lbl_805605C8);
}
void *igHeapableList_getMetaCall(){return igHeapableList_getMeta();}
void *igHeapable_getMeta(){
 if(!igHeapable_meta || !(reinterpret_cast<unsigned int *>(igHeapable_meta)[0x24/4]&4)) igHeapable_registerNow();
 return igHeapable_meta;
}
void *igHeapable_vtableRead(){
 UnknownGenObject801BF208_0 object;
 igObject_construct(&object);
 object.unknown00=igHeapable_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igHeapable_registerNow(){
 meta_registerNow((int)igHeapable_register);
}
void igHeapable_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igHeapable_meta,(int)igObject_register,(int)fn_800237D0,(int)igHeapable_getMetaCall,(int)igHeapable_className,16,(int)igHeapable_vtableRead,(int)igHeapable_fieldInit,0,0);
}
void *igHeapable_getMetaCall(){return igHeapable_getMeta();}
void igHeapable_fieldInit(){
 void *value0=igHeapable_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_805605D0,2);
 meta_setupFields(value0,lbl_805605D8,lbl_805605E0,lbl_805605E8,value1);
}
void *igHashedUserInfo_getMeta(){
 if(!igHashedUserInfo_meta || !(reinterpret_cast<unsigned int *>(igHashedUserInfo_meta)[0x24/4]&4)) igHashedUserInfo_registerNow();
 return igHashedUserInfo_meta;
}
}
#pragma pop
