#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800BBD48();
extern char lbl_8047A0FC[];
extern char lbl_8047D578[];
extern char lbl_8047D67C[];
extern char lbl_8047E50C[];
extern void *lbl_80562A7C;
void *fn_800BBBFC();
void *fn_800BBC38();
void fn_800BBC90();
void fn_800BBCB8();
void *fn_800BBD28();
}
struct UnknownGenObject800BBC38_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800BBBC4(void *object){
 fn_800BBC90();
 return fn_8006546C(lbl_80562A7C,object);
}
void *fn_800BBBFC(){
 if(!lbl_80562A7C || !(reinterpret_cast<unsigned int *>(lbl_80562A7C)[0x24/4]&4)) fn_800BBC90();
 return lbl_80562A7C;
}
void *fn_800BBC38(){
 UnknownGenObject800BBC38_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D67C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BBC90(){
 fn_80066188((int)fn_800BBCB8);
}
void fn_800BBCB8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A7C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800BBD28,(int)lbl_8047A0FC,20,(int)fn_800BBC38,(int)fn_800BBD48,0,0);
}
void *fn_800BBD28(){return fn_800BBBFC();}
}
#pragma pop
