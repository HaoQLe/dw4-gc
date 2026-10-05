#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80152CDC();
void *fn_80152E20();
void fn_80152E5C();
void fn_80153030();
void fn_8015349C();
extern char lbl_804A0248[];
extern char lbl_8055FD78[8];
extern void *lbl_80564578;
void fn_80152F9C();
void *fn_80153010();
}
extern "C" {
void fn_80152F74(){
 fn_80066188((int)fn_80152F9C);
}
void fn_80152F9C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564578,(int)fn_8015349C,(int)fn_80152CDC,(int)fn_80153010,(int)lbl_804A0248,40,(int)fn_80152E5C,(int)fn_80153030,0,(int)lbl_8055FD78);
}
void *fn_80153010(){return fn_80152E20();}
}
#pragma pop
