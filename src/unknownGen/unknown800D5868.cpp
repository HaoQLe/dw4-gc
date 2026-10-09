#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void fn_8003D160();
void fn_80046E58(void *,void *);
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
void *fn_800D031C();
void fn_800D5D1C();
void igContextExt_register();
void igImageLoader_register();
void igObject_register();
extern char lbl_8048A51C[];
extern char lbl_8048A5B4[];
extern char lbl_8048A5D4[];
extern char lbl_80491134[];
extern char lbl_8049304C[];
extern char lbl_804930AC[];
extern char lbl_8055ED20[4];
extern char lbl_8055ED24[4];
extern char lbl_8055ED28[4];
extern char lbl_8055ED2C[4];
extern char lbl_8055ED30[4];
extern char lbl_8055ED34[8];
extern void *lbl_805621F4;
extern void *lbl_80562F58;
extern void *lbl_805630B8;
extern void *lbl_805630BC;
extern void *lbl_805630C4;
void *igCapabilityManager_getMeta();
void fn_800D58E0();
void igCapabilityManager_register();
void *igCapabilityManager_getMetaCall();
void *igBlendEquationExt_getMeta();
void fn_800D5A04();
void igBlendEquationExt_register();
void *igBlendEquationExt_getMetaCall();
void igBlendEquationExt_fieldInit();
void *igTgaLoader_getMeta();
void *igTgaLoader_vtableRead();
void fn_800D5C58();
void igTgaLoader_register();
void *igTgaLoader_getMetaCall();
void *igTgaLoader_parentMeta();
}
struct UnknownGenRoot800D5BB8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D5BB8(){fn_8006665C(this);}
};
struct UnknownGenObject800D5BB8 : UnknownGenRoot800D5BB8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[36];
 inline ~UnknownGenObject800D5BB8(){unknown00=lbl_80491134;}
};
extern "C" {
void *fn_800D5868(){
 if(!lbl_805630B8) lbl_805630B8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805630B8;
}
void *igCapabilityManager_getMeta(){
 if(!lbl_805630B8 || !(reinterpret_cast<unsigned int *>(lbl_805630B8)[0x24/4]&4)) fn_800D58E0();
 return lbl_805630B8;
}
void fn_800D58E0(){
 fn_80066188((int)igCapabilityManager_register);
}
void igCapabilityManager_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_805630B8,(int)igObject_register,(int)fn_800237D0,(int)igCapabilityManager_getMetaCall,(int)lbl_8048A51C,8,0,0,0,0);
}
void *igCapabilityManager_getMetaCall(){return igCapabilityManager_getMeta();}
void *fn_800D598C(){
 if(!lbl_805630BC) lbl_805630BC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805630BC;
}
void *igBlendEquationExt_getMeta(){
 if(!lbl_805630BC || !(reinterpret_cast<unsigned int *>(lbl_805630BC)[0x24/4]&4)) fn_800D5A04();
 return lbl_805630BC;
}
void fn_800D5A04(){
 fn_80066188((int)igBlendEquationExt_register);
}
void igBlendEquationExt_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_805630BC,(int)igContextExt_register,(int)fn_800D031C,(int)igBlendEquationExt_getMetaCall,(int)lbl_8048A5B4,24,0,(int)igBlendEquationExt_fieldInit,0,0);
}
void *igBlendEquationExt_getMetaCall(){return igBlendEquationExt_getMeta();}
void igBlendEquationExt_fieldInit(){
 void *value0=lbl_805630BC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055ED20,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055ED30);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_8003D160;
 fn_800659C0(value0,lbl_8055ED24,lbl_8055ED28,lbl_8055ED2C,value1);
}
void *fn_800D5B44(void *object){
 fn_800D5C58();
 return fn_8006546C(lbl_805630C4,object);
}
void *igTgaLoader_getMeta(){
 if(!lbl_805630C4 || !(reinterpret_cast<unsigned int *>(lbl_805630C4)[0x24/4]&4)) fn_800D5C58();
 return lbl_805630C4;
}
void *igTgaLoader_vtableRead(){
 UnknownGenObject800D5BB8 object;
 object.unknown00=lbl_804930AC;
 object.unknown00=lbl_8049304C;
 object.unknown00=lbl_80491134;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D5C58(){
 fn_80066188((int)igTgaLoader_register);
}
void igTgaLoader_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_805630C4,(int)igImageLoader_register,(int)igTgaLoader_parentMeta,(int)igTgaLoader_getMetaCall,(int)lbl_8048A5D4,48,(int)igTgaLoader_vtableRead,(int)fn_800D5D1C,0,(int)lbl_8055ED34);
}
void *igTgaLoader_getMetaCall(){return igTgaLoader_getMeta();}
void *igTgaLoader_parentMeta(){return lbl_80562F58;}
}
#pragma pop
