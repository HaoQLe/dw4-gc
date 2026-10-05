#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80286F0C();
void fn_802B1AC8();
void *fn_802CFB88();
void fn_802CFBD4();
void fn_802CFD48();
extern char lbl_8041F8BC[];
extern char lbl_804D15EC[];
extern char lbl_80535068[];
void fn_802CFCAC();
void *fn_802CFD28();
}
extern "C" {
void fn_802CFC84(){
 fn_80066188((int)fn_802CFCAC);
}
void fn_802CFCAC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535068,(int)fn_80286F0C,(int)fn_80284550,(int)fn_802CFD28,(int)lbl_8041F8BC,36,(int)fn_802CFBD4,(int)fn_802CFD48,0,(int)lbl_804D15EC);
}
void *fn_802CFD28(){return fn_802CFB88();}
}
#pragma pop
