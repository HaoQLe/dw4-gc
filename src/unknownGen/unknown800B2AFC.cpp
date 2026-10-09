#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_80046E58(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CDF20();
void igObjectList_register();
void igParticleAttr_fieldInit();
void igVisualAttribute_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80478DF4[];
extern char lbl_80478E1C[];
extern char lbl_80478E30[];
extern char lbl_8047BA64[];
extern char lbl_8047BAE4[];
extern char lbl_8047D578[];
extern char lbl_8047E0CC[];
extern char lbl_8047E130[];
extern char lbl_8047E50C[];
extern char lbl_8055E2C8[4];
extern char lbl_8055E2CC[4];
extern char lbl_8055E2D0[4];
extern char lbl_8055E2D4[4];
extern char lbl_8055E2D8[4];
extern char lbl_8055E2DC[8];
extern char lbl_8055E2E4[8];
extern void *lbl_805626EC;
extern void *lbl_805626F4;
extern void *lbl_805626F8;
void *igPixelPipelineModeAttr_getMeta();
void *igPixelPipelineModeAttr_vtableRead();
void fn_800B2B90();
void igPixelPipelineModeAttr_register();
void *igPixelPipelineModeAttr_getMetaCall();
void igPixelPipelineModeAttr_fieldInit();
void *igParticleAttrList_getMeta();
void *igParticleAttrList_vtableRead();
void fn_800B2D80();
void igParticleAttrList_register();
void *igParticleAttrList_getMetaCall();
void *igParticleAttr_getMeta();
void *igParticleAttr_vtableRead();
void fn_800B2F10();
void igParticleAttr_register();
void *igParticleAttr_getMetaCall();
}
struct UnknownGenObject800B2B38_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B2D10_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B2E70 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B2E70(){fn_8006665C(this);}
};
struct UnknownGenObject800B2E70 : UnknownGenRoot800B2E70 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[28];
 inline ~UnknownGenObject800B2E70(){unknown00=lbl_8047BAE4;}
};
extern "C" {
void *igPixelPipelineModeAttr_getMeta(){
 if(!lbl_805626EC || !(reinterpret_cast<unsigned int *>(lbl_805626EC)[0x24/4]&4)) fn_800B2B90();
 return lbl_805626EC;
}
void *igPixelPipelineModeAttr_vtableRead(){
 UnknownGenObject800B2B38_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047BA64;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B2B90(){
 fn_80066188((int)igPixelPipelineModeAttr_register);
}
void igPixelPipelineModeAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626EC,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igPixelPipelineModeAttr_getMetaCall,(int)lbl_80478DF4,16,(int)igPixelPipelineModeAttr_vtableRead,(int)igPixelPipelineModeAttr_fieldInit,0,0);
}
void *igPixelPipelineModeAttr_getMetaCall(){return igPixelPipelineModeAttr_getMeta();}
void igPixelPipelineModeAttr_fieldInit(){
 void *value0=lbl_805626EC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E2C8,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E2D8);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDF20;
 fn_800659C0(value0,lbl_8055E2CC,lbl_8055E2D0,lbl_8055E2D4,value1);
}
void *igParticleAttrList_getMeta(){
 if(!lbl_805626F4 || !(reinterpret_cast<unsigned int *>(lbl_805626F4)[0x24/4]&4)) fn_800B2D80();
 return lbl_805626F4;
}
void *igParticleAttrList_vtableRead(){
 UnknownGenObject800B2D10_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047E130;
 object.unknown00=lbl_8047E0CC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B2D80(){
 fn_80066188((int)igParticleAttrList_register);
}
void igParticleAttrList_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626F4,(int)igObjectList_register,(int)fn_80024180,(int)igParticleAttrList_getMetaCall,(int)lbl_80478E1C,20,(int)igParticleAttrList_vtableRead,0,0,(int)lbl_8055E2DC);
}
void *igParticleAttrList_getMetaCall(){return igParticleAttrList_getMeta();}
void *igParticleAttr_getMeta(){
 if(!lbl_805626F8 || !(reinterpret_cast<unsigned int *>(lbl_805626F8)[0x24/4]&4)) fn_800B2F10();
 return lbl_805626F8;
}
void *igParticleAttr_vtableRead(){
 UnknownGenObject800B2E70 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047BAE4;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B2F10(){
 fn_80066188((int)igParticleAttr_register);
}
void igParticleAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626F8,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igParticleAttr_getMetaCall,(int)lbl_80478E30,48,(int)igParticleAttr_vtableRead,(int)igParticleAttr_fieldInit,0,(int)lbl_8055E2E4);
}
void *igParticleAttr_getMetaCall(){return igParticleAttr_getMeta();}
}
#pragma pop
