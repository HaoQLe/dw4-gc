#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80338BA4();
void fn_80338BF0();
void fn_80338E78();
void fn_803396C8();
extern char lbl_8045437C[];
extern char lbl_804E2770[];
extern char lbl_80536178[];
extern void *lbl_805361B8;
void fn_80338DCC();
void *fn_80338E48();
void *fn_80338E68();
}
extern "C" {
void fn_80338DA4(){
 fn_80066188((int)fn_80338DCC);
}
void fn_80338DCC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536178,(int)fn_803396C8,(int)fn_80338E68,(int)fn_80338E48,(int)lbl_8045437C,56,(int)fn_80338BF0,(int)fn_80338E78,0,(int)lbl_804E2770);
}
void *fn_80338E48(){return fn_80338BA4();}
void *fn_80338E68(){return lbl_805361B8;}
}
#pragma pop
