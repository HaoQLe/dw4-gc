#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_800ABC8C();
void *fn_800AC294();
void igBlendMatrixPaletteAttr_fieldInit();
void igObjectList_register();
void igVisualAttribute_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80479C74[];
extern char lbl_80479C94[];
extern char lbl_80479CB0[];
extern char lbl_80479CC4[];
extern char lbl_80479CE4[];
extern char lbl_8047D1AC[];
extern char lbl_8047D22C[];
extern char lbl_8047D2AC[];
extern char lbl_8047D330[];
extern char lbl_8047D578[];
extern char lbl_8047DB50[];
extern char lbl_8047DBB4[];
extern char lbl_8047E50C[];
extern char lbl_8055E638[4];
extern char lbl_8055E63C[4];
extern char lbl_8055E640[4];
extern char lbl_8055E644[4];
extern char lbl_8055E648[4];
extern char lbl_8055E64C[4];
extern char lbl_8055E650[4];
extern char lbl_8055E654[4];
extern char lbl_8055E658[4];
extern char lbl_8055E65C[4];
extern char lbl_8055E660[4];
extern char lbl_8055E664[4];
extern char lbl_8055E668[8];
extern void *lbl_805621F4;
extern void *lbl_805629C8;
extern void *lbl_805629D0;
extern void *lbl_805629D8;
extern void *lbl_805629E0;
extern void *lbl_805629E4;
void *igBlendingCorrectionStateAttr_getMeta();
void *igBlendingCorrectionStateAttr_vtableRead();
void fn_800B9AC4();
void igBlendingCorrectionStateAttr_register();
void *igBlendingCorrectionStateAttr_getMetaCall();
void igBlendingCorrectionStateAttr_fieldInit();
void *igBlendingControlStateAttr_getMeta();
void *igBlendingControlStateAttr_vtableRead();
void fn_800B9C78();
void igBlendingControlStateAttr_register();
void *igBlendingControlStateAttr_getMetaCall();
void igBlendingControlStateAttr_fieldInit();
void *igBlendStateAttr_getMeta();
void *igBlendStateAttr_vtableRead();
void fn_800B9EA0();
void igBlendStateAttr_register();
void *igBlendStateAttr_getMetaCall();
void igBlendStateAttr_fieldInit();
void *igBlendMatrixPaletteAttrList_getMeta();
void *igBlendMatrixPaletteAttrList_vtableRead();
void fn_800BA0A8();
void igBlendMatrixPaletteAttrList_register();
void *igBlendMatrixPaletteAttrList_getMetaCall();
void *igBlendMatrixPaletteAttr_getMeta();
void *igBlendMatrixPaletteAttr_vtableRead();
void fn_800BA264();
void igBlendMatrixPaletteAttr_register();
void *igBlendMatrixPaletteAttr_getMetaCall();
}
struct UnknownGenObject800B9A6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9C20_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9E48_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BA038_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BA20C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igBlendingCorrectionStateAttr_getMeta(){
 if(!lbl_805629C8 || !(reinterpret_cast<unsigned int *>(lbl_805629C8)[0x24/4]&4)) fn_800B9AC4();
 return lbl_805629C8;
}
void *igBlendingCorrectionStateAttr_vtableRead(){
 UnknownGenObject800B9A6C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D1AC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B9AC4(){
 fn_80066188((int)igBlendingCorrectionStateAttr_register);
}
void igBlendingCorrectionStateAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629C8,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igBlendingCorrectionStateAttr_getMetaCall,(int)lbl_80479C74,16,(int)igBlendingCorrectionStateAttr_vtableRead,(int)igBlendingCorrectionStateAttr_fieldInit,0,0);
}
void *igBlendingCorrectionStateAttr_getMetaCall(){return igBlendingCorrectionStateAttr_getMeta();}
void igBlendingCorrectionStateAttr_fieldInit(){
 void *value0=lbl_805629C8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E638,1);
 fn_800659C0(value0,lbl_8055E63C,lbl_8055E640,lbl_8055E644,value1);
}
void *igBlendingControlStateAttr_getMeta(){
 if(!lbl_805629D0 || !(reinterpret_cast<unsigned int *>(lbl_805629D0)[0x24/4]&4)) fn_800B9C78();
 return lbl_805629D0;
}
void *igBlendingControlStateAttr_vtableRead(){
 UnknownGenObject800B9C20_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D22C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B9C78(){
 fn_80066188((int)igBlendingControlStateAttr_register);
}
void igBlendingControlStateAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629D0,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igBlendingControlStateAttr_getMetaCall,(int)lbl_80479C94,16,(int)igBlendingControlStateAttr_vtableRead,(int)igBlendingControlStateAttr_fieldInit,0,0);
}
void *igBlendingControlStateAttr_getMetaCall(){return igBlendingControlStateAttr_getMeta();}
void igBlendingControlStateAttr_fieldInit(){
 void *value0=lbl_805629D0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E648,1);
 fn_800659C0(value0,lbl_8055E64C,lbl_8055E650,lbl_8055E654,value1);
}
void *fn_800B9D98(void *object){
 fn_800B9EA0();
 return fn_8006546C(lbl_805629D8,object);
}
void *fn_800B9DD0(){
 if(!lbl_805629D8) lbl_805629D8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805629D8;
}
void *igBlendStateAttr_getMeta(){
 if(!lbl_805629D8 || !(reinterpret_cast<unsigned int *>(lbl_805629D8)[0x24/4]&4)) fn_800B9EA0();
 return lbl_805629D8;
}
void *igBlendStateAttr_vtableRead(){
 UnknownGenObject800B9E48_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D2AC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B9EA0(){
 fn_80066188((int)igBlendStateAttr_register);
}
void igBlendStateAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629D8,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igBlendStateAttr_getMetaCall,(int)lbl_80479CB0,16,(int)igBlendStateAttr_vtableRead,(int)igBlendStateAttr_fieldInit,0,0);
}
void *igBlendStateAttr_getMetaCall(){return igBlendStateAttr_getMeta();}
void igBlendStateAttr_fieldInit(){
 void *value0=lbl_805629D8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E658,1);
 fn_800659C0(value0,lbl_8055E65C,lbl_8055E660,lbl_8055E664,value1);
}
void *fn_800B9FC0(){
 if(!lbl_805629E0) lbl_805629E0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805629E0;
}
void *igBlendMatrixPaletteAttrList_getMeta(){
 if(!lbl_805629E0 || !(reinterpret_cast<unsigned int *>(lbl_805629E0)[0x24/4]&4)) fn_800BA0A8();
 return lbl_805629E0;
}
void *igBlendMatrixPaletteAttrList_vtableRead(){
 UnknownGenObject800BA038_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047DBB4;
 object.unknown00=lbl_8047DB50;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BA0A8(){
 fn_80066188((int)igBlendMatrixPaletteAttrList_register);
}
void igBlendMatrixPaletteAttrList_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629E0,(int)igObjectList_register,(int)fn_80024180,(int)igBlendMatrixPaletteAttrList_getMetaCall,(int)lbl_80479CC4,20,(int)igBlendMatrixPaletteAttrList_vtableRead,0,0,(int)lbl_8055E668);
}
void *igBlendMatrixPaletteAttrList_getMetaCall(){return igBlendMatrixPaletteAttrList_getMeta();}
void *fn_800BA15C(void *object){
 fn_800BA264();
 return fn_8006546C(lbl_805629E4,object);
}
void *fn_800BA194(){
 if(!lbl_805629E4) lbl_805629E4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805629E4;
}
void *igBlendMatrixPaletteAttr_getMeta(){
 if(!lbl_805629E4 || !(reinterpret_cast<unsigned int *>(lbl_805629E4)[0x24/4]&4)) fn_800BA264();
 return lbl_805629E4;
}
void *igBlendMatrixPaletteAttr_vtableRead(){
 UnknownGenObject800BA20C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D330;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BA264(){
 fn_80066188((int)igBlendMatrixPaletteAttr_register);
}
void igBlendMatrixPaletteAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629E4,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igBlendMatrixPaletteAttr_getMetaCall,(int)lbl_80479CE4,28,(int)igBlendMatrixPaletteAttr_vtableRead,(int)igBlendMatrixPaletteAttr_fieldInit,0,0);
}
void *igBlendMatrixPaletteAttr_getMetaCall(){return igBlendMatrixPaletteAttr_getMeta();}
}
#pragma pop
