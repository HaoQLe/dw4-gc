#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B9F58();
extern char lbl_80479CB0[];
extern char lbl_8047D2AC[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *lbl_805629D8;
void *fn_800B9E0C();
void *fn_800B9E48();
void fn_800B9EA0();
void fn_800B9EC8();
void *fn_800B9F38();
}
struct UnknownGenObject800B9E48_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B9D98(void *object){
 fn_800B9EA0();
 return fn_8006546C(lbl_805629D8,object);
}
void *fn_800B9DD0(){
 if(!lbl_805629D8) lbl_805629D8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805629D8;
}
void *fn_800B9E0C(){
 if(!lbl_805629D8 || !(reinterpret_cast<unsigned int *>(lbl_805629D8)[0x24/4]&4)) fn_800B9EA0();
 return lbl_805629D8;
}
void *fn_800B9E48(){
 UnknownGenObject800B9E48_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D2AC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B9EA0(){
 fn_80066188((int)fn_800B9EC8);
}
void fn_800B9EC8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629D8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B9F38,(int)lbl_80479CB0,16,(int)fn_800B9E48,(int)fn_800B9F58,0,0);
}
void *fn_800B9F38(){return fn_800B9E0C();}
}
#pragma pop
