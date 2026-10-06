#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013B97C();
void fn_8014ED80();
extern char lbl_8049BC80[];
extern char lbl_8049FC88[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A75C8[];
extern char lbl_804AAF48[];
extern void *lbl_80564478;
extern void *lbl_8056447C;
void *fn_8014EB5C();
void *fn_8014EB98();
void fn_8014ECC8();
void fn_8014ECF0();
void *fn_8014ED60();
}
struct UnknownGenRoot8014EB98 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014EB98(){fn_8006665C(this);}
};
struct UnknownGenObject8014EB98_0 : UnknownGenRoot8014EB98 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014EB98_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014EB98 : UnknownGenObject8014EB98_0 {
 char unknown28[4];
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8014EB98(){unknown00=lbl_804A75C8;}
};
extern "C" {
void *fn_8014EB10(){
 char *data=lbl_8049BC80;
 if(!lbl_80564478) lbl_80564478=fn_800635C8(data+0x3FF8,data+0x3FE0,data+0x3FEC,0x3);
 return lbl_80564478;
}
void *fn_8014EB5C(){
 if(!lbl_8056447C || !(reinterpret_cast<unsigned int *>(lbl_8056447C)[0x24/4]&4)) fn_8014ECC8();
 return lbl_8056447C;
}
void *fn_8014EB98(){
 UnknownGenObject8014EB98 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A75C8;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014ECC8(){
 fn_80066188((int)fn_8014ECF0);
}
void fn_8014ECF0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056447C,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8014ED60,(int)lbl_8049FC88,48,(int)fn_8014EB98,(int)fn_8014ED80,0,0);
}
void *fn_8014ED60(){return fn_8014EB5C();}
}
#pragma pop
