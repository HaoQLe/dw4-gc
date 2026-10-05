#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_80216620();
void fn_80217A8C();
extern char lbl_804BA504[];
extern char lbl_804BC534[];
extern void *lbl_80565A3C;
void *fn_80217958();
void *fn_80217994();
void fn_802179D4();
void fn_802179FC();
void *fn_80217A6C();
}
struct UnknownGenObject80217994 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80217958(){
 if(!lbl_80565A3C || !(reinterpret_cast<unsigned int *>(lbl_80565A3C)[0x24/4]&4)) fn_802179D4();
 return lbl_80565A3C;
}
void *fn_80217994(){
 UnknownGenObject80217994 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804BC534;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802179D4(){
 fn_80066188((int)fn_802179FC);
}
void fn_802179FC(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A3C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80217A6C,(int)lbl_804BA504,20,(int)fn_80217994,(int)fn_80217A8C,0,0);
}
void *fn_80217A6C(){return fn_80217958();}
}
#pragma pop
