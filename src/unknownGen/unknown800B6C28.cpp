#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B6D94();
extern char lbl_8047969C[];
extern char lbl_804796B0[];
extern void *lbl_805621F4;
extern void *lbl_80562888;
void *fn_800B6C9C();
void fn_800B6CD8();
void fn_800B6D00();
void *fn_800B6D74();
}
extern "C" {
void *fn_800B6C28(void *object){
 fn_800B6CD8();
 return fn_8006546C(lbl_80562888,object);
}
void *fn_800B6C60(){
 if(!lbl_80562888) lbl_80562888=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562888;
}
void *fn_800B6C9C(){
 if(!lbl_80562888 || !(reinterpret_cast<unsigned int *>(lbl_80562888)[0x24/4]&4)) fn_800B6CD8();
 return lbl_80562888;
}
void fn_800B6CD8(){
 fn_80066188((int)fn_800B6D00);
}
void fn_800B6D00(){
 fn_800ABC8C();
 fn_80066204(1,(int)&lbl_80562888,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B6D74,(int)lbl_804796B0,48,0,(int)fn_800B6D94,0,(int)lbl_8047969C);
}
void *fn_800B6D74(){return fn_800B6C9C();}
}
#pragma pop
