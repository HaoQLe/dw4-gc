#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D05CC();
void igContextExt_register();
void *igGamecubeScissorExt_getMeta();
void igPrimLengthArray_register();
extern char lbl_80488A38[];
extern char lbl_80488A48[];
extern char lbl_80488A70[];
extern char lbl_80491C58[];
extern char lbl_80492510[];
extern void *lbl_80561DF8;
extern void *lbl_805621F4;
extern void *lbl_80562E10;
extern void *lbl_80562E14;
extern void *lbl_80562E1C;
extern void *lbl_80562E24;
void *igUserUCodeExt_getMeta();
void fn_800D0270();
void igUserUCodeExt_register();
void *igUserUCodeExt_getMetaCall();
void *fn_800D031C();
void *igScissorExt_getMeta();
void fn_800D039C();
void igScissorExt_register();
void *igScissorExt_getMetaCall();
void *fn_800D0450();
void *igGamecubeScissorExt_getMetaCall();
void *igPrimLengthArray1_1_getMeta();
void *igPrimLengthArray1_1_vtableRead();
void fn_800D050C();
void igPrimLengthArray1_1_register();
void *igPrimLengthArray1_1_getMetaCall();
void *igPrimLengthArray1_1_parentMeta();
}
struct UnknownGenObject800D04C0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igUserUCodeExt_getMeta(){
 if(!lbl_80562E10 || !(reinterpret_cast<unsigned int *>(lbl_80562E10)[0x24/4]&4)) fn_800D0270();
 return lbl_80562E10;
}
void fn_800D0270(){
 fn_80066188((int)igUserUCodeExt_register);
}
void igUserUCodeExt_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562E10,(int)igContextExt_register,(int)fn_800D031C,(int)igUserUCodeExt_getMetaCall,(int)lbl_80488A38,20,0,0,0,0);
}
void *igUserUCodeExt_getMetaCall(){return igUserUCodeExt_getMeta();}
void *fn_800D031C(){return lbl_80561DF8;}
void *fn_800D0324(){
 if(!lbl_80562E14) lbl_80562E14=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562E14;
}
void *igScissorExt_getMeta(){
 if(!lbl_80562E14 || !(reinterpret_cast<unsigned int *>(lbl_80562E14)[0x24/4]&4)) fn_800D039C();
 return lbl_80562E14;
}
void fn_800D039C(){
 fn_80066188((int)igScissorExt_register);
}
void igScissorExt_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562E14,(int)igContextExt_register,(int)fn_800D031C,(int)igScissorExt_getMetaCall,(int)lbl_80488A48,20,0,(int)fn_800D0450,0,0);
}
void *igScissorExt_getMetaCall(){return igScissorExt_getMeta();}
void *fn_800D0450(){
 void *value0=lbl_80562E14;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igGamecubeScissorExt_getMetaCall;
 return value0;
}
void *igGamecubeScissorExt_getMetaCall(){return igGamecubeScissorExt_getMeta();}
void *igPrimLengthArray1_1_getMeta(){
 if(!lbl_80562E1C || !(reinterpret_cast<unsigned int *>(lbl_80562E1C)[0x24/4]&4)) fn_800D050C();
 return lbl_80562E1C;
}
void *igPrimLengthArray1_1_vtableRead(){
 UnknownGenObject800D04C0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80491C58;
 object.unknown00=lbl_80492510;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D050C(){
 fn_80066188((int)igPrimLengthArray1_1_register);
}
void igPrimLengthArray1_1_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562E1C,(int)igPrimLengthArray_register,(int)igPrimLengthArray1_1_parentMeta,(int)igPrimLengthArray1_1_getMetaCall,(int)lbl_80488A70,20,(int)igPrimLengthArray1_1_vtableRead,(int)fn_800D05CC,0,0);
}
void *igPrimLengthArray1_1_getMetaCall(){return igPrimLengthArray1_1_getMeta();}
void *igPrimLengthArray1_1_parentMeta(){return lbl_80562E24;}
}
#pragma pop
