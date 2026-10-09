#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023FDC();
void *fn_80024180();
void *fn_80029E64(void *);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80065DBC(int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800711A8(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800BCB68();
void *fn_800BCC14(int);
void *fn_800BD398();
void fn_800BD3E4();
void fn_800CDDF0();
void igNonRefCountedObjectList_register();
void igObjectList_register();
void igObject_register();
void igTextureSwapTableAttr_fieldInit();
void igVisualAttribute_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_8047A078[];
extern char lbl_8047A090[];
extern char lbl_8047A0A0[];
extern char lbl_8047A0B8[];
extern char lbl_8047A0E8[];
extern char lbl_8047A0FC[];
extern char lbl_8047A110[];
extern char lbl_8047A314[];
extern char lbl_8047D578[];
extern char lbl_8047D5F8[];
extern char lbl_8047D67C[];
extern char lbl_8047D704[];
extern char lbl_8047D768[];
extern char lbl_8047D7CC[];
extern char lbl_8047D830[];
extern char lbl_8047D8F8[];
extern char lbl_8047D95C[];
extern char lbl_8047E50C[];
extern char lbl_8055E6D8[8];
extern char lbl_8055E6E0[8];
extern char lbl_8055E6E8[8];
extern char lbl_8055E6F0[7];
extern char lbl_8055E6F8[8];
extern char lbl_8055E700[8];
extern char lbl_8055E708[8];
extern char lbl_8055E710[8];
extern char lbl_8055E718[4];
extern char lbl_8055E71C[4];
extern char lbl_8055E720[4];
extern char lbl_8055E724[4];
extern char lbl_8055E728[8];
extern char lbl_8055E730[8];
extern char lbl_8055E738[8];
extern char lbl_8055E740[8];
extern char lbl_8055E748[4];
extern void *lbl_805621F4;
extern void *lbl_80562A58;
extern void *lbl_80562A5C;
extern void *lbl_80562A60;
extern void *lbl_80562A64;
extern void *lbl_80562A68;
extern void *lbl_80562A74;
extern void *lbl_80562A7C;
extern void *lbl_80562A88;
void *igAttrDefaultManager_getMeta();
void fn_800BB200();
void igAttrDefaultManager_register();
void *igAttrDefaultManager_getMetaCall();
void *igAttrListList_getMeta();
void *igAttrListList_vtableRead();
void fn_800BB394();
void igAttrListList_register();
void *igAttrListList_getMetaCall();
void *igNonRefCountedAttrList_getMeta();
void *igNonRefCountedAttrList_vtableRead();
void fn_800BB530();
void igNonRefCountedAttrList_register();
void *igNonRefCountedAttrList_getMetaCall();
void *igAttrList_getMeta();
void *igAttrList_vtableRead();
void fn_800BB704();
void igAttrList_register();
void *igAttrList_getMetaCall();
void *igAttr_getMeta();
void fn_800BB830();
void igAttr_register();
void *igAttr_getMetaCall();
void igAttr_fieldInit();
void fn_800BB970();
void *igAlphaStateAttr_getMeta();
void *igAlphaStateAttr_vtableRead();
void fn_800BBAA4();
void igAlphaStateAttr_register();
void *igAlphaStateAttr_getMetaCall();
void igAlphaStateAttr_fieldInit();
void *igAlphaFunctionAttr_getMeta();
void *igAlphaFunctionAttr_vtableRead();
void fn_800BBC90();
void igAlphaFunctionAttr_register();
void *igAlphaFunctionAttr_getMetaCall();
void igAlphaFunctionAttr_fieldInit();
void *igTextureSwapTableAttr_getMeta();
void *igTextureSwapTableAttr_vtableRead();
void fn_800BBEA0();
void igTextureSwapTableAttr_register();
void *igTextureSwapTableAttr_getMetaCall();
}
struct UnknownGenObject800BB324_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB4C0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB694_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBA4C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBC38_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBE48_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void fn_800BB148(){return fn_800BD3E4();}
void *fn_800BB168(){return fn_800BD398();}
void *fn_800BB188(){
 if(!lbl_80562A58) lbl_80562A58=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562A58;
}
void *igAttrDefaultManager_getMeta(){
 if(!lbl_80562A58 || !(reinterpret_cast<unsigned int *>(lbl_80562A58)[0x24/4]&4)) fn_800BB200();
 return lbl_80562A58;
}
void fn_800BB200(){
 fn_80066188((int)igAttrDefaultManager_register);
}
void igAttrDefaultManager_register(){
 fn_800ABC8C();
 fn_80066204(1,(int)&lbl_80562A58,(int)igObject_register,(int)fn_800237D0,(int)igAttrDefaultManager_getMetaCall,(int)lbl_8047A078,8,0,0,0,0);
}
void *igAttrDefaultManager_getMetaCall(){return igAttrDefaultManager_getMeta();}
void *fn_800BB2AC(){
 if(!lbl_80562A5C) lbl_80562A5C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562A5C;
}
void *igAttrListList_getMeta(){
 if(!lbl_80562A5C || !(reinterpret_cast<unsigned int *>(lbl_80562A5C)[0x24/4]&4)) fn_800BB394();
 return lbl_80562A5C;
}
void *igAttrListList_vtableRead(){
 UnknownGenObject800BB324_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047D95C;
 object.unknown00=lbl_8047D8F8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BB394(){
 fn_80066188((int)igAttrListList_register);
}
void igAttrListList_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A5C,(int)igObjectList_register,(int)fn_80024180,(int)igAttrListList_getMetaCall,(int)lbl_8047A090,20,(int)igAttrListList_vtableRead,0,0,(int)lbl_8055E6D8);
}
void *igAttrListList_getMetaCall(){return igAttrListList_getMeta();}
void *fn_800BB448(){
 if(!lbl_80562A60) lbl_80562A60=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562A60;
}
void *igNonRefCountedAttrList_getMeta(){
 if(!lbl_80562A60 || !(reinterpret_cast<unsigned int *>(lbl_80562A60)[0x24/4]&4)) fn_800BB530();
 return lbl_80562A60;
}
void *igNonRefCountedAttrList_vtableRead(){
 UnknownGenObject800BB4C0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_8047D830;
 object.unknown00=lbl_8047D7CC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BB530(){
 fn_80066188((int)igNonRefCountedAttrList_register);
}
void igNonRefCountedAttrList_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A60,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igNonRefCountedAttrList_getMetaCall,(int)lbl_8047A0A0,20,(int)igNonRefCountedAttrList_vtableRead,0,0,(int)lbl_8055E6E0);
}
void *igNonRefCountedAttrList_getMetaCall(){return igNonRefCountedAttrList_getMeta();}
void *fn_800BB5E4(void *object){
 fn_800BB704();
 return fn_8006546C(lbl_80562A64,object);
}
void *fn_800BB61C(){
 if(!lbl_80562A64) lbl_80562A64=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562A64;
}
void *igAttrList_getMeta(){
 if(!lbl_80562A64 || !(reinterpret_cast<unsigned int *>(lbl_80562A64)[0x24/4]&4)) fn_800BB704();
 return lbl_80562A64;
}
void *igAttrList_vtableRead(){
 UnknownGenObject800BB694_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047D768;
 object.unknown00=lbl_8047D704;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BB704(){
 fn_80066188((int)igAttrList_register);
}
void igAttrList_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A64,(int)igObjectList_register,(int)fn_80024180,(int)igAttrList_getMetaCall,(int)lbl_8047A0B8,20,(int)igAttrList_vtableRead,0,0,(int)lbl_8055E6E8);
}
void *igAttrList_getMetaCall(){return igAttrList_getMeta();}
void *fn_800BB7B8(){
 if(!lbl_80562A68) lbl_80562A68=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562A68;
}
void *igAttr_getMeta(){
 if(!lbl_80562A68 || !(reinterpret_cast<unsigned int *>(lbl_80562A68)[0x24/4]&4)) fn_800BB830();
 return lbl_80562A68;
}
void fn_800BB830(){
 fn_80066188((int)igAttr_register);
}
void igAttr_register(){
 fn_800ABC8C();
 fn_80066204(1,(int)&lbl_80562A68,(int)igObject_register,(int)fn_800237D0,(int)igAttr_getMetaCall,(int)lbl_8055E6F0,12,0,(int)igAttr_fieldInit,(int)fn_800BB970,0);
}
void *igAttr_getMetaCall(){return igAttr_getMeta();}
void igAttr_fieldInit(){
 void *value0=lbl_80562A68;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E6F8,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_800711A8(value2,-1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 fn_800659C0(value0,lbl_8055E700,lbl_8055E708,lbl_8055E710,value1);
}
void fn_800BB970(){
 fn_800BCB68();
 fn_80065DBC((int)fn_800BCC14);
}
void *fn_800BB99C(void *object){
 fn_800BBAA4();
 return fn_8006546C(lbl_80562A74,object);
}
void *fn_800BB9D4(){
 if(!lbl_80562A74) lbl_80562A74=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562A74;
}
void *igAlphaStateAttr_getMeta(){
 if(!lbl_80562A74 || !(reinterpret_cast<unsigned int *>(lbl_80562A74)[0x24/4]&4)) fn_800BBAA4();
 return lbl_80562A74;
}
void *igAlphaStateAttr_vtableRead(){
 UnknownGenObject800BBA4C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D5F8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BBAA4(){
 fn_80066188((int)igAlphaStateAttr_register);
}
void igAlphaStateAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A74,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igAlphaStateAttr_getMetaCall,(int)lbl_8047A0E8,16,(int)igAlphaStateAttr_vtableRead,(int)igAlphaStateAttr_fieldInit,0,0);
}
void *igAlphaStateAttr_getMetaCall(){return igAlphaStateAttr_getMeta();}
void igAlphaStateAttr_fieldInit(){
 void *value0=lbl_80562A74;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E718,1);
 fn_800659C0(value0,lbl_8055E71C,lbl_8055E720,lbl_8055E724,value1);
}
void *fn_800BBBC4(void *object){
 fn_800BBC90();
 return fn_8006546C(lbl_80562A7C,object);
}
void *igAlphaFunctionAttr_getMeta(){
 if(!lbl_80562A7C || !(reinterpret_cast<unsigned int *>(lbl_80562A7C)[0x24/4]&4)) fn_800BBC90();
 return lbl_80562A7C;
}
void *igAlphaFunctionAttr_vtableRead(){
 UnknownGenObject800BBC38_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D67C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BBC90(){
 fn_80066188((int)igAlphaFunctionAttr_register);
}
void igAlphaFunctionAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A7C,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igAlphaFunctionAttr_getMetaCall,(int)lbl_8047A0FC,20,(int)igAlphaFunctionAttr_vtableRead,(int)igAlphaFunctionAttr_fieldInit,0,0);
}
void *igAlphaFunctionAttr_getMetaCall(){return igAlphaFunctionAttr_getMeta();}
void igAlphaFunctionAttr_fieldInit(){
 void *value0=lbl_80562A7C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E728,2);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E748);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDDF0;
 fn_800659C0(value0,lbl_8055E730,lbl_8055E738,lbl_8055E740,value1);
}
void *fn_800BBDD4(void *object){
 fn_800BBEA0();
 return fn_8006546C(lbl_80562A88,object);
}
void *igTextureSwapTableAttr_getMeta(){
 if(!lbl_80562A88 || !(reinterpret_cast<unsigned int *>(lbl_80562A88)[0x24/4]&4)) fn_800BBEA0();
 return lbl_80562A88;
}
void *igTextureSwapTableAttr_vtableRead(){
 UnknownGenObject800BBE48_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A314;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BBEA0(){
 fn_80066188((int)igTextureSwapTableAttr_register);
}
void igTextureSwapTableAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A88,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureSwapTableAttr_getMetaCall,(int)lbl_8047A110,28,(int)igTextureSwapTableAttr_vtableRead,(int)igTextureSwapTableAttr_fieldInit,0,0);
}
void *igTextureSwapTableAttr_getMetaCall(){return igTextureSwapTableAttr_getMeta();}
}
#pragma pop
