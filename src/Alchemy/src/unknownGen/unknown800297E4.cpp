#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80024180();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_80071694(void *,void *);
void igInfo_register();
void igObjectList_register();
void igObject_register();
extern char igNamedObjectInfo_className[];
extern char igNamedObjectList_className[];
extern char igNamedObject_className[];
extern char igNamedObjectInfo_vtable[];
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObjectList_vtable[];
extern char lbl_80476298[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_8055D23C[8];
extern char lbl_8055D244[4];
extern char lbl_8055D248[4];
extern char lbl_8055D24C[4];
extern char lbl_8055D250[4];
extern char lbl_8055D254[8];
extern char lbl_8055D25C[4];
extern char lbl_8055D268[4];
extern char lbl_8055D26C[4];
extern char lbl_8055D270[4];
extern void *igNamedObjectInfo_meta;
extern void *igNamedObjectList_meta;
extern void *igNamedObject_meta;
extern void *lbl_805621F4;
void *igNamedObjectInfo_getMeta();
void *igNamedObjectInfo_vtableRead();
void igNamedObjectInfo_registerNow();
void igNamedObjectInfo_register();
void *igNamedObjectInfo_getMetaCall();
void igNamedObjectInfo_fieldInit();
void *fn_80029A5C();
void *igNamedObjectList_getMeta();
void *igNamedObjectList_vtableRead();
void igNamedObjectList_registerNow();
void igNamedObjectList_register();
void *igNamedObjectList_getMetaCall();
void *igNamedObject_getMeta();
void *igNamedObject_vtableRead();
void igNamedObject_registerNow();
void igNamedObject_register();
void *igNamedObject_getMetaCall();
void igNamedObject_fieldInit();
}
struct UnknownGenRoot80029820 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80029820(){fn_8006665C(this);}
};
struct UnknownGenObject80029820_0 : UnknownGenRoot80029820 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80029820_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80029820_1 : UnknownGenObject80029820_0 {
 inline ~UnknownGenObject80029820_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject80029820 : UnknownGenObject80029820_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject80029820(){unknown00=igNamedObjectInfo_vtable;}
};
struct UnknownGenObject80029AD4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80029CA8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80029CA8(){fn_8006665C(this);}
};
struct UnknownGenObject80029CA8 : UnknownGenRoot80029CA8 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80029CA8(){unknown00=igNamedObject_vtable;}
};
extern "C" {
void *igNamedObjectInfo_getMeta(){
 if(!igNamedObjectInfo_meta || !(reinterpret_cast<unsigned int *>(igNamedObjectInfo_meta)[0x24/4]&4)) igNamedObjectInfo_registerNow();
 return igNamedObjectInfo_meta;
}
void *igNamedObjectInfo_vtableRead(){
 UnknownGenObject80029820 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=igNamedObjectInfo_vtable;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNamedObjectInfo_registerNow(){
 meta_registerNow((int)igNamedObjectInfo_register);
}
void igNamedObjectInfo_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igNamedObjectInfo_meta,(int)igInfo_register,(int)fn_800284EC,(int)igNamedObjectInfo_getMetaCall,(int)igNamedObjectInfo_className,24,(int)igNamedObjectInfo_vtableRead,(int)igNamedObjectInfo_fieldInit,0,(int)lbl_8055D23C);
}
void *igNamedObjectInfo_getMetaCall(){return igNamedObjectInfo_getMeta();}
void igNamedObjectInfo_fieldInit(){
 void *value0=igNamedObjectInfo_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D244,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_8055D248,lbl_8055D24C,lbl_8055D250,value1);
}
void *fn_80029A5C(){
 if(!igNamedObjectList_meta) igNamedObjectList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNamedObjectList_meta;
}
void *igNamedObjectList_getMeta(){
 if(!igNamedObjectList_meta || !(reinterpret_cast<unsigned int *>(igNamedObjectList_meta)[0x24/4]&4)) igNamedObjectList_registerNow();
 return igNamedObjectList_meta;
}
void *igNamedObjectList_vtableRead(){
 UnknownGenObject80029AD4_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_80476298;
 object.unknown00=igNamedObjectList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNamedObjectList_registerNow(){
 meta_registerNow((int)igNamedObjectList_register);
}
void igNamedObjectList_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igNamedObjectList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igNamedObjectList_getMetaCall,(int)igNamedObjectList_className,20,(int)igNamedObjectList_vtableRead,0,0,(int)lbl_8055D254);
}
void *igNamedObjectList_getMetaCall(){return igNamedObjectList_getMeta();}
void *igNamedObject_create(void *object){
 igNamedObject_registerNow();
 return meta_createInstance(igNamedObject_meta,object);
}
void *fn_80029C30(){
 if(!igNamedObject_meta) igNamedObject_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNamedObject_meta;
}
void *igNamedObject_getMeta(){
 if(!igNamedObject_meta || !(reinterpret_cast<unsigned int *>(igNamedObject_meta)[0x24/4]&4)) igNamedObject_registerNow();
 return igNamedObject_meta;
}
void *igNamedObject_vtableRead(){
 UnknownGenObject80029CA8 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNamedObject_registerNow(){
 meta_registerNow((int)igNamedObject_register);
}
void igNamedObject_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igNamedObject_meta,(int)igObject_register,(int)fn_800237D0,(int)igNamedObject_getMetaCall,(int)igNamedObject_className,12,(int)igNamedObject_vtableRead,(int)igNamedObject_fieldInit,0,0);
}
void *igNamedObject_getMetaCall(){return igNamedObject_getMeta();}
void igNamedObject_fieldInit(){
 void *value0=igNamedObject_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D25C,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80071694(value2,(void *)0);
 fn_800659C0(value0,lbl_8055D268,lbl_8055D26C,lbl_8055D270,value1);
}
}
#pragma pop
