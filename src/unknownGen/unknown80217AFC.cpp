#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void *fn_80029E64(void *);
void fn_80033A14();
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80216620();
void fn_80217CBC();
extern char lbl_80472FA0[];
extern char lbl_804BA56C[];
extern char lbl_804BC474[];
extern char lbl_804BC4D4[];
extern void *lbl_805621F4;
extern void *lbl_80565A4C;
void *fn_80217B70();
void *fn_80217BAC();
void fn_80217C04();
void fn_80217C2C();
void *fn_80217C9C();
}
struct UnknownGenObject80217BAC {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80217AFC(void *object){
 fn_80217C04();
 return fn_8006546C(lbl_80565A4C,object);
}
void *fn_80217B34(){
 if(!lbl_80565A4C) lbl_80565A4C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565A4C;
}
void *fn_80217B70(){
 if(!lbl_80565A4C || !(reinterpret_cast<unsigned int *>(lbl_80565A4C)[0x24/4]&4)) fn_80217C04();
 return lbl_80565A4C;
}
void *fn_80217BAC(){
 UnknownGenObject80217BAC object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_804BC4D4;
 object.unknown00=lbl_804BC474;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80217C04(){
 fn_80066188((int)fn_80217C2C);
}
void fn_80217C2C(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A4C,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80217C9C,(int)lbl_804BA56C,20,(int)fn_80217BAC,(int)fn_80217CBC,0,0);
}
void *fn_80217C9C(){return fn_80217B70();}
}
#pragma pop
