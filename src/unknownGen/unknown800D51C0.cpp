#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D5498();
void igObjectList_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8048A44C[];
extern char lbl_80493168[];
extern char lbl_804931CC[];
extern char lbl_8055ECE0[8];
extern void *lbl_8056308C;
extern void *lbl_80563090;
void *igCustomMatrixStateList_getMeta();
void *igCustomMatrixStateList_vtableRead();
void fn_800D52A4();
void igCustomMatrixStateList_register();
void *igCustomMatrixStateList_getMetaCall();
}
struct UnknownGenObject800D5234_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D51C0(void *object){
 fn_800D52A4();
 return fn_8006546C(lbl_8056308C,object);
}
void *igCustomMatrixStateList_getMeta(){
 if(!lbl_8056308C || !(reinterpret_cast<unsigned int *>(lbl_8056308C)[0x24/4]&4)) fn_800D52A4();
 return lbl_8056308C;
}
void *igCustomMatrixStateList_vtableRead(){
 UnknownGenObject800D5234_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804931CC;
 object.unknown00=lbl_80493168;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D52A4(){
 fn_80066188((int)igCustomMatrixStateList_register);
}
void igCustomMatrixStateList_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_8056308C,(int)igObjectList_register,(int)fn_80024180,(int)igCustomMatrixStateList_getMetaCall,(int)lbl_8048A44C,20,(int)igCustomMatrixStateList_vtableRead,0,0,(int)lbl_8055ECE0);
}
void *igCustomMatrixStateList_getMetaCall(){return igCustomMatrixStateList_getMeta();}
void *fn_800D5358(void *object){
 fn_800D5498();
 return fn_8006546C(lbl_80563090,object);
}
void *igCustomMatrixState_getMeta(){
 if(!lbl_80563090 || !(reinterpret_cast<unsigned int *>(lbl_80563090)[0x24/4]&4)) fn_800D5498();
 return lbl_80563090;
}
}
#pragma pop
