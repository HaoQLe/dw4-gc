#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B2B2C();
void *fn_802BB94C();
void fn_802BB998();
void fn_802BBB40();
void fn_802E3284();
extern char lbl_8041DA4C[];
extern char lbl_804CF820[];
extern char lbl_8053481C[];
void fn_802BBAA4();
void *fn_802BBB20();
}
extern "C" {
void fn_802BBA7C(){
 fn_80066188((int)fn_802BBAA4);
}
void fn_802BBAA4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053481C,(int)fn_802E3284,(int)fn_802B2B2C,(int)fn_802BBB20,(int)lbl_8041DA4C,52,(int)fn_802BB998,(int)fn_802BBB40,0,(int)lbl_804CF820);
}
void *fn_802BBB20(){return fn_802BB94C();}
}
#pragma pop
