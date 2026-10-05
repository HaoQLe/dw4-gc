#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_80023CFC();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_804632C0[];
extern void *lbl_80561504;
extern void *lbl_80561744;
extern void *lbl_805621F4;
void *fn_80023C04();
void fn_80023C40();
void fn_80023C68();
void *fn_80023CD4();
void *fn_80023CF4();
}
extern "C" {
void *fn_80023B90(void *object){
 fn_80023C40();
 return fn_8006546C(lbl_80561504,object);
}
void *fn_80023BC8(){
 if(!lbl_80561504) lbl_80561504=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561504;
}
void *fn_80023C04(){
 if(!lbl_80561504 || !(reinterpret_cast<unsigned int *>(lbl_80561504)[0x24/4]&4)) fn_80023C40();
 return lbl_80561504;
}
void fn_80023C40(){
 fn_80066188((int)fn_80023C68);
}
void fn_80023C68(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_80561504,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_80023CD4,(int)lbl_804632C0,48,0,(int)fn_80023CFC,0,0);
}
void *fn_80023CD4(){return fn_80023C04();}
void *fn_80023CF4(){return lbl_80561744;}
}
#pragma pop
