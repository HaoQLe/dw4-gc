#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_80153534();
void fn_80153650();
extern char lbl_804A0284[];
extern char lbl_8055FD80[8];
extern void *lbl_8056458C;
extern void *lbl_80564594;
void *fn_80153438();
void fn_80153474();
void fn_8015349C();
void *fn_8015350C();
void *fn_8015352C();
}
extern "C" {
void *fn_80153438(){
 if(!lbl_8056458C || !(reinterpret_cast<unsigned int *>(lbl_8056458C)[0x24/4]&4)) fn_80153474();
 return lbl_8056458C;
}
void fn_80153474(){
 fn_80066188((int)fn_8015349C);
}
void fn_8015349C(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_8056458C,(int)fn_80153650,(int)fn_8015352C,(int)fn_8015350C,(int)lbl_804A0284,40,0,(int)fn_80153534,0,(int)lbl_8055FD80);
}
void *fn_8015350C(){return fn_80153438();}
void *fn_8015352C(){return lbl_80564594;}
}
#pragma pop
