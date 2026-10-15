#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igMorphSequenceData_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igMorphSequenceDataList_className[];
extern char igMorphSequenceData_dependencies[];
extern char igMorphSequenceData_className[];
extern char igMorphSequenceData_vtable[];
extern char igMorphSequenceDataList_vtable[];
extern char lbl_804B7D78[];
extern char igMorphSequenceDataList_dependencies[8];
extern void *lbl_805621F4;
extern void *igMorphSequenceDataList_meta;
extern void *igMorphSequenceData_meta;
void *igMorphSequenceDataList_getMeta();
void *igMorphSequenceDataList_vtableRead();
void igMorphSequenceDataList_arkRegister();
void igMorphSequenceDataList_register();
void *igMorphSequenceDataList_getMetaCall();
void *igMorphSequenceData_getMeta();
void *igMorphSequenceData_vtableRead();
void igMorphSequenceData_arkRegister();
void igMorphSequenceData_register();
void *igMorphSequenceData_getMetaCall();
}
struct UnknownGenObject801B9678_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801B97D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B97D8(){igObject_construct(this);}
};
struct UnknownGenObject801B97D8 : UnknownGenRoot801B97D8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[16];
 inline ~UnknownGenObject801B97D8(){unknown00=igMorphSequenceData_vtable;}
};
extern "C" {
void *fn_801B9600(){
 if(!igMorphSequenceDataList_meta) igMorphSequenceDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMorphSequenceDataList_meta;
}
void *igMorphSequenceDataList_getMeta(){
 if(!igMorphSequenceDataList_meta || !(reinterpret_cast<unsigned int *>(igMorphSequenceDataList_meta)[0x24/4]&4)) igMorphSequenceDataList_arkRegister();
 return igMorphSequenceDataList_meta;
}
void *igMorphSequenceDataList_vtableRead(){
 UnknownGenObject801B9678_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B7D78;
 object.unknown00=igMorphSequenceDataList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMorphSequenceDataList_arkRegister(){
 meta_registerNow((int)igMorphSequenceDataList_register);
}
void igMorphSequenceDataList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igMorphSequenceDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igMorphSequenceDataList_getMetaCall,(int)igMorphSequenceDataList_className,20,(int)igMorphSequenceDataList_vtableRead,0,0,(int)igMorphSequenceDataList_dependencies);
}
void *igMorphSequenceDataList_getMetaCall(){return igMorphSequenceDataList_getMeta();}
void *igMorphSequenceData_getMeta(){
 if(!igMorphSequenceData_meta || !(reinterpret_cast<unsigned int *>(igMorphSequenceData_meta)[0x24/4]&4)) igMorphSequenceData_arkRegister();
 return igMorphSequenceData_meta;
}
void *igMorphSequenceData_vtableRead(){
 UnknownGenObject801B97D8 object;
 object.unknown00=igMorphSequenceData_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMorphSequenceData_arkRegister(){
 meta_registerNow((int)igMorphSequenceData_register);
}
void igMorphSequenceData_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igMorphSequenceData_meta,(int)igObject_register,(int)fn_800237D0,(int)igMorphSequenceData_getMetaCall,(int)igMorphSequenceData_className,32,(int)igMorphSequenceData_vtableRead,(int)igMorphSequenceData_fieldInit,0,(int)igMorphSequenceData_dependencies);
}
void *igMorphSequenceData_getMetaCall(){return igMorphSequenceData_getMeta();}
}
#pragma pop
