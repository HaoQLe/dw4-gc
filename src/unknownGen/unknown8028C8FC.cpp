#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_801308D0();
void igCollisionInfo_registerNow();
void igCollisionGroupList_registerNow();
void igCollisionGroup_registerNow();
void igCollisionGridHelper_registerNow();
void igCollisionGrid_registerNow();
void igCollisionCellList_registerNow();
void igCollisionCell_registerNow();
void igBoundingSphereMaker_registerNow();
void igCreateCollisionDatabase_fieldInit();
void igOptBase_register();
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_804CC708[];
extern char igCreateCollisionDatabase_className[];
extern char igCreateCollisionDatabase_vtable[];
extern char lbl_805660B8[1];
extern char lbl_805660B9[1];
extern void *igCreateCollisionDatabase_meta;
void fn_8028C93C();
void *igCreateCollisionDatabase_getMeta();
void *igCreateCollisionDatabase_vtableRead();
void igCreateCollisionDatabase_registerNow();
void igCreateCollisionDatabase_register();
void *igCreateCollisionDatabase_getMetaCall();
}
struct UnknownGenRoot8028C9AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028C9AC(){igObject_construct(this);}
};
struct UnknownGenObject8028C9AC_0 : UnknownGenRoot8028C9AC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8028C9AC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8028C9AC : UnknownGenObject8028C9AC_0 {
 char unknown28[12];
 UnknownGenString unknown34;
 UnknownGenRefMember unknown38;
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 char unknown44[12];
 inline ~UnknownGenObject8028C9AC(){unknown00=igCreateCollisionDatabase_vtable;}
};
extern "C" {
void fn_8028C8FC(){
 igCreateCollisionDatabase_registerNow();
 igCollisionInfo_registerNow();
 igCollisionGroup_registerNow();
 igCollisionGroupList_registerNow();
 igCollisionGridHelper_registerNow();
 igCollisionGrid_registerNow();
 igCollisionCell_registerNow();
 igCollisionCellList_registerNow();
 igBoundingSphereMaker_registerNow();
}
void fn_8028C93C(){
 if((int)*reinterpret_cast<signed char *>((lbl_805660B9+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_805660B8+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_805660B9+0))=1;
 }
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_805660B8+0))){
  return;
 }
 *reinterpret_cast<unsigned char *>((lbl_805660B8+0))=1;
}
void *igCreateCollisionDatabase_getMeta(){
 if(!igCreateCollisionDatabase_meta || !(reinterpret_cast<unsigned int *>(igCreateCollisionDatabase_meta)[0x24/4]&4)) igCreateCollisionDatabase_registerNow();
 return igCreateCollisionDatabase_meta;
}
void *igCreateCollisionDatabase_vtableRead(){
 UnknownGenObject8028C9AC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCreateCollisionDatabase_vtable;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCreateCollisionDatabase_registerNow(){
 meta_registerNow((int)igCreateCollisionDatabase_register);
}
void igCreateCollisionDatabase_register(){
 fn_8028C93C();
 meta_registerClass(0,(int)&igCreateCollisionDatabase_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igCreateCollisionDatabase_getMetaCall,(int)igCreateCollisionDatabase_className,68,(int)igCreateCollisionDatabase_vtableRead,(int)igCreateCollisionDatabase_fieldInit,0,(int)lbl_804CC708);
}
void *igCreateCollisionDatabase_getMetaCall(){return igCreateCollisionDatabase_getMeta();}
}
#pragma pop
