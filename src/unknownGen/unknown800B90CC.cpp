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
void fn_800B9250();
extern char lbl_80479B50[];
extern char lbl_8047CFA0[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_8056297C;
void *fn_800B9104();
void *fn_800B9140();
void fn_800B9198();
void fn_800B91C0();
void *fn_800B9230();
}
struct UnknownGenObject800B9140_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B90CC(void *object){
 fn_800B9198();
 return fn_8006546C(lbl_8056297C,object);
}
void *fn_800B9104(){
 if(!lbl_8056297C || !(reinterpret_cast<unsigned int *>(lbl_8056297C)[0x24/4]&4)) fn_800B9198();
 return lbl_8056297C;
}
void *fn_800B9140(){
 UnknownGenObject800B9140_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CFA0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B9198(){
 fn_80066188((int)fn_800B91C0);
}
void fn_800B91C0(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056297C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B9230,(int)lbl_80479B50,20,(int)fn_800B9140,(int)fn_800B9250,0,0);
}
void *fn_800B9230(){return fn_800B9104();}
}
#pragma pop
