#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8011148C();
void fn_801AA6DC();
void igLod_registerNow();
void igGroup_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igModelViewMatrixBoneSelectList_className[];
extern char igModelViewMatrixBoneSelect_className[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char igModelViewMatrixBoneSelect_vtable[];
extern char igModelViewMatrixBoneSelectList_vtable[];
extern char lbl_804B7BB4[];
extern char lbl_8056048C[8];
extern char lbl_80560494[4];
extern char lbl_80560498[4];
extern char lbl_8056049C[4];
extern char lbl_805604A0[4];
extern void *lbl_805621F4;
extern void *igModelViewMatrixBoneSelectList_meta;
extern void *igModelViewMatrixBoneSelect_meta;
extern void *igLod_meta;
void *igModelViewMatrixBoneSelectList_getMeta();
void *igModelViewMatrixBoneSelectList_vtableRead();
void igModelViewMatrixBoneSelectList_registerNow();
void igModelViewMatrixBoneSelectList_register();
void *igModelViewMatrixBoneSelectList_getMetaCall();
void *igModelViewMatrixBoneSelect_getMeta();
void *igModelViewMatrixBoneSelect_vtableRead();
void igModelViewMatrixBoneSelect_registerNow();
void igModelViewMatrixBoneSelect_register();
void *igModelViewMatrixBoneSelect_getMetaCall();
void igModelViewMatrixBoneSelect_fieldInit();
}
struct UnknownGenObject801BAC0C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801BADE0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BADE0(){fn_8006665C(this);}
};
struct UnknownGenObject801BADE0_0 : UnknownGenRoot801BADE0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BADE0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801BADE0_1 : UnknownGenObject801BADE0_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BADE0_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801BADE0_2 : UnknownGenObject801BADE0_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801BADE0_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject801BADE0 : UnknownGenObject801BADE0_2 {
 char unknown20[8];
 inline ~UnknownGenObject801BADE0(){unknown00=igModelViewMatrixBoneSelect_vtable;}
};
extern "C" {
void *fn_801BAB94(){
 if(!igModelViewMatrixBoneSelectList_meta) igModelViewMatrixBoneSelectList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igModelViewMatrixBoneSelectList_meta;
}
void *igModelViewMatrixBoneSelectList_getMeta(){
 if(!igModelViewMatrixBoneSelectList_meta || !(reinterpret_cast<unsigned int *>(igModelViewMatrixBoneSelectList_meta)[0x24/4]&4)) igModelViewMatrixBoneSelectList_registerNow();
 return igModelViewMatrixBoneSelectList_meta;
}
void *igModelViewMatrixBoneSelectList_vtableRead(){
 UnknownGenObject801BAC0C_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B7BB4;
 object.unknown00=igModelViewMatrixBoneSelectList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igModelViewMatrixBoneSelectList_registerNow(){
 meta_registerNow((int)igModelViewMatrixBoneSelectList_register);
}
void igModelViewMatrixBoneSelectList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igModelViewMatrixBoneSelectList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igModelViewMatrixBoneSelectList_getMetaCall,(int)igModelViewMatrixBoneSelectList_className,20,(int)igModelViewMatrixBoneSelectList_vtableRead,0,0,(int)lbl_8056048C);
}
void *igModelViewMatrixBoneSelectList_getMetaCall(){return igModelViewMatrixBoneSelectList_getMeta();}
void *igModelViewMatrixBoneSelect_create(void *object){
 igModelViewMatrixBoneSelect_registerNow();
 return meta_createInstance(igModelViewMatrixBoneSelect_meta,object);
}
void *fn_801BAD68(){
 if(!igModelViewMatrixBoneSelect_meta) igModelViewMatrixBoneSelect_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igModelViewMatrixBoneSelect_meta;
}
void *igModelViewMatrixBoneSelect_getMeta(){
 if(!igModelViewMatrixBoneSelect_meta || !(reinterpret_cast<unsigned int *>(igModelViewMatrixBoneSelect_meta)[0x24/4]&4)) igModelViewMatrixBoneSelect_registerNow();
 return igModelViewMatrixBoneSelect_meta;
}
void *igModelViewMatrixBoneSelect_vtableRead(){
 UnknownGenObject801BADE0 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igGroup_vtable;
 object.unknown1C.value=0;
 object.unknown00=igModelViewMatrixBoneSelect_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igModelViewMatrixBoneSelect_registerNow(){
 meta_registerNow((int)igModelViewMatrixBoneSelect_register);
}
void igModelViewMatrixBoneSelect_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igModelViewMatrixBoneSelect_meta,(int)igGroup_register,(int)fn_8011148C,(int)igModelViewMatrixBoneSelect_getMetaCall,(int)igModelViewMatrixBoneSelect_className,36,(int)igModelViewMatrixBoneSelect_vtableRead,(int)igModelViewMatrixBoneSelect_fieldInit,0,0);
}
void *igModelViewMatrixBoneSelect_getMetaCall(){return igModelViewMatrixBoneSelect_getMeta();}
void igModelViewMatrixBoneSelect_fieldInit(){
 void *value0=igModelViewMatrixBoneSelect_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560494,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80053650(value2,-1);
 fn_800659C0(value0,lbl_80560498,lbl_8056049C,lbl_805604A0,value1);
}
void *igLod_create(void *object){
 igLod_registerNow();
 return meta_createInstance(igLod_meta,object);
}
void *fn_801BB0C4(){
 if(!igLod_meta) igLod_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLod_meta;
}
void *igLod_getMeta(){
 if(!igLod_meta || !(reinterpret_cast<unsigned int *>(igLod_meta)[0x24/4]&4)) igLod_registerNow();
 return igLod_meta;
}
}
#pragma pop
