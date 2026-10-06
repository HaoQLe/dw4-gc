#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800ACC7C();
extern char lbl_80477F98[];
extern char lbl_8047A804[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_8056246C;
void *fn_800ACB30();
void *fn_800ACB6C();
void fn_800ACBC4();
void fn_800ACBEC();
void *fn_800ACC5C();
}
struct UnknownGenObject800ACB6C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800ACB30(){
 if(!lbl_8056246C || !(reinterpret_cast<unsigned int *>(lbl_8056246C)[0x24/4]&4)) fn_800ACBC4();
 return lbl_8056246C;
}
void *fn_800ACB6C(){
 UnknownGenObject800ACB6C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A804;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800ACBC4(){
 fn_80066188((int)fn_800ACBEC);
}
void fn_800ACBEC(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056246C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800ACC5C,(int)lbl_80477F98,16,(int)fn_800ACB6C,(int)fn_800ACC7C,0,0);
}
void *fn_800ACC5C(){return fn_800ACB30();}
}
#pragma pop
