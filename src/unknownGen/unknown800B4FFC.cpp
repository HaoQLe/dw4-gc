#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_80029E64(void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igLightStateAttr_fieldInit();
void igObjectList_register();
void igVisualAttribute_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8047925C[];
extern char lbl_8047926C[];
extern char lbl_80479280[];
extern char lbl_80479298[];
extern char lbl_804792A4[];
extern char lbl_8047C138[];
extern char lbl_8047C1B8[];
extern char lbl_8047C23C[];
extern char lbl_8047D578[];
extern char lbl_8047DCE0[];
extern char lbl_8047DD44[];
extern char lbl_8047E50C[];
extern char lbl_8055E3D4[4];
extern char lbl_8055E3E0[4];
extern char lbl_8055E3E4[4];
extern char lbl_8055E3E8[4];
extern char lbl_8055E3EC[4];
extern char lbl_8055E3F0[4];
extern char lbl_8055E3F4[4];
extern char lbl_8055E3F8[4];
extern char lbl_8055E3FC[8];
extern void *lbl_805621F4;
extern void *lbl_805627CC;
extern void *lbl_805627D4;
extern void *lbl_805627DC;
extern void *lbl_805627E0;
extern char lbl_80566810[4];
void *igLineWidthAttr_getMeta();
void *igLineWidthAttr_vtableRead();
void fn_800B5090();
void igLineWidthAttr_register();
void *igLineWidthAttr_getMetaCall();
void igLineWidthAttr_fieldInit();
void *igLightingStateAttr_getMeta();
void *igLightingStateAttr_vtableRead();
void fn_800B52CC();
void igLightingStateAttr_register();
void *igLightingStateAttr_getMetaCall();
void igLightingStateAttr_fieldInit();
void *igLightStateAttrList_getMeta();
void *igLightStateAttrList_vtableRead();
void fn_800B550C();
void igLightStateAttrList_register();
void *igLightStateAttrList_getMetaCall();
void *igLightStateAttr_getMeta();
void *igLightStateAttr_vtableRead();
void fn_800B5750();
void igLightStateAttr_register();
void *igLightStateAttr_getMetaCall();
}
struct UnknownGenObject800B5038_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B5274_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B549C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B5670 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B5670(){fn_8006665C(this);}
};
struct UnknownGenObject800B5670 : UnknownGenRoot800B5670 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B5670(){unknown00=lbl_8047C23C;}
};
extern "C" {
void *igLineWidthAttr_getMeta(){
 if(!lbl_805627CC || !(reinterpret_cast<unsigned int *>(lbl_805627CC)[0x24/4]&4)) fn_800B5090();
 return lbl_805627CC;
}
void *igLineWidthAttr_vtableRead(){
 UnknownGenObject800B5038_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C138;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B5090(){
 fn_80066188((int)igLineWidthAttr_register);
}
void igLineWidthAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805627CC,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igLineWidthAttr_getMetaCall,(int)lbl_8047925C,16,(int)igLineWidthAttr_vtableRead,(int)igLineWidthAttr_fieldInit,0,0);
}
void *igLineWidthAttr_getMetaCall(){return igLineWidthAttr_getMeta();}
void igLineWidthAttr_fieldInit(){
 void *value0=lbl_805627CC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E3D4,1);
 void *value2=fn_800658E4(value0,value1);
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_80566810+0)));
 fn_800659C0(value0,lbl_8055E3E0,lbl_8055E3E4,lbl_8055E3E8,value1);
}
void *fn_800B51C4(void *object){
 fn_800B52CC();
 return fn_8006546C(lbl_805627D4,object);
}
void *fn_800B51FC(){
 if(!lbl_805627D4) lbl_805627D4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805627D4;
}
void *igLightingStateAttr_getMeta(){
 if(!lbl_805627D4 || !(reinterpret_cast<unsigned int *>(lbl_805627D4)[0x24/4]&4)) fn_800B52CC();
 return lbl_805627D4;
}
void *igLightingStateAttr_vtableRead(){
 UnknownGenObject800B5274_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C1B8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B52CC(){
 fn_80066188((int)igLightingStateAttr_register);
}
void igLightingStateAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805627D4,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igLightingStateAttr_getMetaCall,(int)lbl_8047926C,16,(int)igLightingStateAttr_vtableRead,(int)igLightingStateAttr_fieldInit,0,0);
}
void *igLightingStateAttr_getMetaCall(){return igLightingStateAttr_getMeta();}
void igLightingStateAttr_fieldInit(){
 void *value0=lbl_805627D4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E3EC,1);
 fn_800659C0(value0,lbl_8055E3F0,lbl_8055E3F4,lbl_8055E3F8,value1);
}
void *fn_800B53EC(void *object){
 fn_800B550C();
 return fn_8006546C(lbl_805627DC,object);
}
void *fn_800B5424(){
 if(!lbl_805627DC) lbl_805627DC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805627DC;
}
void *igLightStateAttrList_getMeta(){
 if(!lbl_805627DC || !(reinterpret_cast<unsigned int *>(lbl_805627DC)[0x24/4]&4)) fn_800B550C();
 return lbl_805627DC;
}
void *igLightStateAttrList_vtableRead(){
 UnknownGenObject800B549C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047DD44;
 object.unknown00=lbl_8047DCE0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B550C(){
 fn_80066188((int)igLightStateAttrList_register);
}
void igLightStateAttrList_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805627DC,(int)igObjectList_register,(int)fn_80024180,(int)igLightStateAttrList_getMetaCall,(int)lbl_80479280,20,(int)igLightStateAttrList_vtableRead,0,0,(int)lbl_8055E3FC);
}
void *igLightStateAttrList_getMetaCall(){return igLightStateAttrList_getMeta();}
void *fn_800B55C0(void *object){
 fn_800B5750();
 return fn_8006546C(lbl_805627E0,object);
}
void *fn_800B55F8(){
 if(!lbl_805627E0) lbl_805627E0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805627E0;
}
void *igLightStateAttr_getMeta(){
 if(!lbl_805627E0 || !(reinterpret_cast<unsigned int *>(lbl_805627E0)[0x24/4]&4)) fn_800B5750();
 return lbl_805627E0;
}
void *igLightStateAttr_vtableRead(){
 UnknownGenObject800B5670 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C23C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B5750(){
 fn_80066188((int)igLightStateAttr_register);
}
void igLightStateAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805627E0,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igLightStateAttr_getMetaCall,(int)lbl_804792A4,24,(int)igLightStateAttr_vtableRead,(int)igLightStateAttr_fieldInit,0,(int)lbl_80479298);
}
void *igLightStateAttr_getMetaCall(){return igLightStateAttr_getMeta();}
}
#pragma pop
