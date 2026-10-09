#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
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
void igStencilFunctionAttr_fieldInit();
void igVisualAttribute_register();
extern char lbl_80478754[];
extern char lbl_80478768[];
extern char lbl_8047B220[];
extern char lbl_8047B2A4[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E128[4];
extern char lbl_8055E12C[4];
extern char lbl_8055E130[4];
extern char lbl_8055E134[4];
extern void *lbl_805621F4;
extern void *lbl_805625CC;
extern void *lbl_805625D4;
void *igStencilStateAttr_getMeta();
void *igStencilStateAttr_vtableRead();
void fn_800B02FC();
void igStencilStateAttr_register();
void *igStencilStateAttr_getMetaCall();
void igStencilStateAttr_fieldInit();
void *igStencilFunctionAttr_getMeta();
void *igStencilFunctionAttr_vtableRead();
void fn_800B04E8();
void igStencilFunctionAttr_register();
void *igStencilFunctionAttr_getMetaCall();
}
struct UnknownGenObject800B02A4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B0490_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800B01F4(void *object){
 fn_800B02FC();
 return fn_8006546C(lbl_805625CC,object);
}
void *fn_800B022C(){
 if(!lbl_805625CC) lbl_805625CC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805625CC;
}
void *igStencilStateAttr_getMeta(){
 if(!lbl_805625CC || !(reinterpret_cast<unsigned int *>(lbl_805625CC)[0x24/4]&4)) fn_800B02FC();
 return lbl_805625CC;
}
void *igStencilStateAttr_vtableRead(){
 UnknownGenObject800B02A4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B220;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B02FC(){
 fn_80066188((int)igStencilStateAttr_register);
}
void igStencilStateAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805625CC,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igStencilStateAttr_getMetaCall,(int)lbl_80478754,16,(int)igStencilStateAttr_vtableRead,(int)igStencilStateAttr_fieldInit,0,0);
}
void *igStencilStateAttr_getMetaCall(){return igStencilStateAttr_getMeta();}
void igStencilStateAttr_fieldInit(){
 void *value0=lbl_805625CC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E128,1);
 fn_800659C0(value0,lbl_8055E12C,lbl_8055E130,lbl_8055E134,value1);
}
void *fn_800B041C(void *object){
 fn_800B04E8();
 return fn_8006546C(lbl_805625D4,object);
}
void *igStencilFunctionAttr_getMeta(){
 if(!lbl_805625D4 || !(reinterpret_cast<unsigned int *>(lbl_805625D4)[0x24/4]&4)) fn_800B04E8();
 return lbl_805625D4;
}
void *igStencilFunctionAttr_vtableRead(){
 UnknownGenObject800B0490_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B2A4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B04E8(){
 fn_80066188((int)igStencilFunctionAttr_register);
}
void igStencilFunctionAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805625D4,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igStencilFunctionAttr_getMetaCall,(int)lbl_80478768,40,(int)igStencilFunctionAttr_vtableRead,(int)igStencilFunctionAttr_fieldInit,0,0);
}
void *igStencilFunctionAttr_getMetaCall(){return igStencilFunctionAttr_getMeta();}
}
#pragma pop
