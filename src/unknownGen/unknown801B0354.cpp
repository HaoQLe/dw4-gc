#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801AA950();
void *fn_801B0148();
void fn_801B0184();
void fn_801B0714();
extern char lbl_804AC918[];
extern void *lbl_80564660;
extern void *lbl_805648B8;
extern void *lbl_805648BC;
void fn_801B037C();
void *fn_801B03E4();
void *fn_801B0404();
}
extern "C" {
void fn_801B0354(){
 fn_80066188((int)fn_801B037C);
}
void fn_801B037C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648B8,(int)fn_801AA950,(int)fn_801B0404,(int)fn_801B03E4,(int)lbl_804AC918,36,(int)fn_801B0184,0,0,0);
}
void *fn_801B03E4(){return fn_801B0148();}
void *fn_801B0404(){return lbl_80564660;}
void *fn_801B040C(){
 if(!lbl_805648BC || !(reinterpret_cast<unsigned int *>(lbl_805648BC)[0x24/4]&4)) fn_801B0714();
 return lbl_805648BC;
}
}
#pragma pop
