#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801CA5A4();
extern char lbl_804B1FE4[];
extern void *lbl_805621F4;
extern void *lbl_80565444;
void *fn_801CA4B4();
void fn_801CA4F0();
void fn_801CA518();
void *fn_801CA584();
}
extern "C" {
void *fn_801CA478(){
 if(!lbl_80565444) lbl_80565444=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565444;
}
void *fn_801CA4B4(){
 if(!lbl_80565444 || !(reinterpret_cast<unsigned int *>(lbl_80565444)[0x24/4]&4)) fn_801CA4F0();
 return lbl_80565444;
}
void fn_801CA4F0(){
 fn_80066188((int)fn_801CA518);
}
void fn_801CA518(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_80565444,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_801CA584,(int)lbl_804B1FE4,16,0,(int)fn_801CA5A4,0,0);
}
void *fn_801CA584(){return fn_801CA4B4();}
}
#pragma pop
