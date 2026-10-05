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
void fn_800B9B7C();
extern char lbl_80479C74[];
extern char lbl_8047D1AC[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805629C8;
void *fn_800B9A30();
void *fn_800B9A6C();
void fn_800B9AC4();
void fn_800B9AEC();
void *fn_800B9B5C();
}
struct UnknownGenObject800B9A6C {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B9A30(){
 if(!lbl_805629C8 || !(reinterpret_cast<unsigned int *>(lbl_805629C8)[0x24/4]&4)) fn_800B9AC4();
 return lbl_805629C8;
}
void *fn_800B9A6C(){
 UnknownGenObject800B9A6C object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D1AC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B9AC4(){
 fn_80066188((int)fn_800B9AEC);
}
void fn_800B9AEC(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629C8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B9B5C,(int)lbl_80479C74,16,(int)fn_800B9A6C,(int)fn_800B9B7C,0,0);
}
void *fn_800B9B5C(){return fn_800B9A30();}
}
#pragma pop
