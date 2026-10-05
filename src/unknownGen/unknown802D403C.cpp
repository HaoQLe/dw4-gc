#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801BF938();
void fn_802B1AC8();
void *fn_802D3D38();
void fn_802D3D84();
void fn_802D4104();
void *fn_802D4238();
extern char lbl_8041FC38[];
extern char lbl_804D19A4[];
extern char lbl_80535174[];
void fn_802D4064();
void *fn_802D40E4();
}
extern "C" {
void fn_802D403C(){
 fn_80066188((int)fn_802D4064);
}
void fn_802D4064(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535174,(int)fn_801BF938,(int)fn_8011148C,(int)fn_802D40E4,(int)lbl_8041FC38,96,(int)fn_802D3D84,(int)fn_802D4104,(int)fn_802D4238,(int)lbl_804D19A4);
}
void *fn_802D40E4(){return fn_802D3D38();}
}
#pragma pop
