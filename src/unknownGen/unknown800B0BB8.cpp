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
void fn_800B0DC4();
extern char lbl_804788E8[];
extern char lbl_8047B448[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E184[8];
extern void *lbl_805621F4;
extern void *lbl_80562614;
void *fn_800B0C2C();
void *fn_800B0C68();
void fn_800B0D08();
void fn_800B0D30();
void *fn_800B0DA4();
}
struct UnknownGenRoot800B0C68 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B0C68(){fn_8006665C(this);}
};
struct UnknownGenObject800B0C68 : UnknownGenRoot800B0C68 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B0C68(){unknown00=lbl_8047B448;}
};
extern "C" {
void *fn_800B0BB8(void *object){
 fn_800B0D08();
 return fn_8006546C(lbl_80562614,object);
}
void *fn_800B0BF0(){
 if(!lbl_80562614) lbl_80562614=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562614;
}
void *fn_800B0C2C(){
 if(!lbl_80562614 || !(reinterpret_cast<unsigned int *>(lbl_80562614)[0x24/4]&4)) fn_800B0D08();
 return lbl_80562614;
}
void *fn_800B0C68(){
 UnknownGenObject800B0C68 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B448;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B0D08(){
 fn_80066188((int)fn_800B0D30);
}
void fn_800B0D30(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562614,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B0DA4,(int)lbl_804788E8,16,(int)fn_800B0C68,(int)fn_800B0DC4,0,(int)lbl_8055E184);
}
void *fn_800B0DA4(){return fn_800B0C2C();}
}
#pragma pop
