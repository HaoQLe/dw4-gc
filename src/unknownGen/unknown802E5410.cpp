#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void fn_802E3908();
void *fn_802E52B4();
void fn_802E5300();
void fn_802E5714();
extern char lbl_80420EAC[];
extern char lbl_80535760[];
extern void *lbl_80535764;
extern void *lbl_805621F4;
void fn_802E5438();
void *fn_802E54A4();
}
extern "C" {
void fn_802E5410(){
 fn_80066188((int)fn_802E5438);
}
void fn_802E5438(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535760,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802E54A4,(int)lbl_80420EAC,32,(int)fn_802E5300,0,0,0);
}
void *fn_802E54A4(){return fn_802E52B4();}
void *fn_802E54C4(void *object){
 fn_802E5714();
 return fn_8006546C(lbl_80535764,object);
}
void *fn_802E5504(){
 if(!lbl_80535764) lbl_80535764=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535764;
}
void *fn_802E5558(){
 if(!lbl_80535764 || !(reinterpret_cast<unsigned int *>(lbl_80535764)[0x24/4]&4)) fn_802E5714();
 return lbl_80535764;
}
}
#pragma pop
