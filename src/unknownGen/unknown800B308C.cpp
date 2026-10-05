#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B3214();
extern char lbl_80478F00[];
extern char lbl_8047BB6C[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *lbl_80562718;
void *fn_800B30C8();
void *fn_800B3104();
void fn_800B315C();
void fn_800B3184();
void *fn_800B31F4();
}
struct UnknownGenObject800B3104 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B308C(){
 if(!lbl_80562718) lbl_80562718=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562718;
}
void *fn_800B30C8(){
 if(!lbl_80562718 || !(reinterpret_cast<unsigned int *>(lbl_80562718)[0x24/4]&4)) fn_800B315C();
 return lbl_80562718;
}
void *fn_800B3104(){
 UnknownGenObject800B3104 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047BB6C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B315C(){
 fn_80066188((int)fn_800B3184);
}
void fn_800B3184(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562718,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B31F4,(int)lbl_80478F00,16,(int)fn_800B3104,(int)fn_800B3214,0,0);
}
void *fn_800B31F4(){return fn_800B30C8();}
}
#pragma pop
