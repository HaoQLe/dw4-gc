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
void fn_800AE924();
void *fn_800AEA50();
extern char lbl_80478304[];
extern char lbl_8047ADB8[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *lbl_80562504;
void *fn_800AE7D0();
void *fn_800AE80C();
void fn_800AE864();
void fn_800AE88C();
void *fn_800AE904();
}
struct UnknownGenObject800AE80C {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800AE75C(void *object){
 fn_800AE864();
 return fn_8006546C(lbl_80562504,object);
}
void *fn_800AE794(){
 if(!lbl_80562504) lbl_80562504=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562504;
}
void *fn_800AE7D0(){
 if(!lbl_80562504 || !(reinterpret_cast<unsigned int *>(lbl_80562504)[0x24/4]&4)) fn_800AE864();
 return lbl_80562504;
}
void *fn_800AE80C(){
 UnknownGenObject800AE80C object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047ADB8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800AE864(){
 fn_80066188((int)fn_800AE88C);
}
void fn_800AE88C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562504,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AE904,(int)lbl_80478304,40,(int)fn_800AE80C,(int)fn_800AE924,(int)fn_800AEA50,0);
}
void *fn_800AE904(){return fn_800AE7D0();}
}
#pragma pop
