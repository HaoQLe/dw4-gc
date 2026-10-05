#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_80035C70();
void fn_80035DA8();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801376D0();
void *fn_801379D8();
void fn_80137A14();
void fn_80137D9C();
extern char lbl_8049CDAC[];
extern char lbl_8049CDC0[];
extern char lbl_8049CDCC[];
extern void *lbl_805621F4;
extern void *lbl_80563D38;
extern void *lbl_80563D3C;
void fn_80137BE0();
void *fn_80137C48();
void *fn_80137CA4();
void fn_80137CE0();
void fn_80137D08();
void *fn_80137D7C();
}
extern "C" {
void fn_80137BB8(){
 fn_80066188((int)fn_80137BE0);
}
void fn_80137BE0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563D38,(int)fn_80137D08,(int)fn_801376D0,(int)fn_80137C48,(int)lbl_8049CDAC,80,(int)fn_80137A14,0,0,0);
}
void *fn_80137C48(){return fn_801379D8();}
void *fn_80137C68(){
 if(!lbl_80563D3C) lbl_80563D3C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563D3C;
}
void *fn_80137CA4(){
 if(!lbl_80563D3C || !(reinterpret_cast<unsigned int *>(lbl_80563D3C)[0x24/4]&4)) fn_80137CE0();
 return lbl_80563D3C;
}
void fn_80137CE0(){
 fn_80066188((int)fn_80137D08);
}
void fn_80137D08(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563D3C,(int)fn_80035DA8,(int)fn_80035C70,(int)fn_80137D7C,(int)lbl_8049CDCC,80,0,(int)fn_80137D9C,0,(int)lbl_8049CDC0);
}
void *fn_80137D7C(){return fn_80137CA4();}
}
#pragma pop
