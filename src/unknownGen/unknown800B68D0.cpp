#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800D06E0();
void *igGeometryAttr_fieldInit();
void igVisualAttribute_register();
extern char igGeometryAttr1_5_className[];
extern char lbl_8047969C[];
extern char igGeometryAttr_className[];
extern char igGeometryAttr1_5_vtable[];
extern char lbl_8047C5AC[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E448[8];
extern char lbl_8055E450[4];
extern char lbl_8055E454[4];
extern char lbl_8055E458[4];
extern char lbl_8055E45C[4];
extern void *lbl_805621F4;
extern void *igGeometryAttr1_5_meta;
extern void *igGeometryAttr_meta;
void *igGeometryAttr1_5_getMeta();
void *igGeometryAttr1_5_vtableRead();
void igGeometryAttr1_5_registerNow();
void igGeometryAttr1_5_register();
void *igGeometryAttr1_5_getMetaCall();
void *igGeometryAttr1_5_parentMeta();
void igGeometryAttr1_5_fieldInit();
void *igGeometryAttr_getMeta();
void igGeometryAttr_registerNow();
void igGeometryAttr_register();
void *igGeometryAttr_getMetaCall();
}
struct UnknownGenRoot800B690C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B690C(){fn_8006665C(this);}
};
struct UnknownGenObject800B690C_0 : UnknownGenRoot800B690C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 UnknownGenRefMember unknown20;
 char unknown24[4];
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 inline ~UnknownGenObject800B690C_0(){unknown00=lbl_8047C5AC;}
};
struct UnknownGenObject800B690C : UnknownGenObject800B690C_0 {
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject800B690C(){unknown00=igGeometryAttr1_5_vtable;}
};
extern "C" {
void *igGeometryAttr1_5_getMeta(){
 if(!igGeometryAttr1_5_meta || !(reinterpret_cast<unsigned int *>(igGeometryAttr1_5_meta)[0x24/4]&4)) igGeometryAttr1_5_registerNow();
 return igGeometryAttr1_5_meta;
}
void *igGeometryAttr1_5_vtableRead(){
 UnknownGenObject800B690C object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C5AC;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown20.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown00=igGeometryAttr1_5_vtable;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGeometryAttr1_5_registerNow(){
 meta_registerNow((int)igGeometryAttr1_5_register);
}
void igGeometryAttr1_5_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igGeometryAttr1_5_meta,(int)igGeometryAttr_register,(int)igGeometryAttr1_5_parentMeta,(int)igGeometryAttr1_5_getMetaCall,(int)igGeometryAttr1_5_className,52,(int)igGeometryAttr1_5_vtableRead,(int)igGeometryAttr1_5_fieldInit,0,(int)lbl_8055E448);
}
void *igGeometryAttr1_5_getMetaCall(){return igGeometryAttr1_5_getMeta();}
void *igGeometryAttr1_5_parentMeta(){return igGeometryAttr_meta;}
void igGeometryAttr1_5_fieldInit(){
 void *value0=igGeometryAttr1_5_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E450,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800D06E0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055E454,lbl_8055E458,lbl_8055E45C,value1);
}
void *igGeometryAttr_create(void *object){
 igGeometryAttr_registerNow();
 return meta_createInstance(igGeometryAttr_meta,object);
}
void *fn_800B6C60(){
 if(!igGeometryAttr_meta) igGeometryAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGeometryAttr_meta;
}
void *igGeometryAttr_getMeta(){
 if(!igGeometryAttr_meta || !(reinterpret_cast<unsigned int *>(igGeometryAttr_meta)[0x24/4]&4)) igGeometryAttr_registerNow();
 return igGeometryAttr_meta;
}
void igGeometryAttr_registerNow(){
 meta_registerNow((int)igGeometryAttr_register);
}
void igGeometryAttr_register(){
 fn_800ABC8C();
 meta_registerClass(1,(int)&igGeometryAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igGeometryAttr_getMetaCall,(int)igGeometryAttr_className,48,0,(int)igGeometryAttr_fieldInit,0,(int)lbl_8047969C);
}
void *igGeometryAttr_getMetaCall(){return igGeometryAttr_getMeta();}
}
#pragma pop
