#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B8AF0();
extern char lbl_80479904[];
extern char lbl_80479920[];
extern char lbl_8047993C[];
extern char lbl_8047CCF4[];
extern char lbl_8047CE18[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E56C[4];
extern char lbl_8055E570[4];
extern char lbl_8055E574[4];
extern char lbl_8055E578[4];
extern void *lbl_805621F4;
extern void *lbl_8056292C;
extern void *lbl_80562934;
extern void *lbl_80562938;
void *fn_800B8694();
void *fn_800B86D0();
void fn_800B8728();
void fn_800B8750();
void *fn_800B87C0();
void fn_800B87E0();
void *fn_800B8848();
void fn_800B8884();
void fn_800B88AC();
void *fn_800B8910();
void *fn_800B89A4();
void *fn_800B89E0();
void fn_800B8A38();
void fn_800B8A60();
void *fn_800B8AD0();
}
struct UnknownGenObject800B86D0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B89E0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B8694(){
 if(!lbl_8056292C || !(reinterpret_cast<unsigned int *>(lbl_8056292C)[0x24/4]&4)) fn_800B8728();
 return lbl_8056292C;
}
void *fn_800B86D0(){
 UnknownGenObject800B86D0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CCF4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B8728(){
 fn_80066188((int)fn_800B8750);
}
void fn_800B8750(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056292C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B87C0,(int)lbl_80479904,16,(int)fn_800B86D0,(int)fn_800B87E0,0,0);
}
void *fn_800B87C0(){return fn_800B8694();}
void fn_800B87E0(){
 void *value0=lbl_8056292C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E56C,1);
 fn_800659C0(value0,lbl_8055E570,lbl_8055E574,lbl_8055E578,value1);
}
void *fn_800B8848(){
 if(!lbl_80562934 || !(reinterpret_cast<unsigned int *>(lbl_80562934)[0x24/4]&4)) fn_800B8884();
 return lbl_80562934;
}
void fn_800B8884(){
 fn_80066188((int)fn_800B88AC);
}
void fn_800B88AC(){
 fn_800ABC8C();
 fn_80066204(1,(int)&lbl_80562934,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B8910,(int)lbl_80479920,12,0,0,0,0);
}
void *fn_800B8910(){return fn_800B8848();}
void *fn_800B8930(void *object){
 fn_800B8A38();
 return fn_8006546C(lbl_80562938,object);
}
void *fn_800B8968(){
 if(!lbl_80562938) lbl_80562938=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562938;
}
void *fn_800B89A4(){
 if(!lbl_80562938 || !(reinterpret_cast<unsigned int *>(lbl_80562938)[0x24/4]&4)) fn_800B8A38();
 return lbl_80562938;
}
void *fn_800B89E0(){
 UnknownGenObject800B89E0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CE18;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B8A38(){
 fn_80066188((int)fn_800B8A60);
}
void fn_800B8A60(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562938,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B8AD0,(int)lbl_8047993C,20,(int)fn_800B89E0,(int)fn_800B8AF0,0,0);
}
void *fn_800B8AD0(){return fn_800B89A4();}
}
#pragma pop
