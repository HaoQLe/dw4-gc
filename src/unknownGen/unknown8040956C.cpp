#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284550();
void fn_80286F0C();
void fn_80402E28();
void *fn_804091F0();
void fn_8040923C();
void fn_80409630();
extern char lbl_80462C44[];
extern char lbl_804F1030[];
extern char lbl_8055CB40[];
void fn_80409594();
void *fn_80409610();
}
extern "C" {
void fn_8040956C(){
 fn_80066188((int)fn_80409594);
}
void fn_80409594(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CB40,(int)fn_80286F0C,(int)fn_80284550,(int)fn_80409610,(int)lbl_80462C44,56,(int)fn_8040923C,(int)fn_80409630,0,(int)lbl_804F1030);
}
void *fn_80409610(){return fn_804091F0();}
}
#pragma pop
