#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801C9B50();
extern char lbl_804AAFB8[];
extern char lbl_804B1BD4[];
extern char lbl_804B559C[];
extern char lbl_80560900[8];
extern void *lbl_805621F4;
extern void *lbl_805653B4;
extern void *lbl_805653B8;
extern void *lbl_805653BC;
void *fn_801C9958();
void *fn_801C9994();
void fn_801C9A94();
void fn_801C9ABC();
void *fn_801C9B30();
}
struct UnknownGenRoot801C9994 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C9994(){fn_8006665C(this);}
};
struct UnknownGenObject801C9994 : UnknownGenRoot801C9994 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 char unknown1C[92];
 UnknownGenRefMember unknown78;
 char unknown7C[44];
 inline ~UnknownGenObject801C9994(){unknown00=lbl_804B559C;}
};
extern "C" {
void *fn_801C984C(){
 char *data=lbl_804AAFB8;
 if(!lbl_805653B4) lbl_805653B4=fn_800635C8(data+0x6BDC,data+0x6BAC,data+0x6BC4,0x6);
 return lbl_805653B4;
}
void *fn_801C9898(){
 char *data=lbl_804AAFB8;
 if(!lbl_805653B8) lbl_805653B8=fn_800635C8(data+0x6C10,data+0x6BF8,data+0x6C04,0x3);
 return lbl_805653B8;
}
void *fn_801C98E4(void *object){
 fn_801C9A94();
 return fn_8006546C(lbl_805653BC,object);
}
void *fn_801C991C(){
 if(!lbl_805653BC) lbl_805653BC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805653BC;
}
void *fn_801C9958(){
 if(!lbl_805653BC || !(reinterpret_cast<unsigned int *>(lbl_805653BC)[0x24/4]&4)) fn_801C9A94();
 return lbl_805653BC;
}
void *fn_801C9994(){
 UnknownGenObject801C9994 object;
 object.unknown00=lbl_804B559C;
 object.unknown08.value=0;
 object.unknown18.value=0;
 object.unknown78.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C9A94(){
 fn_80066188((int)fn_801C9ABC);
}
void fn_801C9ABC(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805653BC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801C9B30,(int)lbl_804B1BD4,160,(int)fn_801C9994,(int)fn_801C9B50,0,(int)lbl_80560900);
}
void *fn_801C9B30(){return fn_801C9958();}
}
#pragma pop
