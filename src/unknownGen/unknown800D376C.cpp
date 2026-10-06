#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void fn_8002907C();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D3B44();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80489F5C[];
extern char lbl_80489F6C[];
extern char lbl_80493778[];
extern char lbl_804937DC[];
extern char lbl_8055EC68[8];
extern void *lbl_805621F4;
extern void *lbl_80563004;
extern void *lbl_80563008;
extern void *lbl_8056300C;
void *fn_800D376C();
void fn_800D37A8();
void fn_800D37D0();
void *fn_800D3834();
void *fn_800D3890();
void *fn_800D38CC();
void fn_800D393C();
void fn_800D3964();
void *fn_800D39D0();
}
struct UnknownGenObject800D38CC_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D376C(){
 if(!lbl_80563004 || !(reinterpret_cast<unsigned int *>(lbl_80563004)[0x24/4]&4)) fn_800D37A8();
 return lbl_80563004;
}
void fn_800D37A8(){
 fn_80066188((int)fn_800D37D0);
}
void fn_800D37D0(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80563004,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_800D3834,(int)lbl_80489F5C,12,0,0,0,0);
}
void *fn_800D3834(){return fn_800D376C();}
void *fn_800D3854(){
 if(!lbl_80563008) lbl_80563008=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563008;
}
void *fn_800D3890(){
 if(!lbl_80563008 || !(reinterpret_cast<unsigned int *>(lbl_80563008)[0x24/4]&4)) fn_800D393C();
 return lbl_80563008;
}
void *fn_800D38CC(){
 UnknownGenObject800D38CC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804937DC;
 object.unknown00=lbl_80493778;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D393C(){
 fn_80066188((int)fn_800D3964);
}
void fn_800D3964(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563008,(int)fn_8002907C,(int)fn_80024180,(int)fn_800D39D0,(int)lbl_80489F6C,20,(int)fn_800D38CC,0,0,(int)lbl_8055EC68);
}
void *fn_800D39D0(){return fn_800D3890();}
void *fn_800D39F0(){
 if(!lbl_8056300C || !(reinterpret_cast<unsigned int *>(lbl_8056300C)[0x24/4]&4)) fn_800D3B44();
 return lbl_8056300C;
}
}
#pragma pop
