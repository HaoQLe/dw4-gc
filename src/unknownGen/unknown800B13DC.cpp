#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
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
void *fn_800CE788();
void igRenderDestinationAttr_fieldInit();
void igVisualAttribute_register();
extern char lbl_80477D08[];
extern char lbl_8047899C[];
extern char lbl_80478A18[];
extern char lbl_80478AF8[];
extern char lbl_80478B04[];
extern char lbl_8047B650[];
extern char lbl_8047B6D4[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E1D0[8];
extern char lbl_8055E1D8[8];
extern char lbl_8055E1E8[8];
extern char lbl_8055E1F0[8];
extern char lbl_8055E1F8[8];
extern char lbl_8055E200[8];
extern char lbl_8055E208[8];
extern void *lbl_805621F4;
extern void *lbl_80562644;
extern void *lbl_80562650;
extern void *lbl_80562654;
extern void *lbl_80562658;
void *igRenderListAttr_getMeta();
void *igRenderListAttr_vtableRead();
void fn_800B14F4();
void igRenderListAttr_register();
void *igRenderListAttr_getMetaCall();
void igRenderListAttr_fieldInit();
void *igRenderDestinationAttr_getMeta();
void *igRenderDestinationAttr_vtableRead();
void fn_800B1890();
void igRenderDestinationAttr_register();
void *igRenderDestinationAttr_getMetaCall();
}
struct UnknownGenRoot800B1454 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B1454(){fn_8006665C(this);}
};
struct UnknownGenObject800B1454 : UnknownGenRoot800B1454 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B1454(){unknown00=lbl_8047B650;}
};
struct UnknownGenRoot800B17B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B17B0(){fn_8006665C(this);}
};
struct UnknownGenObject800B17B0 : UnknownGenRoot800B17B0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 char unknown24[28];
 UnknownGenRefMember unknown40;
 char unknown44[12];
 inline ~UnknownGenObject800B17B0(){unknown00=lbl_8047B6D4;}
};
extern "C" {
void *fn_800B13DC(){
 if(!lbl_80562644) lbl_80562644=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562644;
}
void *igRenderListAttr_getMeta(){
 if(!lbl_80562644 || !(reinterpret_cast<unsigned int *>(lbl_80562644)[0x24/4]&4)) fn_800B14F4();
 return lbl_80562644;
}
void *igRenderListAttr_vtableRead(){
 UnknownGenObject800B1454 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B650;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B14F4(){
 fn_80066188((int)igRenderListAttr_register);
}
void igRenderListAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562644,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igRenderListAttr_getMetaCall,(int)lbl_8047899C,20,(int)igRenderListAttr_vtableRead,(int)igRenderListAttr_fieldInit,0,(int)lbl_8055E1D0);
}
void *igRenderListAttr_getMetaCall(){return igRenderListAttr_getMeta();}
void igRenderListAttr_fieldInit(){
 void *value0=lbl_80562644;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E1D8,2);
 void *value2=fn_800658E4(value0,value1);
 fn_80053650(value2,-1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_800CE788();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+38)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+40)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+39)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+44)=3;
 fn_800659C0(value0,lbl_8055E1E8,lbl_8055E1F0,lbl_8055E1F8,value1);
}
void *fn_800B166C(){
 void *value0;
 if(!lbl_80562650){
  value0=fn_800635C8(lbl_80478A18,lbl_8055E200,lbl_8055E208,2);
  lbl_80562650=value0;
 }
 return lbl_80562650;
}
void *fn_800B16B4(){
 char *data=lbl_80477D08;
 if(!lbl_80562654) lbl_80562654=fn_800635C8(data+0xDD0,data+0xDB8,data+0xDC4,0x3);
 return lbl_80562654;
}
void *fn_800B1700(void *object){
 fn_800B1890();
 return fn_8006546C(lbl_80562658,object);
}
void *fn_800B1738(){
 if(!lbl_80562658) lbl_80562658=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562658;
}
void *igRenderDestinationAttr_getMeta(){
 if(!lbl_80562658 || !(reinterpret_cast<unsigned int *>(lbl_80562658)[0x24/4]&4)) fn_800B1890();
 return lbl_80562658;
}
void *igRenderDestinationAttr_vtableRead(){
 UnknownGenObject800B17B0 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B6D4;
 object.unknown20.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B1890(){
 fn_80066188((int)igRenderDestinationAttr_register);
}
void igRenderDestinationAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562658,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igRenderDestinationAttr_getMetaCall,(int)lbl_80478B04,68,(int)igRenderDestinationAttr_vtableRead,(int)igRenderDestinationAttr_fieldInit,0,(int)lbl_80478AF8);
}
void *igRenderDestinationAttr_getMetaCall(){return igRenderDestinationAttr_getMeta();}
}
#pragma pop
