#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065DBC(int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801BDDD4();
void fn_801F5C1C(int);
void fn_801F5CE8();
void *fn_801F5D14();
extern char lbl_804AF2A0[];
extern char lbl_804B7684[];
extern char lbl_8056055C[8];
extern void *lbl_805621F4;
extern void *lbl_80564E5C;
void *fn_801BDBDC();
void *fn_801BDC18();
void fn_801BDD18();
void fn_801BDD40();
void *fn_801BDDB4();
}
struct UnknownGenRoot801BDC18 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BDC18(){fn_8006665C(this);}
};
struct UnknownGenObject801BDC18 : UnknownGenRoot801BDC18 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject801BDC18(){unknown00=lbl_804B7684;}
};
extern "C" {
void fn_801BDB1C(){
 fn_801F5CE8();
 fn_80065DBC((int)fn_801F5C1C);
}
void *fn_801BDB48(){return fn_801F5D14();}
void *fn_801BDB68(void *object){
 fn_801BDD18();
 return fn_8006546C(lbl_80564E5C,object);
}
void *fn_801BDBA0(){
 if(!lbl_80564E5C) lbl_80564E5C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564E5C;
}
void *fn_801BDBDC(){
 if(!lbl_80564E5C || !(reinterpret_cast<unsigned int *>(lbl_80564E5C)[0x24/4]&4)) fn_801BDD18();
 return lbl_80564E5C;
}
void *fn_801BDC18(){
 UnknownGenObject801BDC18 object;
 object.unknown00=lbl_804B7684;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BDD18(){
 fn_80066188((int)fn_801BDD40);
}
void fn_801BDD40(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564E5C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801BDDB4,(int)lbl_8056055C,20,(int)fn_801BDC18,(int)fn_801BDDD4,0,(int)lbl_804AF2A0);
}
void *fn_801BDDB4(){return fn_801BDBDC();}
}
#pragma pop
