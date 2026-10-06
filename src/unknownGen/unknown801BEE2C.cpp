#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801BEFA8();
extern char lbl_804B48D0[];
extern char lbl_805605A0[8];
extern char lbl_805605A8[7];
extern void *lbl_80564EB0;
void *fn_801BEE2C();
void *fn_801BEE68();
void fn_801BEEF0();
void fn_801BEF18();
void *fn_801BEF88();
}
struct UnknownGenRoot801BEE68 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BEE68(){fn_8006665C(this);}
};
struct UnknownGenObject801BEE68 : UnknownGenRoot801BEE68 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801BEE68(){unknown00=lbl_804B48D0;}
};
extern "C" {
void *fn_801BEE2C(){
 if(!lbl_80564EB0 || !(reinterpret_cast<unsigned int *>(lbl_80564EB0)[0x24/4]&4)) fn_801BEEF0();
 return lbl_80564EB0;
}
void *fn_801BEE68(){
 UnknownGenObject801BEE68 object;
 object.unknown00=lbl_804B48D0;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BEEF0(){
 fn_80066188((int)fn_801BEF18);
}
void fn_801BEF18(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EB0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801BEF88,(int)lbl_805605A8,12,(int)fn_801BEE68,(int)fn_801BEFA8,0,(int)lbl_805605A0);
}
void *fn_801BEF88(){return fn_801BEE2C();}
}
#pragma pop
