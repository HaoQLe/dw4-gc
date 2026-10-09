#include <unknownGen.h>
#include <meta/igAlphaFunctionAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80046E58(void *,void *);
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
void *fn_800C5A04(int);
void *fn_800C5AD4(int);
void *fn_800C5BA4(int);
void *fn_800C5CA8(int);
void fn_800D60D8();
void fn_800D6128();
void *igGamecubeVisualContext_virtual36C(void *,void *);
void *igGamecubeVisualContext_virtual374(void *,float);
void igVisualAttribute_register();
extern char lbl_8047A1CC[];
extern char lbl_8047A204[];
extern char lbl_8047A22C[];
extern char lbl_8047A260[];
extern char lbl_8047A41C[];
extern char lbl_8047A49C[];
extern char lbl_8047A51C[];
extern char lbl_8047A59C[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E74C[8];
extern char lbl_8055E754[8];
extern char lbl_8055E75C[8];
extern char lbl_8055E764[8];
extern char lbl_8055E76C[4];
extern char lbl_8055E770[8];
extern char lbl_8055E778[8];
extern char lbl_8055E780[8];
extern char lbl_8055E788[8];
extern char lbl_8055E790[4];
extern char lbl_8055E794[8];
extern char lbl_8055E79C[8];
extern char lbl_8055E7A4[8];
extern char lbl_8055E7AC[8];
extern char lbl_8055E7B4[8];
extern char lbl_8055E7BC[8];
extern char lbl_8055E7C4[8];
extern char lbl_8055E7CC[8];
extern void *lbl_80562AAC;
extern void *lbl_80562AB8;
extern void *lbl_80562AC4;
extern void *lbl_80562AD0;
void *igTextureStageConstantColorSelectAttr_getMeta();
void *igTextureStageConstantColorSelectAttr_vtableRead();
void fn_800BC2E0();
void igTextureStageConstantColorSelectAttr_register();
void *igTextureStageConstantColorSelectAttr_getMetaCall();
void igTextureStageConstantColorSelectAttr_fieldInit();
void *igTextureStageConstantAlphaSelectAttr_getMeta();
void *igTextureStageConstantAlphaSelectAttr_vtableRead();
void fn_800BC4D0();
void igTextureStageConstantAlphaSelectAttr_register();
void *igTextureStageConstantAlphaSelectAttr_getMetaCall();
void igTextureStageConstantAlphaSelectAttr_fieldInit();
void *igTextureEnvironmentColorAttr_getMeta();
void *igTextureEnvironmentColorAttr_vtableRead();
void fn_800BC6F8();
void igTextureEnvironmentColorAttr_register();
void *igTextureEnvironmentColorAttr_getMetaCall();
void igTextureEnvironmentColorAttr_fieldInit();
void *igTextureConstantAttr_getMeta();
void *igTextureConstantAttr_vtableRead();
void fn_800BC8C4();
void igTextureConstantAttr_register();
void *igTextureConstantAttr_getMetaCall();
void igTextureConstantAttr_fieldInit();
}
struct UnknownGenObject800BC288_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BC478_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BC6A0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BC86C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igTextureStageConstantColorSelectAttr_getMeta(){
 if(!lbl_80562AAC || !(reinterpret_cast<unsigned int *>(lbl_80562AAC)[0x24/4]&4)) fn_800BC2E0();
 return lbl_80562AAC;
}
void *igTextureStageConstantColorSelectAttr_vtableRead(){
 UnknownGenObject800BC288_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A41C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BC2E0(){
 fn_80066188((int)igTextureStageConstantColorSelectAttr_register);
}
void igTextureStageConstantColorSelectAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562AAC,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureStageConstantColorSelectAttr_getMetaCall,(int)lbl_8047A1CC,20,(int)igTextureStageConstantColorSelectAttr_vtableRead,(int)igTextureStageConstantColorSelectAttr_fieldInit,0,0);
}
void *igTextureStageConstantColorSelectAttr_getMetaCall(){return igTextureStageConstantColorSelectAttr_getMeta();}
void igTextureStageConstantColorSelectAttr_fieldInit(){
 void *value0=lbl_80562AAC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E74C,2);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E76C);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800D60D8;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+48)=(void *)fn_800C5CA8;
 fn_800659C0(value0,lbl_8055E754,lbl_8055E75C,lbl_8055E764,value1);
}
void *igTextureStageConstantAlphaSelectAttr_getMeta(){
 if(!lbl_80562AB8 || !(reinterpret_cast<unsigned int *>(lbl_80562AB8)[0x24/4]&4)) fn_800BC4D0();
 return lbl_80562AB8;
}
void *igTextureStageConstantAlphaSelectAttr_vtableRead(){
 UnknownGenObject800BC478_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A49C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BC4D0(){
 fn_80066188((int)igTextureStageConstantAlphaSelectAttr_register);
}
void igTextureStageConstantAlphaSelectAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562AB8,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureStageConstantAlphaSelectAttr_getMetaCall,(int)lbl_8047A204,20,(int)igTextureStageConstantAlphaSelectAttr_vtableRead,(int)igTextureStageConstantAlphaSelectAttr_fieldInit,0,0);
}
void *igTextureStageConstantAlphaSelectAttr_getMetaCall(){return igTextureStageConstantAlphaSelectAttr_getMeta();}
void igTextureStageConstantAlphaSelectAttr_fieldInit(){
 void *value0=lbl_80562AB8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E770,2);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E790);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800D6128;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+48)=(void *)fn_800C5BA4;
 fn_800659C0(value0,lbl_8055E778,lbl_8055E780,lbl_8055E788,value1);
}
void *fn_800BC62C(void *object){
 fn_800BC6F8();
 return fn_8006546C(lbl_80562AC4,object);
}
void *igTextureEnvironmentColorAttr_getMeta(){
 if(!lbl_80562AC4 || !(reinterpret_cast<unsigned int *>(lbl_80562AC4)[0x24/4]&4)) fn_800BC6F8();
 return lbl_80562AC4;
}
void *igTextureEnvironmentColorAttr_vtableRead(){
 UnknownGenObject800BC6A0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A51C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BC6F8(){
 fn_80066188((int)igTextureEnvironmentColorAttr_register);
}
void igTextureEnvironmentColorAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562AC4,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureEnvironmentColorAttr_getMetaCall,(int)lbl_8047A22C,20,(int)igTextureEnvironmentColorAttr_vtableRead,(int)igTextureEnvironmentColorAttr_fieldInit,0,0);
}
void *igTextureEnvironmentColorAttr_getMetaCall(){return igTextureEnvironmentColorAttr_getMeta();}
void igTextureEnvironmentColorAttr_fieldInit(){
 void *value0=lbl_80562AC4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E794,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800C5AD4;
 fn_800659C0(value0,lbl_8055E79C,lbl_8055E7A4,lbl_8055E7AC,value1);
}
void *igTextureConstantAttr_getMeta(){
 if(!lbl_80562AD0 || !(reinterpret_cast<unsigned int *>(lbl_80562AD0)[0x24/4]&4)) fn_800BC8C4();
 return lbl_80562AD0;
}
void *igTextureConstantAttr_vtableRead(){
 UnknownGenObject800BC86C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A59C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BC8C4(){
 fn_80066188((int)igTextureConstantAttr_register);
}
void igTextureConstantAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562AD0,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureConstantAttr_getMetaCall,(int)lbl_8047A260,20,(int)igTextureConstantAttr_vtableRead,(int)igTextureConstantAttr_fieldInit,0,0);
}
void *igTextureConstantAttr_getMetaCall(){return igTextureConstantAttr_getMeta();}
void igTextureConstantAttr_fieldInit(){
 void *value0=lbl_80562AD0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E7B4,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800C5A04;
 fn_800659C0(value0,lbl_8055E7BC,lbl_8055E7C4,lbl_8055E7CC,value1);
}
void igAlphaFunctionAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual36C((void *)p1,(void *)(int)reinterpret_cast<Meta::igAlphaFunctionAttr *>((void *)p0)->_func);
 float value0=reinterpret_cast<Meta::igAlphaFunctionAttr *>((void *)p0)->_refValue;
 igGamecubeVisualContext_virtual374((void *)p1,value0);
}
}
#pragma pop
