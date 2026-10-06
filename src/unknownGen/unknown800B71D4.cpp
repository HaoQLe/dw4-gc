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
void fn_800B7320();
extern char lbl_8047978C[];
extern char lbl_8047C740[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805628BC;
void *fn_800B71D4();
void *fn_800B7210();
void fn_800B7268();
void fn_800B7290();
void *fn_800B7300();
}
struct UnknownGenObject800B7210_0 {
 void *unknown00;
 char unknown04[52];
};
extern "C" {
void *fn_800B71D4(){
 if(!lbl_805628BC || !(reinterpret_cast<unsigned int *>(lbl_805628BC)[0x24/4]&4)) fn_800B7268();
 return lbl_805628BC;
}
void *fn_800B7210(){
 UnknownGenObject800B7210_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C740;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B7268(){
 fn_80066188((int)fn_800B7290);
}
void fn_800B7290(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805628BC,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B7300,(int)lbl_8047978C,44,(int)fn_800B7210,(int)fn_800B7320,0,0);
}
void *fn_800B7300(){return fn_800B71D4();}
}
#pragma pop
