#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80152AC8();
void fn_80152B04();
void fn_80152CE4();
void fn_8015349C();
extern char lbl_804A0220[];
extern char lbl_804A022C[];
extern void *lbl_8056456C;
extern void *lbl_8056458C;
void fn_80152C44();
void *fn_80152CBC();
void *fn_80152CDC();
}
extern "C" {
void fn_80152C1C(){
 fn_80066188((int)fn_80152C44);
}
void fn_80152C44(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056456C,(int)fn_8015349C,(int)fn_80152CDC,(int)fn_80152CBC,(int)lbl_804A022C,40,(int)fn_80152B04,(int)fn_80152CE4,0,(int)lbl_804A0220);
}
void *fn_80152CBC(){return fn_80152AC8();}
void *fn_80152CDC(){return lbl_8056458C;}
}
#pragma pop
