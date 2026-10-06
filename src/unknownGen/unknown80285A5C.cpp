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
void fn_80285BB4();
extern char lbl_80416AD8[];
extern void *lbl_80515CC0;
extern void *lbl_805621F4;
void *fn_80285AB0();
void fn_80285AFC();
void fn_80285B24();
void *fn_80285B94();
}
extern "C" {
void *fn_80285A5C(){
 if(!lbl_80515CC0) lbl_80515CC0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515CC0;
}
void *fn_80285AB0(){
 if(!lbl_80515CC0 || !(reinterpret_cast<unsigned int *>(lbl_80515CC0)[0x24/4]&4)) fn_80285AFC();
 return lbl_80515CC0;
}
void fn_80285AFC(){
 fn_80066188((int)fn_80285B24);
}
void fn_80285B24(){
 fn_80284294();
 fn_80066204(1,(int)&lbl_80515CC0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80285B94,(int)lbl_80416AD8,8,0,(int)fn_80285BB4,0,0);
}
void *fn_80285B94(){return fn_80285AB0();}
}
#pragma pop
