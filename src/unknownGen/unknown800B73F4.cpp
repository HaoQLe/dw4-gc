#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AD708();
void fn_800B754C();
void fn_800B88AC();
extern char lbl_80479800[];
extern char lbl_8047C7C0[];
extern char lbl_8047CD74[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805628D4;
void *fn_800B73F4();
void *fn_800B7430();
void fn_800B7494();
void fn_800B74BC();
void *fn_800B752C();
}
struct UnknownGenObject800B7430_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B73F4(){
 if(!lbl_805628D4 || !(reinterpret_cast<unsigned int *>(lbl_805628D4)[0x24/4]&4)) fn_800B7494();
 return lbl_805628D4;
}
void *fn_800B7430(){
 UnknownGenObject800B7430_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CD74;
 object.unknown00=lbl_8047C7C0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B7494(){
 fn_80066188((int)fn_800B74BC);
}
void fn_800B74BC(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805628D4,(int)fn_800B88AC,(int)fn_800AD708,(int)fn_800B752C,(int)lbl_80479800,20,(int)fn_800B7430,(int)fn_800B754C,0,0);
}
void *fn_800B752C(){return fn_800B73F4();}
}
#pragma pop
