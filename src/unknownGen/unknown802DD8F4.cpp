#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beDataBaseList_getMeta();
void beDataBaseList_vtableRead();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802DDD74();
void igObjectList_register();
extern char lbl_80420678[];
extern char lbl_804D24C4[];
extern char lbl_80535480[];
extern void *lbl_80535484;
extern void *lbl_805621F4;
void beDataBaseList_register();
void *beDataBaseList_getMetaCall();
}
extern "C" {
void fn_802DD8F4(){
 fn_80066188((int)beDataBaseList_register);
}
void beDataBaseList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535480,(int)igObjectList_register,(int)fn_80024180,(int)beDataBaseList_getMetaCall,(int)lbl_80420678,20,(int)beDataBaseList_vtableRead,0,0,(int)lbl_804D24C4);
}
void *beDataBaseList_getMetaCall(){return beDataBaseList_getMeta();}
void *fn_802DD9B0(){
 if(!lbl_80535484) lbl_80535484=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535484;
}
void *beDataBase_getMeta(){
 if(!lbl_80535484 || !(reinterpret_cast<unsigned int *>(lbl_80535484)[0x24/4]&4)) fn_802DDD74();
 return lbl_80535484;
}
}
#pragma pop
