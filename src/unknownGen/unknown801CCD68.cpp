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
void igAnimationTransitionParams_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAnimationTransitionPointList_className[];
extern char igAnimationTransitionPoint_className[];
extern char igAnimationTransitionParams_className[];
extern char igAnimationTransitionParams_vtable[];
extern char igAnimationTransitionPoint_vtable[];
extern char igAnimationTransitionPointList_vtable[];
extern char lbl_804B5C18[];
extern char lbl_80560A08[8];
extern char lbl_80560A10[8];
extern char lbl_80560A18[8];
extern char lbl_80560A20[8];
extern char lbl_80560A28[8];
extern char lbl_80560A30[8];
extern void *lbl_805621F4;
extern void *igAnimationTransitionPointList_meta;
extern void *igAnimationTransitionPoint_meta;
extern void *igAnimationTransitionParams_meta;
void *igAnimationTransitionPointList_getMeta();
void *igAnimationTransitionPointList_vtableRead();
void igAnimationTransitionPointList_registerNow();
void igAnimationTransitionPointList_register();
void *igAnimationTransitionPointList_getMetaCall();
void *igAnimationTransitionPoint_getMeta();
void *igAnimationTransitionPoint_vtableRead();
void igAnimationTransitionPoint_registerNow();
void igAnimationTransitionPoint_register();
void *igAnimationTransitionPoint_getMetaCall();
void igAnimationTransitionPoint_fieldInit();
void *fn_801CD104();
void *igAnimationTransitionParams_getMeta();
void *igAnimationTransitionParams_vtableRead();
void igAnimationTransitionParams_registerNow();
void igAnimationTransitionParams_register();
void *igAnimationTransitionParams_getMetaCall();
}
struct UnknownGenObject801CCDE0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CCF40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CCF40(){igObject_construct(this);}
};
struct UnknownGenObject801CCF40 : UnknownGenRoot801CCF40 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801CCF40(){unknown00=igAnimationTransitionPoint_vtable;}
};
struct UnknownGenObject801CD17C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_801CCD68(){
 if(!igAnimationTransitionPointList_meta) igAnimationTransitionPointList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationTransitionPointList_meta;
}
void *igAnimationTransitionPointList_getMeta(){
 if(!igAnimationTransitionPointList_meta || !(reinterpret_cast<unsigned int *>(igAnimationTransitionPointList_meta)[0x24/4]&4)) igAnimationTransitionPointList_registerNow();
 return igAnimationTransitionPointList_meta;
}
void *igAnimationTransitionPointList_vtableRead(){
 UnknownGenObject801CCDE0_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B5C18;
 object.unknown00=igAnimationTransitionPointList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationTransitionPointList_registerNow(){
 meta_registerNow((int)igAnimationTransitionPointList_register);
}
void igAnimationTransitionPointList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationTransitionPointList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationTransitionPointList_getMetaCall,(int)igAnimationTransitionPointList_className,20,(int)igAnimationTransitionPointList_vtableRead,0,0,(int)lbl_80560A08);
}
void *igAnimationTransitionPointList_getMetaCall(){return igAnimationTransitionPointList_getMeta();}
void *igAnimationTransitionPoint_getMeta(){
 if(!igAnimationTransitionPoint_meta || !(reinterpret_cast<unsigned int *>(igAnimationTransitionPoint_meta)[0x24/4]&4)) igAnimationTransitionPoint_registerNow();
 return igAnimationTransitionPoint_meta;
}
void *igAnimationTransitionPoint_vtableRead(){
 UnknownGenObject801CCF40 object;
 object.unknown00=igAnimationTransitionPoint_vtable;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationTransitionPoint_registerNow(){
 meta_registerNow((int)igAnimationTransitionPoint_register);
}
void igAnimationTransitionPoint_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationTransitionPoint_meta,(int)igObject_register,(int)fn_800237D0,(int)igAnimationTransitionPoint_getMetaCall,(int)igAnimationTransitionPoint_className,24,(int)igAnimationTransitionPoint_vtableRead,(int)igAnimationTransitionPoint_fieldInit,0,(int)lbl_80560A10);
}
void *igAnimationTransitionPoint_getMetaCall(){return igAnimationTransitionPoint_getMeta();}
void igAnimationTransitionPoint_fieldInit(){
 void *value0=igAnimationTransitionPoint_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_80560A18,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_801CD104();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_80560A20,lbl_80560A28,lbl_80560A30,value1);
}
void *fn_801CD104(){
 if(!igAnimationTransitionParams_meta) igAnimationTransitionParams_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationTransitionParams_meta;
}
void *igAnimationTransitionParams_getMeta(){
 if(!igAnimationTransitionParams_meta || !(reinterpret_cast<unsigned int *>(igAnimationTransitionParams_meta)[0x24/4]&4)) igAnimationTransitionParams_registerNow();
 return igAnimationTransitionParams_meta;
}
void *igAnimationTransitionParams_vtableRead(){
 UnknownGenObject801CD17C_0 object;
 igObject_construct(&object);
 object.unknown00=igAnimationTransitionParams_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationTransitionParams_registerNow(){
 meta_registerNow((int)igAnimationTransitionParams_register);
}
void igAnimationTransitionParams_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationTransitionParams_meta,(int)igObject_register,(int)fn_800237D0,(int)igAnimationTransitionParams_getMetaCall,(int)igAnimationTransitionParams_className,32,(int)igAnimationTransitionParams_vtableRead,(int)igAnimationTransitionParams_fieldInit,0,0);
}
void *igAnimationTransitionParams_getMetaCall(){return igAnimationTransitionParams_getMeta();}
}
#pragma pop
