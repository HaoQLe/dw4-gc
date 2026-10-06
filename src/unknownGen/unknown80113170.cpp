#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void *fn_8010DB2C();
void fn_801119C4();
void fn_80113344();
extern char lbl_804953D0[];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char lbl_80496704[];
extern char lbl_8055F1A4[8];
extern void *lbl_805621F4;
extern void *lbl_805637C8;
void *fn_801131AC();
void *fn_801131E8();
void fn_80113288();
void fn_801132B0();
void *fn_80113324();
}
struct UnknownGenRoot801131E8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801131E8(){fn_8006665C(this);}
};
struct UnknownGenObject801131E8 : UnknownGenRoot801131E8 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 char unknown2C[4];
 inline ~UnknownGenObject801131E8(){unknown00=lbl_80496704;}
};
extern "C" {
void *fn_80113170(){
 if(!lbl_805637C8) lbl_805637C8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805637C8;
}
void *fn_801131AC(){
 if(!lbl_805637C8 || !(reinterpret_cast<unsigned int *>(lbl_805637C8)[0x24/4]&4)) fn_80113288();
 return lbl_805637C8;
}
void *fn_801131E8(){
 UnknownGenObject801131E8 object;
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_8049652C;
 object.unknown00=lbl_80496704;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80113288(){
 fn_80066188((int)fn_801132B0);
}
void fn_801132B0(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637C8,(int)fn_801119C4,(int)fn_8010DB2C,(int)fn_80113324,(int)lbl_804953D0,44,(int)fn_801131E8,(int)fn_80113344,0,(int)lbl_8055F1A4);
}
void *fn_80113324(){return fn_801131AC();}
}
#pragma pop
