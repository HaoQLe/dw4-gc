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
void fn_800AD950();
extern char lbl_80478154[];
extern char lbl_8047AAC0[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *lbl_805624B8;
void *fn_800AD804();
void *fn_800AD840();
void fn_800AD898();
void fn_800AD8C0();
void *fn_800AD930();
}
struct UnknownGenObject800AD840 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AD790(void *object){
 fn_800AD898();
 return fn_8006546C(lbl_805624B8,object);
}
void *fn_800AD7C8(){
 if(!lbl_805624B8) lbl_805624B8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805624B8;
}
void *fn_800AD804(){
 if(!lbl_805624B8 || !(reinterpret_cast<unsigned int *>(lbl_805624B8)[0x24/4]&4)) fn_800AD898();
 return lbl_805624B8;
}
void *fn_800AD840(){
 UnknownGenObject800AD840 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047AAC0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800AD898(){
 fn_80066188((int)fn_800AD8C0);
}
void fn_800AD8C0(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805624B8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AD930,(int)lbl_80478154,24,(int)fn_800AD840,(int)fn_800AD950,0,0);
}
void *fn_800AD930(){return fn_800AD804();}
}
#pragma pop
