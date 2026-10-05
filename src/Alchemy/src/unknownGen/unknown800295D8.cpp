#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_80029724();
void fn_80033A14();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_8046423C[];
extern char lbl_80472FA0[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern void *lbl_80561730;
void *fn_800295D8();
void *fn_80029614();
void fn_8002966C();
void fn_80029694();
void *fn_80029704();
}
struct UnknownGenObject80029614 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800295D8(){
 if(!lbl_80561730 || !(reinterpret_cast<unsigned int *>(lbl_80561730)[0x24/4]&4)) fn_8002966C();
 return lbl_80561730;
}
void *fn_80029614(){
 UnknownGenObject80029614 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002966C(){
 fn_80066188((int)fn_80029694);
}
void fn_80029694(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561730,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80029704,(int)lbl_8046423C,20,(int)fn_80029614,(int)fn_80029724,0,0);
}
void *fn_80029704(){return fn_800295D8();}
}
#pragma pop
