#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void fn_80029694();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801C80D4();
extern char lbl_80472FA0[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_804B158C[];
extern char lbl_804B6B98[];
extern char lbl_804B6BFC[];
extern char lbl_80560858[8];
extern void *lbl_805621F4;
extern void *lbl_80565300;
extern void *lbl_80565304;
void *fn_801C7C10();
void *fn_801C7C4C();
void fn_801C7CBC();
void fn_801C7CE4();
void *fn_801C7D50();
}
struct UnknownGenObject801C7C4C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801C7BD8(void *object){
 fn_801C7CBC();
 return fn_8006546C(lbl_80565300,object);
}
void *fn_801C7C10(){
 if(!lbl_80565300 || !(reinterpret_cast<unsigned int *>(lbl_80565300)[0x24/4]&4)) fn_801C7CBC();
 return lbl_80565300;
}
void *fn_801C7C4C(){
 UnknownGenObject801C7C4C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_804B6BFC;
 object.unknown00=lbl_804B6B98;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C7CBC(){
 fn_80066188((int)fn_801C7CE4);
}
void fn_801C7CE4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565300,(int)fn_80029694,(int)fn_80023FDC,(int)fn_801C7D50,(int)lbl_804B158C,20,(int)fn_801C7C4C,0,0,(int)lbl_80560858);
}
void *fn_801C7D50(){return fn_801C7C10();}
void *fn_801C7D70(){
 if(!lbl_80565304) lbl_80565304=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565304;
}
void *fn_801C7DAC(){
 if(!lbl_80565304 || !(reinterpret_cast<unsigned int *>(lbl_80565304)[0x24/4]&4)) fn_801C80D4();
 return lbl_80565304;
}
}
#pragma pop
