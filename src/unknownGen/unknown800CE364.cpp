#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void *fn_80029E64(void *);
void *fn_80037594();
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void igCapabilityManager_register();
void igContext_register();
void igNonRefCountedObjectList_register();
void igVisualContext_fieldInit();
extern char lbl_80472FA0[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_80487F50[];
extern char lbl_80487F84[];
extern char lbl_80487FD8[];
extern char lbl_80487FF0[];
extern char lbl_80491D28[];
extern char lbl_80492AD0[];
extern char lbl_80494398[];
extern char lbl_804943FC[];
extern char lbl_8055EA40[8];
extern char lbl_8055EA48[4];
extern char lbl_8055EA4C[4];
extern char lbl_8055EA50[4];
extern char lbl_8055EA54[4];
extern char lbl_8055EA58[8];
extern void *lbl_805621F4;
extern void *lbl_80562CF4;
extern void *lbl_80562CFC;
extern void *lbl_80562D00;
extern void *lbl_805630B8;
void *igVisualContextCapabilityManager_getMeta();
void *igVisualContextCapabilityManager_vtableRead();
void fn_800CE46C();
void igVisualContextCapabilityManager_register();
void *igVisualContextCapabilityManager_getMetaCall();
void *fn_800CE528();
void igVisualContextCapabilityManager_fieldInit();
void *igVisualContextList_getMeta();
void *igVisualContextList_vtableRead();
void fn_800CE69C();
void igVisualContextList_register();
void *igVisualContextList_getMetaCall();
void *fn_800CE788();
void *igVisualContext_getMeta();
void fn_800CE800();
void igVisualContext_register();
void *igVisualContext_getMetaCall();
}
struct UnknownGenRoot800CE3D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CE3D8(){fn_8006665C(this);}
};
struct UnknownGenObject800CE3D8 : UnknownGenRoot800CE3D8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject800CE3D8(){unknown00=lbl_80491D28;}
};
struct UnknownGenObject800CE62C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800CE364(void *object){
 fn_800CE46C();
 return fn_8006546C(lbl_80562CF4,object);
}
void *igVisualContextCapabilityManager_getMeta(){
 if(!lbl_80562CF4 || !(reinterpret_cast<unsigned int *>(lbl_80562CF4)[0x24/4]&4)) fn_800CE46C();
 return lbl_80562CF4;
}
void *igVisualContextCapabilityManager_vtableRead(){
 UnknownGenObject800CE3D8 object;
 object.unknown00=lbl_80492AD0;
 object.unknown00=lbl_80491D28;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CE46C(){
 fn_80066188((int)igVisualContextCapabilityManager_register);
}
void igVisualContextCapabilityManager_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562CF4,(int)igCapabilityManager_register,(int)fn_800CE528,(int)igVisualContextCapabilityManager_getMetaCall,(int)lbl_80487F50,12,(int)igVisualContextCapabilityManager_vtableRead,(int)igVisualContextCapabilityManager_fieldInit,0,(int)lbl_8055EA40);
}
void *igVisualContextCapabilityManager_getMetaCall(){return igVisualContextCapabilityManager_getMeta();}
void *fn_800CE528(){return lbl_805630B8;}
void igVisualContextCapabilityManager_fieldInit(){
 void *value0=lbl_80562CF4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EA48,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800CE788();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 fn_800659C0(value0,lbl_8055EA4C,lbl_8055EA50,lbl_8055EA54,value1);
}
void *fn_800CE5B8(void *object){
 fn_800CE69C();
 return fn_8006546C(lbl_80562CFC,object);
}
void *igVisualContextList_getMeta(){
 if(!lbl_80562CFC || !(reinterpret_cast<unsigned int *>(lbl_80562CFC)[0x24/4]&4)) fn_800CE69C();
 return lbl_80562CFC;
}
void *igVisualContextList_vtableRead(){
 UnknownGenObject800CE62C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_804943FC;
 object.unknown00=lbl_80494398;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CE69C(){
 fn_80066188((int)igVisualContextList_register);
}
void igVisualContextList_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562CFC,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igVisualContextList_getMetaCall,(int)lbl_80487F84,20,(int)igVisualContextList_vtableRead,0,0,(int)lbl_8055EA58);
}
void *igVisualContextList_getMetaCall(){return igVisualContextList_getMeta();}
void *fn_800CE750(void *object){
 fn_800CE800();
 return fn_8006546C(lbl_80562D00,object);
}
void *fn_800CE788(){
 if(!lbl_80562D00) lbl_80562D00=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562D00;
}
void *igVisualContext_getMeta(){
 if(!lbl_80562D00 || !(reinterpret_cast<unsigned int *>(lbl_80562D00)[0x24/4]&4)) fn_800CE800();
 return lbl_80562D00;
}
void fn_800CE800(){
 fn_80066188((int)igVisualContext_register);
}
void igVisualContext_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562D00,(int)igContext_register,(int)fn_80037594,(int)igVisualContext_getMetaCall,(int)lbl_80487FF0,320,0,(int)igVisualContext_fieldInit,0,(int)lbl_80487FD8);
}
void *igVisualContext_getMetaCall(){return igVisualContext_getMeta();}
}
#pragma pop
