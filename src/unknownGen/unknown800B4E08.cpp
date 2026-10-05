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
void fn_800B4F8C();
extern char lbl_80479200[];
extern char lbl_8047C0B8[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805627B8;
void *fn_800B4E40();
void *fn_800B4E7C();
void fn_800B4ED4();
void fn_800B4EFC();
void *fn_800B4F6C();
}
struct UnknownGenObject800B4E7C {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800B4E08(void *object){
 fn_800B4ED4();
 return fn_8006546C(lbl_805627B8,object);
}
void *fn_800B4E40(){
 if(!lbl_805627B8 || !(reinterpret_cast<unsigned int *>(lbl_805627B8)[0x24/4]&4)) fn_800B4ED4();
 return lbl_805627B8;
}
void *fn_800B4E7C(){
 UnknownGenObject800B4E7C object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C0B8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B4ED4(){
 fn_80066188((int)fn_800B4EFC);
}
void fn_800B4EFC(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805627B8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B4F6C,(int)lbl_80479200,28,(int)fn_800B4E7C,(int)fn_800B4F8C,0,0);
}
void *fn_800B4F6C(){return fn_800B4E40();}
}
#pragma pop
