#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_800CE2F8();
void fn_800D0194();
void *fn_800D78B0();
void *fn_800E2BEC();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804889BC[];
extern char lbl_804889D0[];
extern char lbl_80493F64[];
extern char lbl_80493FC8[];
extern char lbl_8055EACC[8];
extern void *lbl_805621F4;
extern void *lbl_80562DF8;
extern void *lbl_80562DFC;
void *fn_800CFED0();
void *fn_800CFF0C();
void fn_800CFF7C();
void fn_800CFFA4();
void *fn_800D0010();
void *fn_800D00A4();
void fn_800D00E0();
void fn_800D0108();
void *fn_800D0174();
}
struct UnknownGenObject800CFF0C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800CFE58(){return fn_800D78B0();}
void *fn_800CFE78(){return fn_800E2BEC();}
void *fn_800CFE98(void *object){
 fn_800CFF7C();
 return fn_8006546C(lbl_80562DF8,object);
}
void *fn_800CFED0(){
 if(!lbl_80562DF8 || !(reinterpret_cast<unsigned int *>(lbl_80562DF8)[0x24/4]&4)) fn_800CFF7C();
 return lbl_80562DF8;
}
void *fn_800CFF0C(){
 UnknownGenObject800CFF0C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80493FC8;
 object.unknown00=lbl_80493F64;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CFF7C(){
 fn_80066188((int)fn_800CFFA4);
}
void fn_800CFFA4(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562DF8,(int)fn_8002907C,(int)fn_80024180,(int)fn_800D0010,(int)lbl_804889BC,20,(int)fn_800CFF0C,0,0,(int)lbl_8055EACC);
}
void *fn_800D0010(){return fn_800CFED0();}
void *fn_800D0030(void *object){
 fn_800D00E0();
 return fn_8006546C(lbl_80562DFC,object);
}
void *fn_800D0068(){
 if(!lbl_80562DFC) lbl_80562DFC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562DFC;
}
void *fn_800D00A4(){
 if(!lbl_80562DFC || !(reinterpret_cast<unsigned int *>(lbl_80562DFC)[0x24/4]&4)) fn_800D00E0();
 return lbl_80562DFC;
}
void fn_800D00E0(){
 fn_80066188((int)fn_800D0108);
}
void fn_800D0108(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562DFC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800D0174,(int)lbl_804889D0,24,0,(int)fn_800D0194,0,0);
}
void *fn_800D0174(){return fn_800D00A4();}
}
#pragma pop
