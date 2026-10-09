#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
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
void *fn_800C4BF8(int);
void igCustomStateCollectionAttr_register();
void igTimeAttr_fieldInit();
void igVisualAttribute_register();
extern char lbl_8047813C[];
extern char lbl_80478154[];
extern char lbl_8047AA0C[];
extern char lbl_8047AAC0[];
extern char lbl_8047CD74[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055DF20[8];
extern char lbl_8055DF38[8];
extern char lbl_8055DF40[8];
extern char lbl_8055DF48[8];
extern void *lbl_805621F4;
extern void *lbl_805624AC;
extern void *lbl_805624B8;
extern void *lbl_80562934;
void *igVectorConstantAttr_getMeta();
void *igVectorConstantAttr_vtableRead();
void fn_800AD650();
void igVectorConstantAttr_register();
void *igVectorConstantAttr_getMetaCall();
void *fn_800AD708();
void igVectorConstantAttr_fieldInit();
void *igTimeAttr_getMeta();
void *igTimeAttr_vtableRead();
void fn_800AD898();
void igTimeAttr_register();
void *igTimeAttr_getMetaCall();
}
struct UnknownGenObject800AD5EC_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenObject800AD840_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AD574(){
 if(!lbl_805624AC) lbl_805624AC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805624AC;
}
void *igVectorConstantAttr_getMeta(){
 if(!lbl_805624AC || !(reinterpret_cast<unsigned int *>(lbl_805624AC)[0x24/4]&4)) fn_800AD650();
 return lbl_805624AC;
}
void *igVectorConstantAttr_vtableRead(){
 UnknownGenObject800AD5EC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CD74;
 object.unknown00=lbl_8047AA0C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800AD650(){
 fn_80066188((int)igVectorConstantAttr_register);
}
void igVectorConstantAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805624AC,(int)igCustomStateCollectionAttr_register,(int)fn_800AD708,(int)igVectorConstantAttr_getMetaCall,(int)lbl_8047813C,32,(int)igVectorConstantAttr_vtableRead,(int)igVectorConstantAttr_fieldInit,0,0);
}
void *igVectorConstantAttr_getMetaCall(){return igVectorConstantAttr_getMeta();}
void *fn_800AD708(){return lbl_80562934;}
void igVectorConstantAttr_fieldInit(){
 void *value0=lbl_805624AC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055DF20,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800C4BF8;
 fn_800659C0(value0,lbl_8055DF38,lbl_8055DF40,lbl_8055DF48,value1);
}
void *fn_800AD790(void *object){
 fn_800AD898();
 return fn_8006546C(lbl_805624B8,object);
}
void *fn_800AD7C8(){
 if(!lbl_805624B8) lbl_805624B8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805624B8;
}
void *igTimeAttr_getMeta(){
 if(!lbl_805624B8 || !(reinterpret_cast<unsigned int *>(lbl_805624B8)[0x24/4]&4)) fn_800AD898();
 return lbl_805624B8;
}
void *igTimeAttr_vtableRead(){
 UnknownGenObject800AD840_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047AAC0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800AD898(){
 fn_80066188((int)igTimeAttr_register);
}
void igTimeAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805624B8,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTimeAttr_getMetaCall,(int)lbl_80478154,24,(int)igTimeAttr_vtableRead,(int)igTimeAttr_fieldInit,0,0);
}
void *igTimeAttr_getMetaCall(){return igTimeAttr_getMeta();}
}
#pragma pop
