#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void __dl__FPv(void *);
void fn_800CE2F8();
void *fn_800D2544();
void *fn_800D26C4();
void *igGamecubeImageConvert_getMeta();
void *igGamecubeIndexArray_getMeta();
void igObjectList_register();
void igObject_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8047E1F8[];
extern char lbl_80489894[];
extern char lbl_804898A4[];
extern char lbl_804898B4[];
extern char lbl_804898FC[];
extern char lbl_80489908[];
extern char lbl_80489918[];
extern char lbl_80493CA8[];
extern char lbl_8055EB7C[8];
extern char lbl_8055EB84[8];
extern char lbl_8055EB8C[8];
extern void *lbl_805621F4;
extern void *lbl_80562F58;
extern void *lbl_80562F5C;
extern void *lbl_80562F60;
extern void *lbl_80562F6C;
extern void *lbl_80562F70;
extern void *lbl_80562F74;
extern void *lbl_80562F78;
extern void *lbl_80565A18;
void *igImageLoader_getMeta();
void fn_800D1CF8();
void igImageLoader_register();
void *igImageLoader_getMetaCall();
void *fn_800D1DA4();
void *igImageConvert_getMeta();
void fn_800D1E20();
void igImageConvert_register();
void *igImageConvert_getMetaCall();
void *fn_800D1ED4();
void *igGamecubeImageConvert_getMetaCall();
void *igImageUtils_getMeta();
void fn_800D1F44();
void igImageUtils_register();
void *igImageUtils_getMetaCall();
void *igImageList_getMeta();
void *igImageList_vtableRead();
void fn_800D2150();
void igImageList_register();
void *igImageList_getMetaCall();
void *igMemoryImage_getMeta();
void fn_800D2240();
void igMemoryImage_register();
void *igMemoryImage_getMetaCall();
void *fn_800D22EC();
void *igFileImage_getMeta();
void fn_800D2330();
void igFileImage_register();
void *igFileImage_getMetaCall();
void *igImage_getMeta();
void fn_800D248C();
void igImage_register();
void *igImage_getMetaCall();
}
struct UnknownGenObject800D20E0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igGamecubeIndexArray_getMetaCall(){return igGamecubeIndexArray_getMeta();}
void *igImageLoader_getMeta(){
 if(!lbl_80562F58 || !(reinterpret_cast<unsigned int *>(lbl_80562F58)[0x24/4]&4)) fn_800D1CF8();
 return lbl_80562F58;
}
void fn_800D1CF8(){
 fn_80066188((int)igImageLoader_register);
}
void igImageLoader_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F58,(int)igImageUtils_register,(int)fn_800D1DA4,(int)igImageLoader_getMetaCall,(int)lbl_80489894,8,0,0,0,0);
}
void *igImageLoader_getMetaCall(){return igImageLoader_getMeta();}
void *fn_800D1DA4(){return lbl_80562F60;}
void *fn_800D1DAC(void *object){
 fn_800D1E20();
 return fn_8006546C(lbl_80562F5C,object);
}
void *igImageConvert_getMeta(){
 if(!lbl_80562F5C || !(reinterpret_cast<unsigned int *>(lbl_80562F5C)[0x24/4]&4)) fn_800D1E20();
 return lbl_80562F5C;
}
void fn_800D1E20(){
 fn_80066188((int)igImageConvert_register);
}
void igImageConvert_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F5C,(int)igImageUtils_register,(int)fn_800D1DA4,(int)igImageConvert_getMetaCall,(int)lbl_804898A4,8,0,(int)fn_800D1ED4,0,0);
}
void *igImageConvert_getMetaCall(){return igImageConvert_getMeta();}
void *fn_800D1ED4(){
 void *value0=lbl_80562F5C;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igGamecubeImageConvert_getMetaCall;
 return value0;
}
void *igGamecubeImageConvert_getMetaCall(){return igGamecubeImageConvert_getMeta();}
void *igImageUtils_getMeta(){
 if(!lbl_80562F60 || !(reinterpret_cast<unsigned int *>(lbl_80562F60)[0x24/4]&4)) fn_800D1F44();
 return lbl_80562F60;
}
void fn_800D1F44(){
 fn_80066188((int)igImageUtils_register);
}
void igImageUtils_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F60,(int)igObject_register,(int)fn_800237D0,(int)igImageUtils_getMetaCall,(int)lbl_804898B4,8,0,0,0,0);
}
void *igImageUtils_getMetaCall(){return igImageUtils_getMeta();}
void *igNodeRefResolver_parentMeta(){return lbl_80565A18;}
UnknownGenHolder *fn_800D1FF8(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
void *fn_800D206C(void *object){
 fn_800D2150();
 return fn_8006546C(lbl_80562F6C,object);
}
void *igImageList_getMeta(){
 if(!lbl_80562F6C || !(reinterpret_cast<unsigned int *>(lbl_80562F6C)[0x24/4]&4)) fn_800D2150();
 return lbl_80562F6C;
}
void *igImageList_vtableRead(){
 UnknownGenObject800D20E0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047E1F8;
 object.unknown00=lbl_80493CA8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D2150(){
 fn_80066188((int)igImageList_register);
}
void igImageList_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562F6C,(int)igObjectList_register,(int)fn_80024180,(int)igImageList_getMetaCall,(int)lbl_804898FC,20,(int)igImageList_vtableRead,0,0,(int)lbl_8055EB7C);
}
void *igImageList_getMetaCall(){return igImageList_getMeta();}
void *igMemoryImage_getMeta(){
 if(!lbl_80562F70 || !(reinterpret_cast<unsigned int *>(lbl_80562F70)[0x24/4]&4)) fn_800D2240();
 return lbl_80562F70;
}
void fn_800D2240(){
 fn_80066188((int)igMemoryImage_register);
}
void igMemoryImage_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F70,(int)igImage_register,(int)fn_800D22EC,(int)igMemoryImage_getMetaCall,(int)lbl_80489908,92,0,0,0,0);
}
void *igMemoryImage_getMetaCall(){return igMemoryImage_getMeta();}
void *fn_800D22EC(){return lbl_80562F78;}
void *igFileImage_getMeta(){
 if(!lbl_80562F74 || !(reinterpret_cast<unsigned int *>(lbl_80562F74)[0x24/4]&4)) fn_800D2330();
 return lbl_80562F74;
}
void fn_800D2330(){
 fn_80066188((int)igFileImage_register);
}
void igFileImage_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F74,(int)igImage_register,(int)fn_800D22EC,(int)igFileImage_getMetaCall,(int)lbl_80489918,92,0,0,0,0);
}
void *igFileImage_getMetaCall(){return igFileImage_getMeta();}
void *fn_800D23DC(void *object){
 fn_800D248C();
 return fn_8006546C(lbl_80562F78,object);
}
void *fn_800D2414(){
 if(!lbl_80562F78) lbl_80562F78=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562F78;
}
void *igImage_getMeta(){
 if(!lbl_80562F78 || !(reinterpret_cast<unsigned int *>(lbl_80562F78)[0x24/4]&4)) fn_800D248C();
 return lbl_80562F78;
}
void fn_800D248C(){
 fn_80066188((int)igImage_register);
}
void igImage_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F78,(int)igObject_register,(int)fn_800237D0,(int)igImage_getMetaCall,(int)lbl_8055EB8C,92,0,(int)fn_800D2544,(int)fn_800D26C4,(int)lbl_8055EB84);
}
void *igImage_getMetaCall(){return igImage_getMeta();}
}
#pragma pop
