#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023CF4();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_80149C04();
void igFileInfo_fieldInit();
void igNamedObject_register();
void igObjectList_register();
void igObject_register();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049EFC0[];
extern char lbl_8049EFD4[];
extern char lbl_8049EFE8[];
extern char lbl_8049EFFC[];
extern char lbl_8049F00C[];
extern char lbl_8049F020[];
extern char lbl_8049F030[];
extern char lbl_8049F040[];
extern char lbl_8049F054[];
extern char lbl_8049F060[];
extern char lbl_8049F070[];
extern char lbl_8049F084[];
extern char lbl_804A6BF0[];
extern char lbl_804A8B3C[];
extern char lbl_804A8BF4[];
extern char lbl_804A8C58[];
extern char lbl_804A8CBC[];
extern char lbl_804A8D20[];
extern char lbl_804A8D84[];
extern char lbl_804A8DE8[];
extern char lbl_804A8E4C[];
extern char lbl_804A8EB0[];
extern char lbl_804A8F14[];
extern char lbl_804A8FDC[];
extern char lbl_8055FB6C[4];
extern char lbl_8055FB78[4];
extern char lbl_8055FB7C[4];
extern char lbl_8055FB80[4];
extern char lbl_8055FB84[8];
extern void *lbl_805621F4;
extern void *lbl_805642B8;
extern void *lbl_805642BC;
extern void *lbl_805642C0;
extern void *lbl_805642C4;
extern void *lbl_805642C8;
extern void *lbl_805642CC;
extern void *lbl_805642D0;
extern void *lbl_805642D4;
extern void *lbl_805642DC;
extern void *lbl_805642E0;
extern void *lbl_805642E4;
void *igMitchellFilterFun_getMeta();
void *igMitchellFilterFun_vtableRead();
void fn_80149D74();
void igMitchellFilterFun_register();
void *igMitchellFilterFun_getMetaCall();
void *igLanczos3FilterFun_getMeta();
void *igLanczos3FilterFun_vtableRead();
void fn_80149EF0();
void igLanczos3FilterFun_register();
void *igLanczos3FilterFun_getMetaCall();
void *igBSplineFilterFun_getMeta();
void *igBSplineFilterFun_vtableRead();
void fn_8014A06C();
void igBSplineFilterFun_register();
void *igBSplineFilterFun_getMetaCall();
void *igBellFilterFun_getMeta();
void *igBellFilterFun_vtableRead();
void fn_8014A1E8();
void igBellFilterFun_register();
void *igBellFilterFun_getMetaCall();
void *igTriangleFilterFun_getMeta();
void *igTriangleFilterFun_vtableRead();
void fn_8014A364();
void igTriangleFilterFun_register();
void *igTriangleFilterFun_getMetaCall();
void *igBoxFilterFun_getMeta();
void *igBoxFilterFun_vtableRead();
void fn_8014A4E0();
void igBoxFilterFun_register();
void *igBoxFilterFun_getMetaCall();
void *igStdFilterFun_getMeta();
void *igStdFilterFun_vtableRead();
void fn_8014A624();
void igStdFilterFun_register();
void *igStdFilterFun_getMetaCall();
void *igSerialFilterFun_getMeta();
void fn_8014A710();
void igSerialFilterFun_register();
void *igSerialFilterFun_getMetaCall();
void *igSerialFilterFun_parentMeta();
void igSerialFilterFun_fieldInit();
void *igFilterFun_getMeta();
void fn_8014A8AC();
void igFilterFun_register();
void *igFilterFun_getMetaCall();
void *igFileInfoList_getMeta();
void *igFileInfoList_vtableRead();
void fn_8014AA40();
void igFileInfoList_register();
void *igFileInfoList_getMetaCall();
void *igFileInfo_getMeta();
void *igFileInfo_vtableRead();
void fn_8014ACF4();
void igFileInfo_register();
void *igFileInfo_getMetaCall();
}
struct UnknownGenObject80149D1C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80149E98_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A014_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A190_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A30C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A488_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A5CC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A9D0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8014AB6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014AB6C(){fn_8006665C(this);}
};
struct UnknownGenObject8014AB6C_0 : UnknownGenRoot8014AB6C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8014AB6C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8014AB6C : UnknownGenObject8014AB6C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject8014AB6C(){unknown00=lbl_804A8B3C;}
};
extern "C" {
void *fn_80149CA8(void *object){
 fn_80149D74();
 return fn_8006546C(lbl_805642B8,object);
}
void *igMitchellFilterFun_getMeta(){
 if(!lbl_805642B8 || !(reinterpret_cast<unsigned int *>(lbl_805642B8)[0x24/4]&4)) fn_80149D74();
 return lbl_805642B8;
}
void *igMitchellFilterFun_vtableRead(){
 UnknownGenObject80149D1C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=lbl_804A8F14;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80149D74(){
 fn_80066188((int)igMitchellFilterFun_register);
}
void igMitchellFilterFun_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642B8,(int)igSerialFilterFun_register,(int)fn_80149C04,(int)igMitchellFilterFun_getMetaCall,(int)lbl_8049EFC0,16,(int)igMitchellFilterFun_vtableRead,0,0,0);
}
void *igMitchellFilterFun_getMetaCall(){return igMitchellFilterFun_getMeta();}
void *fn_80149E24(void *object){
 fn_80149EF0();
 return fn_8006546C(lbl_805642BC,object);
}
void *igLanczos3FilterFun_getMeta(){
 if(!lbl_805642BC || !(reinterpret_cast<unsigned int *>(lbl_805642BC)[0x24/4]&4)) fn_80149EF0();
 return lbl_805642BC;
}
void *igLanczos3FilterFun_vtableRead(){
 UnknownGenObject80149E98_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=lbl_804A8EB0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80149EF0(){
 fn_80066188((int)igLanczos3FilterFun_register);
}
void igLanczos3FilterFun_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642BC,(int)igSerialFilterFun_register,(int)fn_80149C04,(int)igLanczos3FilterFun_getMetaCall,(int)lbl_8049EFD4,16,(int)igLanczos3FilterFun_vtableRead,0,0,0);
}
void *igLanczos3FilterFun_getMetaCall(){return igLanczos3FilterFun_getMeta();}
void *fn_80149FA0(void *object){
 fn_8014A06C();
 return fn_8006546C(lbl_805642C0,object);
}
void *igBSplineFilterFun_getMeta(){
 if(!lbl_805642C0 || !(reinterpret_cast<unsigned int *>(lbl_805642C0)[0x24/4]&4)) fn_8014A06C();
 return lbl_805642C0;
}
void *igBSplineFilterFun_vtableRead(){
 UnknownGenObject8014A014_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=lbl_804A8E4C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014A06C(){
 fn_80066188((int)igBSplineFilterFun_register);
}
void igBSplineFilterFun_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642C0,(int)igSerialFilterFun_register,(int)fn_80149C04,(int)igBSplineFilterFun_getMetaCall,(int)lbl_8049EFE8,16,(int)igBSplineFilterFun_vtableRead,0,0,0);
}
void *igBSplineFilterFun_getMetaCall(){return igBSplineFilterFun_getMeta();}
void *fn_8014A11C(void *object){
 fn_8014A1E8();
 return fn_8006546C(lbl_805642C4,object);
}
void *igBellFilterFun_getMeta(){
 if(!lbl_805642C4 || !(reinterpret_cast<unsigned int *>(lbl_805642C4)[0x24/4]&4)) fn_8014A1E8();
 return lbl_805642C4;
}
void *igBellFilterFun_vtableRead(){
 UnknownGenObject8014A190_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=lbl_804A8DE8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014A1E8(){
 fn_80066188((int)igBellFilterFun_register);
}
void igBellFilterFun_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642C4,(int)igSerialFilterFun_register,(int)fn_80149C04,(int)igBellFilterFun_getMetaCall,(int)lbl_8049EFFC,16,(int)igBellFilterFun_vtableRead,0,0,0);
}
void *igBellFilterFun_getMetaCall(){return igBellFilterFun_getMeta();}
void *fn_8014A298(void *object){
 fn_8014A364();
 return fn_8006546C(lbl_805642C8,object);
}
void *igTriangleFilterFun_getMeta(){
 if(!lbl_805642C8 || !(reinterpret_cast<unsigned int *>(lbl_805642C8)[0x24/4]&4)) fn_8014A364();
 return lbl_805642C8;
}
void *igTriangleFilterFun_vtableRead(){
 UnknownGenObject8014A30C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=lbl_804A8D84;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014A364(){
 fn_80066188((int)igTriangleFilterFun_register);
}
void igTriangleFilterFun_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642C8,(int)igSerialFilterFun_register,(int)fn_80149C04,(int)igTriangleFilterFun_getMetaCall,(int)lbl_8049F00C,16,(int)igTriangleFilterFun_vtableRead,0,0,0);
}
void *igTriangleFilterFun_getMetaCall(){return igTriangleFilterFun_getMeta();}
void *fn_8014A414(void *object){
 fn_8014A4E0();
 return fn_8006546C(lbl_805642CC,object);
}
void *igBoxFilterFun_getMeta(){
 if(!lbl_805642CC || !(reinterpret_cast<unsigned int *>(lbl_805642CC)[0x24/4]&4)) fn_8014A4E0();
 return lbl_805642CC;
}
void *igBoxFilterFun_vtableRead(){
 UnknownGenObject8014A488_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=lbl_804A8D20;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014A4E0(){
 fn_80066188((int)igBoxFilterFun_register);
}
void igBoxFilterFun_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642CC,(int)igSerialFilterFun_register,(int)fn_80149C04,(int)igBoxFilterFun_getMetaCall,(int)lbl_8049F020,16,(int)igBoxFilterFun_vtableRead,0,0,0);
}
void *igBoxFilterFun_getMetaCall(){return igBoxFilterFun_getMeta();}
void *igStdFilterFun_getMeta(){
 if(!lbl_805642D0 || !(reinterpret_cast<unsigned int *>(lbl_805642D0)[0x24/4]&4)) fn_8014A624();
 return lbl_805642D0;
}
void *igStdFilterFun_vtableRead(){
 UnknownGenObject8014A5CC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=lbl_804A8CBC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014A624(){
 fn_80066188((int)igStdFilterFun_register);
}
void igStdFilterFun_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642D0,(int)igSerialFilterFun_register,(int)fn_80149C04,(int)igStdFilterFun_getMetaCall,(int)lbl_8049F030,16,(int)igStdFilterFun_vtableRead,0,0,0);
}
void *igStdFilterFun_getMetaCall(){return igStdFilterFun_getMeta();}
void *igSerialFilterFun_getMeta(){
 if(!lbl_805642D4 || !(reinterpret_cast<unsigned int *>(lbl_805642D4)[0x24/4]&4)) fn_8014A710();
 return lbl_805642D4;
}
void fn_8014A710(){
 fn_80066188((int)igSerialFilterFun_register);
}
void igSerialFilterFun_register(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_805642D4,(int)igFilterFun_register,(int)igSerialFilterFun_parentMeta,(int)igSerialFilterFun_getMetaCall,(int)lbl_8049F040,16,0,(int)igSerialFilterFun_fieldInit,0,0);
}
void *igSerialFilterFun_getMetaCall(){return igSerialFilterFun_getMeta();}
void *igSerialFilterFun_parentMeta(){return lbl_805642DC;}
void igSerialFilterFun_fieldInit(){
 void *value0=lbl_805642D4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FB6C,1);
 fn_800659C0(value0,lbl_8055FB78,lbl_8055FB7C,lbl_8055FB80,value1);
}
void *fn_8014A834(){
 if(!lbl_805642DC) lbl_805642DC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805642DC;
}
void *igFilterFun_getMeta(){
 if(!lbl_805642DC || !(reinterpret_cast<unsigned int *>(lbl_805642DC)[0x24/4]&4)) fn_8014A8AC();
 return lbl_805642DC;
}
void fn_8014A8AC(){
 fn_80066188((int)igFilterFun_register);
}
void igFilterFun_register(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_805642DC,(int)igObject_register,(int)fn_800237D0,(int)igFilterFun_getMetaCall,(int)lbl_8049F054,8,0,0,0,0);
}
void *igFilterFun_getMetaCall(){return igFilterFun_getMeta();}
void *fn_8014A958(){
 if(!lbl_805642E0) lbl_805642E0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805642E0;
}
void *igFileInfoList_getMeta(){
 if(!lbl_805642E0 || !(reinterpret_cast<unsigned int *>(lbl_805642E0)[0x24/4]&4)) fn_8014AA40();
 return lbl_805642E0;
}
void *igFileInfoList_vtableRead(){
 UnknownGenObject8014A9D0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A8C58;
 object.unknown00=lbl_804A8BF4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014AA40(){
 fn_80066188((int)igFileInfoList_register);
}
void igFileInfoList_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642E0,(int)igObjectList_register,(int)fn_80024180,(int)igFileInfoList_getMetaCall,(int)lbl_8049F060,20,(int)igFileInfoList_vtableRead,0,0,(int)lbl_8055FB84);
}
void *igFileInfoList_getMetaCall(){return igFileInfoList_getMeta();}
void *fn_8014AAF4(){
 if(!lbl_805642E4) lbl_805642E4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805642E4;
}
void *igFileInfo_getMeta(){
 if(!lbl_805642E4 || !(reinterpret_cast<unsigned int *>(lbl_805642E4)[0x24/4]&4)) fn_8014ACF4();
 return lbl_805642E4;
}
void *igFileInfo_vtableRead(){
 UnknownGenObject8014AB6C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804A8B3C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014ACF4(){
 fn_80066188((int)igFileInfo_register);
}
void igFileInfo_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642E4,(int)igNamedObject_register,(int)fn_80023CF4,(int)igFileInfo_getMetaCall,(int)lbl_8049F084,28,(int)igFileInfo_vtableRead,(int)igFileInfo_fieldInit,0,(int)lbl_8049F070);
}
void *igFileInfo_getMetaCall(){return igFileInfo_getMeta();}
}
#pragma pop
