#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801CE1D8();
void igObjectList_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B2A24[];
extern char lbl_804B57E4[];
extern char lbl_804B5848[];
extern char lbl_80560A50[8];
extern void *lbl_805621F4;
extern void *lbl_8056559C;
extern void *lbl_805655A0;
void *igActorList_getMeta();
void *igActorList_vtableRead();
void fn_801CDDE0();
void igActorList_register();
void *igActorList_getMetaCall();
}
struct UnknownGenObject801CDD70_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801CDCC0(void *object){
 fn_801CDDE0();
 return fn_8006546C(lbl_8056559C,object);
}
void *fn_801CDCF8(){
 if(!lbl_8056559C) lbl_8056559C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056559C;
}
void *igActorList_getMeta(){
 if(!lbl_8056559C || !(reinterpret_cast<unsigned int *>(lbl_8056559C)[0x24/4]&4)) fn_801CDDE0();
 return lbl_8056559C;
}
void *igActorList_vtableRead(){
 UnknownGenObject801CDD70_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B5848;
 object.unknown00=lbl_804B57E4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CDDE0(){
 fn_80066188((int)igActorList_register);
}
void igActorList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056559C,(int)igObjectList_register,(int)fn_80024180,(int)igActorList_getMetaCall,(int)lbl_804B2A24,20,(int)igActorList_vtableRead,0,0,(int)lbl_80560A50);
}
void *igActorList_getMetaCall(){return igActorList_getMeta();}
void *fn_801CDE94(){
 if(!lbl_805655A0) lbl_805655A0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805655A0;
}
void *igActor_getMeta(){
 if(!lbl_805655A0 || !(reinterpret_cast<unsigned int *>(lbl_805655A0)[0x24/4]&4)) fn_801CE1D8();
 return lbl_805655A0;
}
}
#pragma pop
