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
void fn_800B23E4();
extern char lbl_80478CD0[];
extern char lbl_8047B8E0[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805626B0;
void *fn_800B2298();
void *fn_800B22D4();
void fn_800B232C();
void fn_800B2354();
void *fn_800B23C4();
}
struct UnknownGenObject800B22D4 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B2298(){
 if(!lbl_805626B0 || !(reinterpret_cast<unsigned int *>(lbl_805626B0)[0x24/4]&4)) fn_800B232C();
 return lbl_805626B0;
}
void *fn_800B22D4(){
 UnknownGenObject800B22D4 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B8E0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B232C(){
 fn_80066188((int)fn_800B2354);
}
void fn_800B2354(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626B0,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B23C4,(int)lbl_80478CD0,16,(int)fn_800B22D4,(int)fn_800B23E4,0,0);
}
void *fn_800B23C4(){return fn_800B2298();}
}
#pragma pop
