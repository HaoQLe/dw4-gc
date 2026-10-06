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
void fn_800B5384();
extern char lbl_8047926C[];
extern char lbl_8047C1B8[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *lbl_805627D4;
void *fn_800B5238();
void *fn_800B5274();
void fn_800B52CC();
void fn_800B52F4();
void *fn_800B5364();
}
struct UnknownGenObject800B5274_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B51C4(void *object){
 fn_800B52CC();
 return fn_8006546C(lbl_805627D4,object);
}
void *fn_800B51FC(){
 if(!lbl_805627D4) lbl_805627D4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805627D4;
}
void *fn_800B5238(){
 if(!lbl_805627D4 || !(reinterpret_cast<unsigned int *>(lbl_805627D4)[0x24/4]&4)) fn_800B52CC();
 return lbl_805627D4;
}
void *fn_800B5274(){
 UnknownGenObject800B5274_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C1B8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B52CC(){
 fn_80066188((int)fn_800B52F4);
}
void fn_800B52F4(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805627D4,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B5364,(int)lbl_8047926C,16,(int)fn_800B5274,(int)fn_800B5384,0,0);
}
void *fn_800B5364(){return fn_800B5238();}
}
#pragma pop
