#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8012FC48();
void fn_80131E9C();
extern char lbl_8049BFA8[];
extern char lbl_8049BFB4[];
extern char lbl_804AA954[];
extern void *lbl_80563B2C;
void *fn_80131CD8();
void *fn_80131D14();
void fn_80131DDC();
void fn_80131E04();
void *fn_80131E7C();
}
struct UnknownGenRoot80131D14 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80131D14(){fn_8006665C(this);}
};
struct UnknownGenObject80131D14 : UnknownGenRoot80131D14 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject80131D14(){unknown00=lbl_804AA954;}
};
extern "C" {
void *fn_80131CA0(void *object){
 fn_80131DDC();
 return fn_8006546C(lbl_80563B2C,object);
}
void *fn_80131CD8(){
 if(!lbl_80563B2C || !(reinterpret_cast<unsigned int *>(lbl_80563B2C)[0x24/4]&4)) fn_80131DDC();
 return lbl_80563B2C;
}
void *fn_80131D14(){
 UnknownGenObject80131D14 object;
 object.unknown00=lbl_804AA954;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80131DDC(){
 fn_80066188((int)fn_80131E04);
}
void fn_80131E04(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B2C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80131E7C,(int)lbl_8049BFB4,24,(int)fn_80131D14,(int)fn_80131E9C,0,(int)lbl_8049BFA8);
}
void *fn_80131E7C(){return fn_80131CD8();}
}
#pragma pop
