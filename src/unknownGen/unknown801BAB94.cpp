#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_80029E64(void *);
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801BB3B8();
void igGroup_register();
void igObjectList_register();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AEC3C[];
extern char lbl_804AEC5C[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804B7ABC[];
extern char lbl_804B7B50[];
extern char lbl_804B7BB4[];
extern char lbl_8056048C[8];
extern char lbl_80560494[4];
extern char lbl_80560498[4];
extern char lbl_8056049C[4];
extern char lbl_805604A0[4];
extern void *lbl_805621F4;
extern void *lbl_80564D80;
extern void *lbl_80564D84;
extern void *lbl_80564D8C;
void *igModelViewMatrixBoneSelectList_getMeta();
void *igModelViewMatrixBoneSelectList_vtableRead();
void fn_801BAC7C();
void igModelViewMatrixBoneSelectList_register();
void *igModelViewMatrixBoneSelectList_getMetaCall();
void *igModelViewMatrixBoneSelect_getMeta();
void *igModelViewMatrixBoneSelect_vtableRead();
void fn_801BAF58();
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
 inline ~UnknownGenObject801BADE0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801BADE0_1 : UnknownGenObject801BADE0_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BADE0_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801BADE0_2 : UnknownGenObject801BADE0_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801BADE0_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject801BADE0 : UnknownGenObject801BADE0_2 {
 char unknown20[8];
 inline ~UnknownGenObject801BADE0(){unknown00=lbl_804B7ABC;}
};
extern "C" {
void *fn_801BAB94(){
 if(!lbl_80564D80) lbl_80564D80=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564D80;
}
void *igModelViewMatrixBoneSelectList_getMeta(){
 if(!lbl_80564D80 || !(reinterpret_cast<unsigned int *>(lbl_80564D80)[0x24/4]&4)) fn_801BAC7C();
 return lbl_80564D80;
}
void *igModelViewMatrixBoneSelectList_vtableRead(){
 UnknownGenObject801BAC0C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7BB4;
 object.unknown00=lbl_804B7B50;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BAC7C(){
 fn_80066188((int)igModelViewMatrixBoneSelectList_register);
}
void igModelViewMatrixBoneSelectList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564D80,(int)igObjectList_register,(int)fn_80024180,(int)igModelViewMatrixBoneSelectList_getMetaCall,(int)lbl_804AEC3C,20,(int)igModelViewMatrixBoneSelectList_vtableRead,0,0,(int)lbl_8056048C);
}
void *igModelViewMatrixBoneSelectList_getMetaCall(){return igModelViewMatrixBoneSelectList_getMeta();}
void *fn_801BAD30(void *object){
 fn_801BAF58();
 return fn_8006546C(lbl_80564D84,object);
}
void *fn_801BAD68(){
 if(!lbl_80564D84) lbl_80564D84=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564D84;
}
void *igModelViewMatrixBoneSelect_getMeta(){
 if(!lbl_80564D84 || !(reinterpret_cast<unsigned int *>(lbl_80564D84)[0x24/4]&4)) fn_801BAF58();
 return lbl_80564D84;
}
void *igModelViewMatrixBoneSelect_vtableRead(){
 UnknownGenObject801BADE0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804B7ABC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BAF58(){
 fn_80066188((int)igModelViewMatrixBoneSelect_register);
}
void igModelViewMatrixBoneSelect_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564D84,(int)igGroup_register,(int)fn_8011148C,(int)igModelViewMatrixBoneSelect_getMetaCall,(int)lbl_804AEC5C,36,(int)igModelViewMatrixBoneSelect_vtableRead,(int)igModelViewMatrixBoneSelect_fieldInit,0,0);
}
void *igModelViewMatrixBoneSelect_getMetaCall(){return igModelViewMatrixBoneSelect_getMeta();}
void igModelViewMatrixBoneSelect_fieldInit(){
 void *value0=lbl_80564D84;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560494,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80053650(value2,-1);
 fn_800659C0(value0,lbl_80560498,lbl_8056049C,lbl_805604A0,value1);
}
void *fn_801BB08C(void *object){
 fn_801BB3B8();
 return fn_8006546C(lbl_80564D8C,object);
}
void *fn_801BB0C4(){
 if(!lbl_80564D8C) lbl_80564D8C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564D8C;
}
void *igLod_getMeta(){
 if(!lbl_80564D8C || !(reinterpret_cast<unsigned int *>(lbl_80564D8C)[0x24/4]&4)) fn_801BB3B8();
 return lbl_80564D8C;
}
}
#pragma pop
