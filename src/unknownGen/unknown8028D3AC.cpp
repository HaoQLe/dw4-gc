#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801BF938();
void fn_8028C93C();
void *fn_8028D1B8();
void fn_8028D1F4();
void fn_8028D468();
extern char lbl_804CC7F4[];
extern char lbl_80561358[8];
extern void *lbl_805660E8;
void fn_8028D3D4();
void *fn_8028D448();
}
extern "C" {
void fn_8028D3AC(){
 fn_80066188((int)fn_8028D3D4);
}
void fn_8028D3D4(){
 fn_8028C93C();
 fn_80066204(0,(int)&lbl_805660E8,(int)fn_801BF938,(int)fn_8011148C,(int)fn_8028D448,(int)lbl_804CC7F4,96,(int)fn_8028D1F4,(int)fn_8028D468,0,(int)lbl_80561358);
}
void *fn_8028D448(){return fn_8028D1B8();}
}
#pragma pop
