#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
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
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B1738();
void *fn_800CDB9C();
void *fn_800CDDA8();
void igScissorAttr_fieldInit();
void igVisualAttribute_register();
extern char lbl_804788D4[];
extern char lbl_804788E8[];
extern char lbl_80478910[];
extern char lbl_80478924[];
extern char lbl_8047B3C4[];
extern char lbl_8047B448[];
extern char lbl_8047B4C8[];
extern char lbl_8047B548[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E170[4];
extern char lbl_8055E174[4];
extern char lbl_8055E178[4];
extern char lbl_8055E17C[4];
extern char lbl_8055E180[4];
extern char lbl_8055E184[8];
extern char lbl_8055E18C[4];
extern char lbl_8055E190[4];
extern char lbl_8055E194[4];
extern char lbl_8055E198[4];
extern char lbl_8055E19C[4];
extern char lbl_8055E1A0[4];
extern char lbl_8055E1A4[4];
extern char lbl_8055E1A8[4];
extern char lbl_8055E1AC[4];
extern void *lbl_805621F4;
extern void *lbl_8056260C;
extern void *lbl_80562614;
extern void *lbl_8056261C;
extern void *lbl_80562624;
void *igShadeModelAttr_getMeta();
void *igShadeModelAttr_vtableRead();
void fn_800B0A74();
void igShadeModelAttr_register();
void *igShadeModelAttr_getMetaCall();
void igShadeModelAttr_fieldInit();
void *igSetRenderDestinationAttr_getMeta();
void *igSetRenderDestinationAttr_vtableRead();
void fn_800B0D08();
void igSetRenderDestinationAttr_register();
void *igSetRenderDestinationAttr_getMetaCall();
void igSetRenderDestinationAttr_fieldInit();
void *igScissorTypeAttr_getMeta();
void *igScissorTypeAttr_vtableRead();
void fn_800B0ED8();
void igScissorTypeAttr_register();
void *igScissorTypeAttr_getMetaCall();
void igScissorTypeAttr_fieldInit();
void *igScissorAttr_getMeta();
void *igScissorAttr_vtableRead();
void fn_800B10B0();
void igScissorAttr_register();
void *igScissorAttr_getMetaCall();
}
struct UnknownGenObject800B0A1C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B0C68 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B0C68(){fn_8006665C(this);}
};
struct UnknownGenObject800B0C68 : UnknownGenRoot800B0C68 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B0C68(){unknown00=lbl_8047B448;}
};
struct UnknownGenObject800B0E80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B1058_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800B09A4(){
 if(!lbl_8056260C) lbl_8056260C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056260C;
}
void *igShadeModelAttr_getMeta(){
 if(!lbl_8056260C || !(reinterpret_cast<unsigned int *>(lbl_8056260C)[0x24/4]&4)) fn_800B0A74();
 return lbl_8056260C;
}
void *igShadeModelAttr_vtableRead(){
 UnknownGenObject800B0A1C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B3C4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B0A74(){
 fn_80066188((int)igShadeModelAttr_register);
}
void igShadeModelAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056260C,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igShadeModelAttr_getMetaCall,(int)lbl_804788D4,16,(int)igShadeModelAttr_vtableRead,(int)igShadeModelAttr_fieldInit,0,0);
}
void *igShadeModelAttr_getMetaCall(){return igShadeModelAttr_getMeta();}
void igShadeModelAttr_fieldInit(){
 void *value0=lbl_8056260C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E170,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E180);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDDA8;
 fn_800659C0(value0,lbl_8055E174,lbl_8055E178,lbl_8055E17C,value1);
}
void *fn_800B0BB8(void *object){
 fn_800B0D08();
 return fn_8006546C(lbl_80562614,object);
}
void *fn_800B0BF0(){
 if(!lbl_80562614) lbl_80562614=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562614;
}
void *igSetRenderDestinationAttr_getMeta(){
 if(!lbl_80562614 || !(reinterpret_cast<unsigned int *>(lbl_80562614)[0x24/4]&4)) fn_800B0D08();
 return lbl_80562614;
}
void *igSetRenderDestinationAttr_vtableRead(){
 UnknownGenObject800B0C68 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B448;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B0D08(){
 fn_80066188((int)igSetRenderDestinationAttr_register);
}
void igSetRenderDestinationAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562614,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igSetRenderDestinationAttr_getMetaCall,(int)lbl_804788E8,16,(int)igSetRenderDestinationAttr_vtableRead,(int)igSetRenderDestinationAttr_fieldInit,0,(int)lbl_8055E184);
}
void *igSetRenderDestinationAttr_getMetaCall(){return igSetRenderDestinationAttr_getMeta();}
void igSetRenderDestinationAttr_fieldInit(){
 void *value0=lbl_80562614;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E18C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800B1738();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055E190,lbl_8055E194,lbl_8055E198,value1);
}
void *igScissorTypeAttr_getMeta(){
 if(!lbl_8056261C || !(reinterpret_cast<unsigned int *>(lbl_8056261C)[0x24/4]&4)) fn_800B0ED8();
 return lbl_8056261C;
}
void *igScissorTypeAttr_vtableRead(){
 UnknownGenObject800B0E80_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B4C8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B0ED8(){
 fn_80066188((int)igScissorTypeAttr_register);
}
void igScissorTypeAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056261C,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igScissorTypeAttr_getMetaCall,(int)lbl_80478910,16,(int)igScissorTypeAttr_vtableRead,(int)igScissorTypeAttr_fieldInit,0,0);
}
void *igScissorTypeAttr_getMetaCall(){return igScissorTypeAttr_getMeta();}
void igScissorTypeAttr_fieldInit(){
 void *value0=lbl_8056261C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E19C,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E1AC);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDB9C;
 fn_800659C0(value0,lbl_8055E1A0,lbl_8055E1A4,lbl_8055E1A8,value1);
}
void *igScissorAttr_getMeta(){
 if(!lbl_80562624 || !(reinterpret_cast<unsigned int *>(lbl_80562624)[0x24/4]&4)) fn_800B10B0();
 return lbl_80562624;
}
void *igScissorAttr_vtableRead(){
 UnknownGenObject800B1058_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B548;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B10B0(){
 fn_80066188((int)igScissorAttr_register);
}
void igScissorAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562624,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igScissorAttr_getMetaCall,(int)lbl_80478924,32,(int)igScissorAttr_vtableRead,(int)igScissorAttr_fieldInit,0,0);
}
void *igScissorAttr_getMetaCall(){return igScissorAttr_getMeta();}
}
#pragma pop
