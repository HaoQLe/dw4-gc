#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80152CDC();
void *fn_801530E8();
void fn_80153124();
void fn_801532FC();
void fn_8015349C();
extern char lbl_804A0260[];
extern char lbl_804A026C[];
extern void *lbl_80564580;
void fn_80153264();
void *fn_801532DC();
}
extern "C" {
void fn_8015323C(){
 fn_80066188((int)fn_80153264);
}
void fn_80153264(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564580,(int)fn_8015349C,(int)fn_80152CDC,(int)fn_801532DC,(int)lbl_804A026C,40,(int)fn_80153124,(int)fn_801532FC,0,(int)lbl_804A0260);
}
void *fn_801532DC(){return fn_801530E8();}
}
#pragma pop
