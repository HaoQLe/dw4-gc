#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void arkRegister__Q33Gap4Core11igStringObjFv();
void fn_80021B94();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igObjectList_register();
void *igStringObjList_getMeta();
void igStringObjList_vtableRead();
extern char lbl_80463654[];
extern char lbl_80476A30[];
extern char lbl_8055D0B0[8];
extern void *lbl_805615A4;
extern void *lbl_805615A8;
extern void *lbl_805621F4;
void *igStringObjList_getMetaCall();
}
struct UnknownGenObject80025064_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void igStringObjList_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805615A4,(int)igObjectList_register,(int)fn_80024180,(int)igStringObjList_getMetaCall,(int)lbl_80463654,20,(int)igStringObjList_vtableRead,0,0,(int)lbl_8055D0B0);
}
void *igStringObjList_getMetaCall(){return igStringObjList_getMeta();}
void *fn_80024FB4(void *object){
 arkRegister__Q33Gap4Core11igStringObjFv();
 return fn_8006546C(lbl_805615A8,object);
}
void *fn_80024FEC(){
 if(!lbl_805615A8) lbl_805615A8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805615A8;
}
void *igStringObj_getMeta(){
 if(!lbl_805615A8 || !(reinterpret_cast<unsigned int *>(lbl_805615A8)[0x24/4]&4)) arkRegister__Q33Gap4Core11igStringObjFv();
 return lbl_805615A8;
}
void *igStringObj_vtableRead(){
 UnknownGenObject80025064_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80476A30;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
