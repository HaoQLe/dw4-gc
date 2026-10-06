#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800BA89C();
extern char lbl_80477D08[];
extern char lbl_80479ED0[];
extern char lbl_8047D430[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E670[8];
extern void *lbl_805621F4;
extern void *lbl_80562A08;
extern void *lbl_80562A0C;
extern void *lbl_80562A10;
void *fn_800BA704();
void *fn_800BA740();
void fn_800BA7E0();
void fn_800BA808();
void *fn_800BA87C();
}
struct UnknownGenRoot800BA740 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800BA740(){fn_8006665C(this);}
};
struct UnknownGenObject800BA740 : UnknownGenRoot800BA740 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 char unknown1C[36];
 inline ~UnknownGenObject800BA740(){unknown00=lbl_8047D430;}
};
extern "C" {
void *fn_800BA5F8(){
 char *data=lbl_80477D08;
 if(!lbl_80562A08) lbl_80562A08=fn_800635C8(data+0x211C,data+0x2104,data+0x2110,0x3);
 return lbl_80562A08;
}
void *fn_800BA644(){
 char *data=lbl_80477D08;
 if(!lbl_80562A0C) lbl_80562A0C=fn_800635C8(data+0x21A8,data+0x2190,data+0x219C,0x3);
 return lbl_80562A0C;
}
void *fn_800BA690(void *object){
 fn_800BA7E0();
 return fn_8006546C(lbl_80562A10,object);
}
void *fn_800BA6C8(){
 if(!lbl_80562A10) lbl_80562A10=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562A10;
}
void *fn_800BA704(){
 if(!lbl_80562A10 || !(reinterpret_cast<unsigned int *>(lbl_80562A10)[0x24/4]&4)) fn_800BA7E0();
 return lbl_80562A10;
}
void *fn_800BA740(){
 UnknownGenObject800BA740 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D430;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BA7E0(){
 fn_80066188((int)fn_800BA808);
}
void fn_800BA808(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A10,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800BA87C,(int)lbl_80479ED0,52,(int)fn_800BA740,(int)fn_800BA89C,0,(int)lbl_8055E670);
}
void *fn_800BA87C(){return fn_800BA704();}
}
#pragma pop
