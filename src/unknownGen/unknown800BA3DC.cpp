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
void fn_800BA560();
extern char lbl_80479D5C[];
extern char lbl_8047D3B0[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805629F8;
void *fn_800BA414();
void *fn_800BA450();
void fn_800BA4A8();
void fn_800BA4D0();
void *fn_800BA540();
}
struct UnknownGenObject800BA450_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800BA3DC(void *object){
 fn_800BA4A8();
 return fn_8006546C(lbl_805629F8,object);
}
void *fn_800BA414(){
 if(!lbl_805629F8 || !(reinterpret_cast<unsigned int *>(lbl_805629F8)[0x24/4]&4)) fn_800BA4A8();
 return lbl_805629F8;
}
void *fn_800BA450(){
 UnknownGenObject800BA450_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D3B0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BA4A8(){
 fn_80066188((int)fn_800BA4D0);
}
void fn_800BA4D0(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629F8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800BA540,(int)lbl_80479D5C,24,(int)fn_800BA450,(int)fn_800BA560,0,0);
}
void *fn_800BA540(){return fn_800BA414();}
}
#pragma pop
