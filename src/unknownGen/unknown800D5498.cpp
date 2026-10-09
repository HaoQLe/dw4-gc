#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void *fn_800D5128();
void fn_800D575C();
void *igCustomMatrixState_getMeta();
void igCustomMatrixState_vtableRead();
void igCustomState_register();
void igObject_register();
extern char lbl_8048A464[];
extern char lbl_80492A68[];
extern char lbl_8055ECE8[4];
extern char lbl_8055ECEC[4];
extern char lbl_8055ECF0[4];
extern char lbl_8055ECF4[4];
extern char lbl_8055ECF8[7];
extern void *lbl_805621F4;
extern void *lbl_80563090;
extern void *lbl_80563098;
void igCustomMatrixState_register();
void *igCustomMatrixState_getMetaCall();
void igCustomMatrixState_fieldInit();
void *igClut_getMeta();
void *igClut_vtableRead();
void fn_800D56A8();
void igClut_register();
void *igClut_getMetaCall();
}
struct UnknownGenObject800D5668_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void fn_800D5498(){
 fn_80066188((int)igCustomMatrixState_register);
}
void igCustomMatrixState_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563090,(int)igCustomState_register,(int)fn_800D5128,(int)igCustomMatrixState_getMetaCall,(int)lbl_8048A464,76,(int)igCustomMatrixState_vtableRead,(int)igCustomMatrixState_fieldInit,0,0);
}
void *igCustomMatrixState_getMetaCall(){return igCustomMatrixState_getMeta();}
void igCustomMatrixState_fieldInit(){
 void *value0=lbl_80563090;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055ECE8,1);
 fn_800659C0(value0,lbl_8055ECEC,lbl_8055ECF0,lbl_8055ECF4,value1);
}
void *fn_800D55B8(void *object){
 fn_800D56A8();
 return fn_8006546C(lbl_80563098,object);
}
void *fn_800D55F0(){
 if(!lbl_80563098) lbl_80563098=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563098;
}
void *igClut_getMeta(){
 if(!lbl_80563098 || !(reinterpret_cast<unsigned int *>(lbl_80563098)[0x24/4]&4)) fn_800D56A8();
 return lbl_80563098;
}
void *igClut_vtableRead(){
 UnknownGenObject800D5668_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80492A68;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D56A8(){
 fn_80066188((int)igClut_register);
}
void igClut_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563098,(int)igObject_register,(int)fn_800237D0,(int)igClut_getMetaCall,(int)lbl_8055ECF8,32,(int)igClut_vtableRead,(int)fn_800D575C,0,0);
}
void *igClut_getMetaCall(){return igClut_getMeta();}
}
#pragma pop
