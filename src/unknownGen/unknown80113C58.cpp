#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8010CBD4();
void fn_80113F80();
extern char lbl_80495560[];
extern char lbl_80496834[];
extern void *lbl_805621F4;
extern void *lbl_80563804;
extern void *lbl_80563808;
void *fn_80113C94();
void *fn_80113CD0();
void fn_80113D10();
void fn_80113D38();
void *fn_80113DA0();
}
struct UnknownGenObject80113CD0 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *fn_80113C58(){
 if(!lbl_80563804) lbl_80563804=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563804;
}
void *fn_80113C94(){
 if(!lbl_80563804 || !(reinterpret_cast<unsigned int *>(lbl_80563804)[0x24/4]&4)) fn_80113D10();
 return lbl_80563804;
}
void *fn_80113CD0(){
 UnknownGenObject80113CD0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80496834;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80113D10(){
 fn_80066188((int)fn_80113D38);
}
void fn_80113D38(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563804,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80113DA0,(int)lbl_80495560,8,(int)fn_80113CD0,0,0,0);
}
void *fn_80113DA0(){return fn_80113C94();}
void *fn_80113DC0(){
 if(!lbl_80563808) lbl_80563808=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563808;
}
void *fn_80113DFC(){
 if(!lbl_80563808 || !(reinterpret_cast<unsigned int *>(lbl_80563808)[0x24/4]&4)) fn_80113F80();
 return lbl_80563808;
}
}
#pragma pop
