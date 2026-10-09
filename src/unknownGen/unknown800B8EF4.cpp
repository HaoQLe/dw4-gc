#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003D160();
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
void igColorMaskAttr_fieldInit();
void igVisualAttribute_register();
extern char lbl_80479B38[];
extern char lbl_80479B50[];
extern char lbl_8047CF20[];
extern char lbl_8047CFA0[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E5BC[4];
extern char lbl_8055E5C8[4];
extern char lbl_8055E5CC[4];
extern char lbl_8055E5D0[4];
extern char lbl_8055E5D4[4];
extern void *lbl_80562974;
extern void *lbl_8056297C;
void *igColorScalerStateAttr_getMeta();
void *igColorScalerStateAttr_vtableRead();
void fn_800B8F88();
void igColorScalerStateAttr_register();
void *igColorScalerStateAttr_getMetaCall();
void igColorScalerStateAttr_fieldInit();
void *igColorMaskAttr_getMeta();
void *igColorMaskAttr_vtableRead();
void fn_800B9198();
void igColorMaskAttr_register();
void *igColorMaskAttr_getMetaCall();
}
struct UnknownGenObject800B8F30_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9140_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igColorScalerStateAttr_getMeta(){
 if(!lbl_80562974 || !(reinterpret_cast<unsigned int *>(lbl_80562974)[0x24/4]&4)) fn_800B8F88();
 return lbl_80562974;
}
void *igColorScalerStateAttr_vtableRead(){
 UnknownGenObject800B8F30_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CF20;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B8F88(){
 fn_80066188((int)igColorScalerStateAttr_register);
}
void igColorScalerStateAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562974,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igColorScalerStateAttr_getMetaCall,(int)lbl_80479B38,16,(int)igColorScalerStateAttr_vtableRead,(int)igColorScalerStateAttr_fieldInit,0,0);
}
void *igColorScalerStateAttr_getMetaCall(){return igColorScalerStateAttr_getMeta();}
void igColorScalerStateAttr_fieldInit(){
 void *value0=lbl_80562974;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E5BC,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E5D4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_8003D160;
 fn_800659C0(value0,lbl_8055E5C8,lbl_8055E5CC,lbl_8055E5D0,value1);
}
void *fn_800B90CC(void *object){
 fn_800B9198();
 return fn_8006546C(lbl_8056297C,object);
}
void *igColorMaskAttr_getMeta(){
 if(!lbl_8056297C || !(reinterpret_cast<unsigned int *>(lbl_8056297C)[0x24/4]&4)) fn_800B9198();
 return lbl_8056297C;
}
void *igColorMaskAttr_vtableRead(){
 UnknownGenObject800B9140_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CFA0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B9198(){
 fn_80066188((int)igColorMaskAttr_register);
}
void igColorMaskAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056297C,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igColorMaskAttr_getMetaCall,(int)lbl_80479B50,20,(int)igColorMaskAttr_vtableRead,(int)igColorMaskAttr_fieldInit,0,0);
}
void *igColorMaskAttr_getMetaCall(){return igColorMaskAttr_getMeta();}
}
#pragma pop
