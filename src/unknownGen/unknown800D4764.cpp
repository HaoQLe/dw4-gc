#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void *fn_800CE528();
void fn_800D4A88();
void fn_800D5908();
extern char lbl_8048A18C[];
extern char lbl_8049288C[];
extern char lbl_80492AD0[];
extern void *lbl_80563060;
extern void *lbl_8056306C;
void *fn_800D479C();
void *fn_800D47D8();
void fn_800D4824();
void fn_800D484C();
void *fn_800D48B4();
}
struct UnknownGenObject800D47D8 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *fn_800D4764(void *object){
 fn_800D4824();
 return fn_8006546C(lbl_80563060,object);
}
void *fn_800D479C(){
 if(!lbl_80563060 || !(reinterpret_cast<unsigned int *>(lbl_80563060)[0x24/4]&4)) fn_800D4824();
 return lbl_80563060;
}
void *fn_800D47D8(){
 UnknownGenObject800D47D8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80492AD0;
 object.unknown00=lbl_8049288C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D4824(){
 fn_80066188((int)fn_800D484C);
}
void fn_800D484C(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563060,(int)fn_800D5908,(int)fn_800CE528,(int)fn_800D48B4,(int)lbl_8048A18C,8,(int)fn_800D47D8,0,0,0);
}
void *fn_800D48B4(){return fn_800D479C();}
void *fn_800D48D4(){
 if(!lbl_8056306C || !(reinterpret_cast<unsigned int *>(lbl_8056306C)[0x24/4]&4)) fn_800D4A88();
 return lbl_8056306C;
}
}
#pragma pop
