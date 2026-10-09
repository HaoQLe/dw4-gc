#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800B4238();
void *fn_800C192C();
void igObjectList_register();
void igObject_register();
void igVec3fList_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8047909C[];
extern char lbl_804790B0[];
extern char lbl_804790C0[];
extern char lbl_804790CC[];
extern char lbl_8047DDA8[];
extern char lbl_8047DE0C[];
extern char lbl_8047DE70[];
extern char lbl_8047DED4[];
extern char lbl_8047DF38[];
extern char lbl_8047DF98[];
extern char lbl_8047DFF8[];
extern char lbl_8055E340[8];
extern char lbl_8055E348[8];
extern void *lbl_805621F4;
extern void *lbl_8056275C;
extern void *lbl_80562760;
extern void *lbl_80562764;
extern void *lbl_80562768;
extern void *lbl_8056276C;
extern void *lbl_80563A14;
void *igVec3fAlignedList_getMeta();
void *igVec3fAlignedList_vtableRead();
void fn_800B3C28();
void igVec3fAlignedList_register();
void *igVec3fAlignedList_getMetaCall();
void *igVec3fAlignedList_parentMeta();
void *fn_800B3CE8();
void *igMorphDataList_getMeta();
void *igMorphDataList_vtableRead();
void fn_800B3DF0();
void igMorphDataList_register();
void *igMorphDataList_getMetaCall();
void *igMorphData_getMeta();
void fn_800B3EE0();
void igMorphData_register();
void *igMorphData_getMetaCall();
void *igModelViewMatrixAttrList_getMeta();
void *igModelViewMatrixAttrList_vtableRead();
void fn_800B4074();
void igModelViewMatrixAttrList_register();
void *igModelViewMatrixAttrList_getMetaCall();
}
struct UnknownGenObject800B3BC4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B3D80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B4004_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B3B4C(){
 if(!lbl_8056275C) lbl_8056275C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056275C;
}
void *igVec3fAlignedList_getMeta(){
 if(!lbl_8056275C || !(reinterpret_cast<unsigned int *>(lbl_8056275C)[0x24/4]&4)) fn_800B3C28();
 return lbl_8056275C;
}
void *igVec3fAlignedList_vtableRead(){
 UnknownGenObject800B3BC4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8047DFF8;
 object.unknown00=lbl_8047DF98;
 object.unknown00=lbl_8047DF38;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B3C28(){
 fn_80066188((int)igVec3fAlignedList_register);
}
void igVec3fAlignedList_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056275C,(int)igVec3fList_register,(int)igVec3fAlignedList_parentMeta,(int)igVec3fAlignedList_getMetaCall,(int)lbl_8047909C,20,(int)igVec3fAlignedList_vtableRead,0,(int)fn_800B3CE8,0);
}
void *igVec3fAlignedList_getMetaCall(){return igVec3fAlignedList_getMeta();}
void *igVec3fAlignedList_parentMeta(){return lbl_80563A14;}
void *fn_800B3CE8(){return fn_800C192C();}
void *fn_800B3D08(){
 if(!lbl_80562760) lbl_80562760=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562760;
}
void *igMorphDataList_getMeta(){
 if(!lbl_80562760 || !(reinterpret_cast<unsigned int *>(lbl_80562760)[0x24/4]&4)) fn_800B3DF0();
 return lbl_80562760;
}
void *igMorphDataList_vtableRead(){
 UnknownGenObject800B3D80_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047DED4;
 object.unknown00=lbl_8047DE70;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B3DF0(){
 fn_80066188((int)igMorphDataList_register);
}
void igMorphDataList_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562760,(int)igObjectList_register,(int)fn_80024180,(int)igMorphDataList_getMetaCall,(int)lbl_804790B0,20,(int)igMorphDataList_vtableRead,0,0,(int)lbl_8055E340);
}
void *igMorphDataList_getMetaCall(){return igMorphDataList_getMeta();}
void *igMorphData_getMeta(){
 if(!lbl_80562764 || !(reinterpret_cast<unsigned int *>(lbl_80562764)[0x24/4]&4)) fn_800B3EE0();
 return lbl_80562764;
}
void fn_800B3EE0(){
 fn_80066188((int)igMorphData_register);
}
void igMorphData_register(){
 fn_800ABC8C();
 fn_80066204(1,(int)&lbl_80562764,(int)igObject_register,(int)fn_800237D0,(int)igMorphData_getMetaCall,(int)lbl_804790C0,8,0,0,0,0);
}
void *igMorphData_getMetaCall(){return igMorphData_getMeta();}
void *fn_800B3F8C(){
 if(!lbl_80562768) lbl_80562768=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562768;
}
void *igModelViewMatrixAttrList_getMeta(){
 if(!lbl_80562768 || !(reinterpret_cast<unsigned int *>(lbl_80562768)[0x24/4]&4)) fn_800B4074();
 return lbl_80562768;
}
void *igModelViewMatrixAttrList_vtableRead(){
 UnknownGenObject800B4004_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047DE0C;
 object.unknown00=lbl_8047DDA8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B4074(){
 fn_80066188((int)igModelViewMatrixAttrList_register);
}
void igModelViewMatrixAttrList_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562768,(int)igObjectList_register,(int)fn_80024180,(int)igModelViewMatrixAttrList_getMetaCall,(int)lbl_804790CC,20,(int)igModelViewMatrixAttrList_vtableRead,0,0,(int)lbl_8055E348);
}
void *igModelViewMatrixAttrList_getMetaCall(){return igModelViewMatrixAttrList_getMeta();}
void *fn_800B4128(void *object){
 fn_800B4238();
 return fn_8006546C(lbl_8056276C,object);
}
void *fn_800B4160(){
 if(!lbl_8056276C) lbl_8056276C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056276C;
}
void *igModelViewMatrixAttr_getMeta(){
 if(!lbl_8056276C || !(reinterpret_cast<unsigned int *>(lbl_8056276C)[0x24/4]&4)) fn_800B4238();
 return lbl_8056276C;
}
}
#pragma pop
