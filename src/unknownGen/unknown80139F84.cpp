#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80139DD0();
void fn_80139E0C();
void fn_8013A168();
void fn_80142630();
extern char lbl_8049D4FC[];
extern void *lbl_80563E18;
extern void *lbl_80563E1C;
extern void *lbl_8056407C;
void fn_80139FAC();
void *fn_8013A014();
void *fn_8013A034();
}
extern "C" {
void fn_80139F84(){
 fn_80066188((int)fn_80139FAC);
}
void fn_80139FAC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563E18,(int)fn_80142630,(int)fn_8013A034,(int)fn_8013A014,(int)lbl_8049D4FC,48,(int)fn_80139E0C,0,0,0);
}
void *fn_8013A014(){return fn_80139DD0();}
void *fn_8013A034(){return lbl_8056407C;}
void *fn_8013A03C(){
 if(!lbl_80563E1C || !(reinterpret_cast<unsigned int *>(lbl_80563E1C)[0x24/4]&4)) fn_8013A168();
 return lbl_80563E1C;
}
}
#pragma pop
