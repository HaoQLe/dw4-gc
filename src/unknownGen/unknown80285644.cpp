#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_80284294();
void fn_8028579C();
extern char lbl_80416A8C[];
extern void *lbl_80515CAC;
extern void *lbl_805621F4;
void *fn_80285698();
void fn_802856E4();
void fn_8028570C();
void *fn_8028577C();
}
extern "C" {
void *fn_80285644(){
 if(!lbl_80515CAC) lbl_80515CAC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515CAC;
}
void *fn_80285698(){
 if(!lbl_80515CAC || !(reinterpret_cast<unsigned int *>(lbl_80515CAC)[0x24/4]&4)) fn_802856E4();
 return lbl_80515CAC;
}
void fn_802856E4(){
 fn_80066188((int)fn_8028570C);
}
void fn_8028570C(){
 fn_80284294();
 fn_80066204(1,(int)&lbl_80515CAC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8028577C,(int)lbl_80416A8C,8,0,(int)fn_8028579C,0,0);
}
void *fn_8028577C(){return fn_80285698();}
}
#pragma pop
