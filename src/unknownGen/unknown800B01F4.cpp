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
void fn_800B03B4();
extern char lbl_80478754[];
extern char lbl_8047B220[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *lbl_805625CC;
void *fn_800B0268();
void *fn_800B02A4();
void fn_800B02FC();
void fn_800B0324();
void *fn_800B0394();
}
struct UnknownGenObject800B02A4 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B01F4(void *object){
 fn_800B02FC();
 return fn_8006546C(lbl_805625CC,object);
}
void *fn_800B022C(){
 if(!lbl_805625CC) lbl_805625CC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805625CC;
}
void *fn_800B0268(){
 if(!lbl_805625CC || !(reinterpret_cast<unsigned int *>(lbl_805625CC)[0x24/4]&4)) fn_800B02FC();
 return lbl_805625CC;
}
void *fn_800B02A4(){
 UnknownGenObject800B02A4 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B220;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B02FC(){
 fn_80066188((int)fn_800B0324);
}
void fn_800B0324(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805625CC,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B0394,(int)lbl_80478754,16,(int)fn_800B02A4,(int)fn_800B03B4,0,0);
}
void *fn_800B0394(){return fn_800B0268();}
}
#pragma pop
