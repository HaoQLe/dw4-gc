#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_800D1DA4();
void fn_8012FC48();
void igFilterImage_fieldInit();
void igImageUtils_register();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_804930AC[];
extern char igZFilterWeightListList_className[];
extern char igZFilterWeightList_className[];
extern char igZFilterWeight_className[];
extern char igGaussianSmoothImage_className[];
extern char igSmoothImage_className[];
extern char igZoomImage_className[];
extern char lbl_8049EF14[];
extern char igFilterImage_className[];
extern char lbl_804A6B28[];
extern char lbl_804A6B8C[];
extern char igZoomImage_vtable[];
extern char igGaussianSmoothImage_vtable[];
extern char igZFilterWeight_vtable[];
extern char igZFilterWeightList_vtable[];
extern char lbl_804A9220[];
extern char igZFilterWeightListList_vtable[];
extern char lbl_804A92E8[];
extern char lbl_8055FAF8[8];
extern char lbl_8055FB00[8];
extern char lbl_8055FB08[4];
extern char lbl_8055FB10[4];
extern char lbl_8055FB14[4];
extern char lbl_8055FB18[4];
extern char lbl_8055FB1C[8];
extern char lbl_8055FB34[8];
extern char lbl_8055FB3C[8];
extern char lbl_8055FB44[8];
extern void *igZFilterWeightListList_meta;
extern void *igZFilterWeightList_meta;
extern void *igZFilterWeight_meta;
extern void *igGaussianSmoothImage_meta;
extern void *igSmoothImage_meta;
extern void *igZoomImage_meta;
extern void *igFilterImage_meta;
void *igZFilterWeightListList_getMeta();
void *igZFilterWeightListList_vtableRead();
void igZFilterWeightListList_registerNow();
void igZFilterWeightListList_register();
void *igZFilterWeightListList_getMetaCall();
void *igZFilterWeightList_getMeta();
void *igZFilterWeightList_vtableRead();
void igZFilterWeightList_registerNow();
void igZFilterWeightList_register();
void *igZFilterWeightList_getMetaCall();
void igZFilterWeightList_fieldInit();
void *igZFilterWeight_getMeta();
void *igZFilterWeight_vtableRead();
void igZFilterWeight_registerNow();
void igZFilterWeight_register();
void *igZFilterWeight_getMetaCall();
void igZFilterWeight_fieldInit();
void *igGaussianSmoothImage_getMeta();
void *igGaussianSmoothImage_vtableRead();
void igGaussianSmoothImage_registerNow();
void igGaussianSmoothImage_register();
void *igGaussianSmoothImage_getMetaCall();
void *igGaussianSmoothImage_parentMeta();
void *igSmoothImage_getMeta();
void igSmoothImage_registerNow();
void igSmoothImage_register();
void *igSmoothImage_getMetaCall();
void *fn_80149688();
void *igZoomImage_getMeta();
void *igZoomImage_vtableRead();
void igZoomImage_registerNow();
void igZoomImage_register();
void *igZoomImage_getMetaCall();
void *igFilterImage_getMeta();
void igFilterImage_registerNow();
void igFilterImage_register();
void *igFilterImage_getMetaCall();
}
struct UnknownGenObject80148E80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80149018_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80149220_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801493BC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801493BC(){fn_8006665C(this);}
};
struct UnknownGenObject801493BC_0 : UnknownGenRoot801493BC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801493BC_0(){unknown00=lbl_804A6B8C;}
};
struct UnknownGenObject801493BC_1 : UnknownGenObject801493BC_0 {
 inline ~UnknownGenObject801493BC_1(){unknown00=lbl_804A6B28;}
};
struct UnknownGenObject801493BC : UnknownGenObject801493BC_1 {
 char unknown14[4];
 inline ~UnknownGenObject801493BC(){unknown00=igGaussianSmoothImage_vtable;}
};
struct UnknownGenRoot80149704 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80149704(){fn_8006665C(this);}
};
struct UnknownGenObject80149704_0 : UnknownGenRoot80149704 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject80149704_0(){unknown00=lbl_804A6B8C;}
};
struct UnknownGenObject80149704 : UnknownGenObject80149704_0 {
 char unknown14[4];
 inline ~UnknownGenObject80149704(){unknown00=igZoomImage_vtable;}
};
extern "C" {
void *igZFilterWeightListList_create(void *object){
 igZFilterWeightListList_registerNow();
 return meta_createInstance(igZFilterWeightListList_meta,object);
}
void *igZFilterWeightListList_getMeta(){
 if(!igZFilterWeightListList_meta || !(reinterpret_cast<unsigned int *>(igZFilterWeightListList_meta)[0x24/4]&4)) igZFilterWeightListList_registerNow();
 return igZFilterWeightListList_meta;
}
void *igZFilterWeightListList_vtableRead(){
 UnknownGenObject80148E80_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804A92E8;
 object.unknown00=igZFilterWeightListList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igZFilterWeightListList_registerNow(){
 meta_registerNow((int)igZFilterWeightListList_register);
}
void igZFilterWeightListList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igZFilterWeightListList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igZFilterWeightListList_getMetaCall,(int)igZFilterWeightListList_className,20,(int)igZFilterWeightListList_vtableRead,0,0,(int)lbl_8055FAF8);
}
void *igZFilterWeightListList_getMetaCall(){return igZFilterWeightListList_getMeta();}
void *igZFilterWeightList_create(void *object){
 igZFilterWeightList_registerNow();
 return meta_createInstance(igZFilterWeightList_meta,object);
}
void *igZFilterWeightList_getMeta(){
 if(!igZFilterWeightList_meta || !(reinterpret_cast<unsigned int *>(igZFilterWeightList_meta)[0x24/4]&4)) igZFilterWeightList_registerNow();
 return igZFilterWeightList_meta;
}
void *igZFilterWeightList_vtableRead(){
 UnknownGenObject80149018_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804A9220;
 object.unknown00=igZFilterWeightList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igZFilterWeightList_registerNow(){
 meta_registerNow((int)igZFilterWeightList_register);
}
void igZFilterWeightList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igZFilterWeightList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igZFilterWeightList_getMetaCall,(int)igZFilterWeightList_className,24,(int)igZFilterWeightList_vtableRead,(int)igZFilterWeightList_fieldInit,0,(int)lbl_8055FB00);
}
void *igZFilterWeightList_getMetaCall(){return igZFilterWeightList_getMeta();}
void igZFilterWeightList_fieldInit(){
 void *value0=igZFilterWeightList_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FB08,1);
 fn_800659C0(value0,lbl_8055FB10,lbl_8055FB14,lbl_8055FB18,value1);
}
void *igZFilterWeight_create(void *object){
 igZFilterWeight_registerNow();
 return meta_createInstance(igZFilterWeight_meta,object);
}
void *igZFilterWeight_getMeta(){
 if(!igZFilterWeight_meta || !(reinterpret_cast<unsigned int *>(igZFilterWeight_meta)[0x24/4]&4)) igZFilterWeight_registerNow();
 return igZFilterWeight_meta;
}
void *igZFilterWeight_vtableRead(){
 UnknownGenObject80149220_0 object;
 fn_8006665C(&object);
 object.unknown00=igZFilterWeight_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igZFilterWeight_registerNow(){
 meta_registerNow((int)igZFilterWeight_register);
}
void igZFilterWeight_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igZFilterWeight_meta,(int)igObject_register,(int)fn_800237D0,(int)igZFilterWeight_getMetaCall,(int)igZFilterWeight_className,24,(int)igZFilterWeight_vtableRead,(int)igZFilterWeight_fieldInit,0,0);
}
void *igZFilterWeight_getMetaCall(){return igZFilterWeight_getMeta();}
void igZFilterWeight_fieldInit(){
 void *value0=igZFilterWeight_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FB1C,2);
 fn_800659C0(value0,lbl_8055FB34,lbl_8055FB3C,lbl_8055FB44,value1);
}
void *igGaussianSmoothImage_getMeta(){
 if(!igGaussianSmoothImage_meta || !(reinterpret_cast<unsigned int *>(igGaussianSmoothImage_meta)[0x24/4]&4)) igGaussianSmoothImage_registerNow();
 return igGaussianSmoothImage_meta;
}
void *igGaussianSmoothImage_vtableRead(){
 UnknownGenObject801493BC object;
 object.unknown00=lbl_804930AC;
 object.unknown00=lbl_804A6B8C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804A6B28;
 object.unknown00=igGaussianSmoothImage_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGaussianSmoothImage_registerNow(){
 meta_registerNow((int)igGaussianSmoothImage_register);
}
void igGaussianSmoothImage_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igGaussianSmoothImage_meta,(int)igSmoothImage_register,(int)igGaussianSmoothImage_parentMeta,(int)igGaussianSmoothImage_getMetaCall,(int)igGaussianSmoothImage_className,20,(int)igGaussianSmoothImage_vtableRead,0,0,0);
}
void *igGaussianSmoothImage_getMetaCall(){return igGaussianSmoothImage_getMeta();}
void *igGaussianSmoothImage_parentMeta(){return igSmoothImage_meta;}
void *igSmoothImage_getMeta(){
 if(!igSmoothImage_meta || !(reinterpret_cast<unsigned int *>(igSmoothImage_meta)[0x24/4]&4)) igSmoothImage_registerNow();
 return igSmoothImage_meta;
}
void igSmoothImage_registerNow(){
 meta_registerNow((int)igSmoothImage_register);
}
void igSmoothImage_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igSmoothImage_meta,(int)igFilterImage_register,(int)fn_80149688,(int)igSmoothImage_getMetaCall,(int)igSmoothImage_className,20,0,0,0,0);
}
void *igSmoothImage_getMetaCall(){return igSmoothImage_getMeta();}
void *fn_80149688(){return igFilterImage_meta;}
void *igZoomImage_create(void *object){
 igZoomImage_registerNow();
 return meta_createInstance(igZoomImage_meta,object);
}
void *igZoomImage_getMeta(){
 if(!igZoomImage_meta || !(reinterpret_cast<unsigned int *>(igZoomImage_meta)[0x24/4]&4)) igZoomImage_registerNow();
 return igZoomImage_meta;
}
void *igZoomImage_vtableRead(){
 UnknownGenObject80149704 object;
 object.unknown00=lbl_804930AC;
 object.unknown00=lbl_804A6B8C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igZoomImage_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igZoomImage_registerNow(){
 meta_registerNow((int)igZoomImage_register);
}
void igZoomImage_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igZoomImage_meta,(int)igFilterImage_register,(int)fn_80149688,(int)igZoomImage_getMetaCall,(int)igZoomImage_className,20,(int)igZoomImage_vtableRead,0,0,0);
}
void *igZoomImage_getMetaCall(){return igZoomImage_getMeta();}
void *igFilterImage_getMeta(){
 if(!igFilterImage_meta || !(reinterpret_cast<unsigned int *>(igFilterImage_meta)[0x24/4]&4)) igFilterImage_registerNow();
 return igFilterImage_meta;
}
void igFilterImage_registerNow(){
 meta_registerNow((int)igFilterImage_register);
}
void igFilterImage_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igFilterImage_meta,(int)igImageUtils_register,(int)fn_800D1DA4,(int)igFilterImage_getMetaCall,(int)igFilterImage_className,20,0,(int)igFilterImage_fieldInit,0,(int)lbl_8049EF14);
}
void *igFilterImage_getMetaCall(){return igFilterImage_getMeta();}
}
#pragma pop
