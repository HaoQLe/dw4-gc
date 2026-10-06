#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_80130490();
void fn_8013A878();
extern char lbl_8049BCDC[];
extern char lbl_804A2CCC[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *lbl_80563AB0;
void *fn_8013025C();
void *fn_80130298();
void fn_801303D8();
void fn_80130400();
void *fn_80130470();
}
struct UnknownGenRoot80130298 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80130298(){fn_8006665C(this);}
};
struct UnknownGenObject80130298_0 : UnknownGenRoot80130298 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80130298_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80130298_1 : UnknownGenObject80130298_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80130298_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80130298 : UnknownGenObject80130298_1 {
 char unknown2C[12];
 inline ~UnknownGenObject80130298(){unknown00=lbl_804A2CCC;}
};
extern "C" {
void *fn_8013025C(){
 if(!lbl_80563AB0 || !(reinterpret_cast<unsigned int *>(lbl_80563AB0)[0x24/4]&4)) fn_801303D8();
 return lbl_80563AB0;
}
void *fn_80130298(){
 UnknownGenObject80130298 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A2CCC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801303D8(){
 fn_80066188((int)fn_80130400);
}
void fn_80130400(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563AB0,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80130470,(int)lbl_8049BCDC,52,(int)fn_80130298,(int)fn_80130490,0,0);
}
void *fn_80130470(){return fn_8013025C();}
}
#pragma pop
